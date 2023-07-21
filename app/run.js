const readline = require('node:readline')

const pluralize = require('pluralize')
const Articles = require('articles')

const { say } = require('./say.js')

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

const mapLocationObjects = (game, location, mapf) => {
	const objects = location.objects
	const objectNames = Object.keys(objects)
	if (objectNames.length > 0)
		resultsArray = objectNames.map((name) =>
			mapf(objects, name),
		)
	return resultsArray
}

const isObjectEmpty = (objectName) => {
	return (
		objectName &&
		Object.keys(objectName).length === 0 &&
		objectName.constructor === Object
	)
}

const runTexts = (scope, texts) => {
	// console.log(scope)
	if (Array.isArray(texts)) {
		let out = ''
		for (i = 0; i < texts.length; i++) {
			if (
				i > 0 &&
				texts[i].type !== 'paragraph' &&
				texts[i - 1].type !== 'paragraph'
			)
				out += ' '
			out += runTexts(scope, texts[i])
		}
		return out
	}
	switch (texts.type) {
		case 'string':
			return texts.string
		case 'lookup':
			return say(scope.describe, texts)
		case 'choose':
			return say(scope.describe, texts)
		case 'paragraph':
			return '\n\n'
	}
	return '(*' + texts.type + '*)'
}

const runLocation = (game) => {
	const location = game.locations[game.location]
	let objectDescriptions = mapLocationObjects(
		game,
		location,
		(objects, name) => {
			const noun = objects[name].noun
			if (pluralize.isSingular(noun))
				return Articles.articlize(noun)
			return noun
		},
	)
	// console.log(objectDescriptions)

	console.log('')
	console.log(
		'You are in',
		runTexts(location, location.texts) + '.',
	)
	if (objectDescriptions?.length > 0) {
		objectDescriptions[0] = isAreNoun(
			objectDescriptions[0],
		)
		console.log(
			'There',
			list_formatter.format(objectDescriptions),
			'here.',
		)
	}

	if (location.exits && location.exits !== 'none') {
		const exits = Object.keys(location.exits)
		console.log(
			'There',
			isAreArticalPlural('exit', exits.length),
			list_formatter.format(exits) + '.',
		)
	}
	console.log('')
}

const runUpdate = (game) => {
	runLocation(game)
}

const runSetup = (game) => {
	console.log('\n' + runTexts(game, game.title))
	console.log('\nBy', runTexts(game, game.author))
	console.log('\n' + runTexts(game, game.text))

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
const forEachLocationObjects = (game, location, mapf) => {
	const objects = location.objects
	const objectNames = Object.keys(objects)
	if (objectNames.length > 0)
		resultsArray = objectNames.forEach((name) => {
			if (mapf(objects, name)) return true
		})
	return false
}
const runUpdates = (game, object, updates) => {
	local = updates?.localUpdates
	if (!isObjectEmpty(local))
		Object.keys(local).forEach((k) => {
			const value = local[k]
			object.facts[k] = value
		})

	named = updates?.namedUpdates
	if (!isObjectEmpty(named)) {
		Object.keys(named).forEach((entity) => {
			if (!isObjectEmpty(named[entity]))
				Object.keys(named[entity]).forEach((k) => {
					const value = named[entity][k]
					if (!(entity in game.entities)) {
						console.log(
							`WARN: can't make ${entity} ${k}=${value} as there is no ${entity} entity`,
						)
					} else
						game.entities[entity].facts[k] =
							value
				})
		})
	}
}

const runBlock = (game, object, command) => {
	let outTexts = []
	command.block.forEach((s) => {
		switch (s.type) {
			case 'updates':
				runUpdates(game, object, s)
				break
			case 'text':
				outTexts.push(runTexts(game, s.text))
				break
		}
	})
	// console.log(game)
	return outTexts.join(' ')
}

const runOnCommands = (game, command) => {
	const location = game.locations[game.location]
	let understood = false
	forEachLocationObjects(
		game,
		location,
		(objects, name) => {
			const object = objects[name]
			object.onCommands.forEach((onCommand) => {
				if (command.match(onCommand.regex)) {
					understood = true
					// todo: actually run the command here
					const texts = runBlock(
						game,
						object,
						onCommand,
					)
					console.log('\n' + texts + '\n')
				}
			})
		},
	)

	return understood
}

const directionsRx = /^north|south|east|west|up|down$/
const examineRx = /^ex(amine)?\s+([a-zA-Z][a-zA-Z\-0-9]*)$/

const isDirection = (d) => d.match(directionsRx) !== null

const runCommand = (game, command) => {
	// returns 'new rooom'
	const location = game.locations[game.location]
	command = cleanCommand(command)

	if (runOnCommands(game, command)) return false

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
		console.log(
			'\n' + runTexts(object, object.texts) + '.\n',
		)
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
			case '!facts':
				console.log(`game:`, game.facts)
				Object.keys(game.entities).forEach((k) => {
					console.log(
						`${k}:`,
						game.entities[k].facts,
					)
				})
				break
			case '!here':
				console.log(game.locations[game.location])

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
