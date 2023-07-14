const readline = require('node:readline')

const pluralize = require('pluralize')
const Articles = require('articles')

const list_formatter = new Intl.ListFormat('en', {
	style: 'long',
	type: 'conjunction',
})
const pluralRules = new Intl.PluralRules()

pluralize.addUncountableRule('junk')
pluralize.addUncountableRule('cutlery')

const isAre = (noun) => {
	// todo: check for irregular here
	switch (pluralize.isPlural(noun)) {
		case false:
			return 'is'
		case true:
			return 'are'
	}
}
const isAreNoun = (noun) => {
	// todo: check for irregular here
	switch (pluralize.isPlural(noun)) {
		case false:
			return 'is ' + noun
		case true:
			return 'are ' + noun
	}
}
const isAreArticalPlural = (noun, n) => {
	// todo: check for irregular here
	switch (pluralRules.select(n)) {
		case 'one':
			return 'is ' + Articles.articlize(noun)
		case 'other':
			return 'are ' + pluralize(noun)
	}
}
const runLocation = (game) => {
	const location = game.locations[game.location]
	const exits = Object.keys(location.exits)

	const objects = location.objects
	const objectNames = Object.keys(objects)
	let objectDescriptions = []
	if (objectNames.length > 0)
		objectDescriptions = objectNames.map((name) => {
			const noun = objects[name].noun
			if (pluralize.isSingular(noun))
				return Articles.articlize(noun)
			return noun
		})
	// console.log(objectDescriptions)

	console.log('')
	console.log('You are in', location.texts + '.')
	if (objectDescriptions.length > 0) {
		objectDescriptions[0] = isAreNoun(
			objectDescriptions[0],
		)
		console.log(
			'There',
			list_formatter.format(objectDescriptions),
			'here.',
		)
	}
	console.log(
		'There',
		isAreArticalPlural('exit', exits.length),
		list_formatter.format(exits) + '.',
	)
	console.log('')
}

const runUpdate = (game) => {
	runLocation(game)
}

const runSetup = (game) => {
	console.log('\n' + game.title)
	console.log('\nBy', game.author)
	console.log('\n' + game.text)

	game.location = game.start

	runUpdate(game)
}
const cleanCommand = (c) => {
	switch (c) {
		case 'l':
			return 'look'
		case 'n':
			return 'north'
		case 's':
			return 'south'
		case 'e':
			return 'east'
		case 'w':
			return 'west'
		case 'u':
			return 'up'
		case 'd':
			return 'down'
	}
	// nothing to change
	return c
}

const objectsByNouns = (objects) => {
	objs = {}
	const objectNames = Object.keys(objects)
	objectNames.forEach(
		(name) =>
			(objs[objects[name].noun] = objects[name]),
	)
	return objs
}
const directionsRx = /^north|south|east|west|up|down$/
const examineRx = /^ex(amine)?\s+([a-zA-Z][a-zA-Z\-0-9]*)$/

const isDirection = (d) => d.match(directionsRx) !== null
const runCommand = (game, command) => {
	const location = game.locations[game.location]
	command = cleanCommand(command)

	if (command === 'look') return true // enter room again
	if (isDirection(command)) {
		for ([direction, exit] of Object.entries(
			location.exits,
		)) {
			if (direction === command) {
				game.location = exit.to
				return true
			}
		}
		console.log("You can't go that way.")
		return false
	}
	const examine = command.match(examineRx)
	if (examine !== null) {
		const objectNoun = examine[2]
		const objByNouns = objectsByNouns(location.objects)
		const object = objByNouns[objectNoun]
		if (object === undefined) {
			console.log(
				'\nThere',
				isAre(objectNoun),
				'no',
				objectNoun,
				'here.\n',
			)
			return false
		}
		console.log('\n' + object.texts + '.\n')
		return false
	}
	console.log("\nSorry, I didn't understand that.\n")
}

const runGame = (game) => {
	const rl = readline.createInterface({
		input: process.stdin,
		output: process.stdout,
		prompt: '>> ',
	})

	runSetup(game)

	rl.prompt()
	rl.on('line', (line) => {
		const command = line.trim()
		switch (command) {
			case '':
				break
			case 'help':
				console.log('Help here…')
				break
			case 'quit!':
				console.log('Bye!')
				process.exit(0)
			default:
				const understood = runCommand(game, command)
				if (understood) runUpdate(game)
				break
		}
		rl.prompt()
	}).on('close', () => {
		console.log('Have a great day!')
		process.exit(0)
	})
}

module.exports = { runGame: runGame }
