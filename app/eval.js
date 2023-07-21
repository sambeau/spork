const { commandToRegex } = require('./command.js')
const { gameError } = require('./error.js')

let parseTree

let errors = []

const getNodeValue = (node) => {
	return node[node.length - 1]?.valueNode
}
const evalTitle = (scope, game) => {
	return evalText(scope, getNodeValue(game.titleNodes))
}

const evalAuthor = (scope, game) => {
	return evalText(scope, getNodeValue(game.authorNodes))
}

const evalCreatedDate = (scope, game) => {
	return evalDate(
		evalText(scope, getNodeValue(game.dateNodes)),
	)
}

const evalDate = (date) => {
	return date //convert to Date at some point
}

const evalVersion = (scope, game) => {
	return Number(getNodeValue(game?.versionNodes)?.text)
}

const upDateEntitiesFacts = (scope, extraFacts) => {
	const entities = Object.keys(scope.entities)
	Object.keys(extraFacts).forEach((e) => {
		if (scope.entities[e]) {
			scope.entities[e].facts = {
				...scope.entities[e].facts,
				...extraFacts[e],
			}
			// console.log(scope.entities[e])
		} else {
			console.log("Error: Can't find entity: ", e)
		}
	})
}

const evalLocation = (scope, loc) => {

	const name = loc.nameNode?.text

	if (name === '') {
		errors.push(gameError(`location has no name`, loc))
	}

	const location = {
		type: 'location',
		name: name,
		game: scope,
		startPosition: loc.startPosition,
	}

	location.facts = {}
	let extraFacts = evalFacts(
		scope,
		location.facts,
		loc.isNodes,
	)

	location.exits = evalExits(scope, loc.exitsNodes)
	location.objects = evalObjects(scope, loc.objectNodes)
	location.states = loc.stateNodes
	location.texts = evalTexts(scope, loc.textNodes)
	location.traits = loc.traitNode
	location.describe = evalDescribe(
		scope,
		loc.describeNodes,
	)
	// register with game
	scope.entities[name] = location

	// update extra facts
	upDateEntitiesFacts(scope, extraFacts)
	return location
}

const evalLocations = (scope, locs) => {
	// console.log(locs)
	let locations = {}
	locs.forEach((loc) => {
		const location = evalLocation(scope, loc)

		if (location.name && location.name in locations)
			errors.push(gameError(`location '${location.name}' already exists`, loc))

		locations[location.name] = location
	})
	return locations
}

const evalExits = (scope, exits) => {
	return evalExit(scope, exits[exits.length - 1])
}

const evalTextOrChoices = (scope, value) => {
	switch (value.children[0].type) {
		case 'name':
			// return {
			// 	type: 'lookup',
			// 	id: value.text,
			// }
			return value.text
		case 'choice':
			return evalTextChoice(scope, value)
		case 'text':
			return evalText(scope, value)
	}
}
const evalTextChoice = (scope, textChoice) => {
	const choicenodes = textChoice.textOrChoiceNodes
	const choice = {
		type: 'choose',
		from: choicenodes.map((textChoice) => {
			return evalTextOrChoices(scope, textChoice)
		}),
	}
	return choice
}

const evalDescribe = (scope, describeNodes) => {

	let descriptions = {}
	if (!describeNodes || describeNodes?.length === 0)
		return
	describeNodes.forEach((describeNode) => {
		describeNode.descriptionsNodes.forEach(
			(description) => {
				if (description.type == 'description')
					descriptions[
						description.nameNode.text
					] = evalTextChoice(
						scope,
						description.textChoiceNode,
					)
			},
		)
	})
	// console.log(JSON.stringify(descriptions, null, 2))

	return descriptions
}

const evalExit = (scope, exits) => {
	const exit_defs = {}

	if (exits?.noneNode)
		return 'none'

	exits?.children?.forEach((exit) => {
		if (exit.type === 'exit_def') {
			exit_defs[exit.directionNode.text] = {
				direction: exit.directionNode.text,
				to: exit.locationNode.text,
			}
		}
	})
	// console.log(exit_defs)

	return exit_defs
}

const evalObject = (scope, obj) => {
	// if (obj.describeNodes.length > 0)
	// 	console.log(obj.fields)

	const name = obj.nameNode.text
	if (name === '') {
		errors.push(gameError(`object has no name`, obj))
	}
	const object = {
		type: 'object',
		name: name,
		noun: obj.nounNode.text,
		startPosition: obj.startPosition,
		game: scope,
	}

	object.describe = evalDescribe(scope, obj.describeNodes)

	object.facts = {}
	let extraFacts = evalFacts(
		scope,
		object.facts,
		obj.isNodes,
	)

	object.onCommands = evalOnCommands(
		scope,
		obj.nounNode.text,
		obj.onNodes,
	)
	// object.objects = evalObjects(scope, loc.objectNodes),
	// object.states = loc.stateNodes,
	object.texts = evalTexts(scope, obj.textNodes)
	// object.traits = loc.traitNode,

	scope.entities[name] = object // register entity before fact update

	// update extra facts
	upDateEntitiesFacts(scope, extraFacts)

	return object
}

const evalObjects = (scope, objs) => {
	// console.log(objs)
	let objects = {}
	objs?.forEach((obj) => {
		const object = evalObject(scope, obj)

		if (object.name && object.name in objects)
			errors.push(gameError(`object '${object.name}' already exists`, obj))

		objects[object.name] = object
	})
	return objects
}

const evalOnCommands = (scope, objectNouns, onCommands) => {
	let comsLists = []
	onCommands.forEach((onCom) => {
		const text = evalTexts(scope, onCom.textNodes)
		let wordList = []
		onCom.commandNode.wordsNode.children.forEach(
			(word) => {
				// console.log(word.type)
				switch (word.type) {
					case 'it':
						wordList.push({ type: 'it' })
						break
					case 'thing':
						wordList.push({ type: 'thing' })
						break
					case 'name':
						wordList.push({
							type: 'word',
							word: word.text,
						})
						break
					case 'optional_words':
						wordList.push({
							type: 'optional',
							words: word.wordsNodes.map(
								(w) => w.text,
							),
						})
						break
					case 'synonyms':
						wordList.push({
							type: 'choice',
							words: word.wordNodes.map(
								(w) => w.text,
							),
						})
				}
			},
		)
		comsLists.push({
			regex: commandToRegex([objectNouns], wordList), // todo: upgrade to real nounlist
			text: text,
		})
	})
	// console.log(comsLists)
	// console.log(JSON.stringify(comsLists, null, 2))

	return comsLists
}

const evalFacts = (scope, current, facts) => {
	let extraFacts = {}
	facts.forEach((f) => {
		// it is sunny
		if (f.subjectNode.itNode) {
			f.valuesNodes.forEach((v) => {
				if (v.type == 'boolean') {
					current[v.valueNode.text] =
						!v.negativeNode
				}
			})
		} else {
			// dogs are barking
			const thing = f.subjectNode.nameNode.text
			if (!extraFacts[thing]) extraFacts[thing] = {}
			f.valuesNodes.forEach((v) => {
				if (v.type == 'boolean') {
					extraFacts[thing][v.valueNode.text] =
						!v.negativeNode
				}
			})
		}
	})

	return extraFacts
}

const evalStart = (scope, game) => {
	return game.startNodes[game.startNodes.length - 1]?.locationNode?.text
}

const evalText = (scope, textNode) => {
	return textNode?.children?.map((w) => {
		// console.log('describe:', w.type)
		if (w.type === 'code')
			return {
				type: 'code',
				code: evalCode(scope, w.codeNodes),
			}
		if (w.type === 'lookUp') {
			// console.log('lookUp:', w)
			// console.log('lookUp:', w.fields)
			return { type: 'lookup', id: w.nameNode.text }
		}
		if (w.type === 'textChoice') {
			// console.log('!!textChoice:', w)
			// console.log(
			// 	'!!textChoice:',
			// 	w.textOrChoiceNodes,
			// )
			// console.log(evalTextChoice(scope, w))
			return evalTextChoice(scope, w)
		} else
			return {
				type: 'string',
				string: w.text,
			}
	})
}

const evalTexts = (scope, textNodes) => {
	let texts = []
	let first = true
	textNodes?.forEach((n) => {
		if (!first) {
			texts.push({ type: 'paragraph' })
		}
		first = false
		texts.push(evalText(scope, n))
	})
	return texts.flat()
}

const evalCode = (scope, code) => {
	return code.map((value) => {
		switch (value.type) {
			case 'int':
				return Number(value.text)
			case 'name':
				return scope[value.text]
			case 'text':
				return evalText(scope, value)
		}
	})
}

const evalGame = (game) => {
	// console.log(game.children)
	// console.log(game.fields)
	parseTree = game
	let scope = {
		today: new Date().toLocaleDateString(
			undefined,
			undefined,
		),
		entities: {},
	}

	scope.name = game.gameNameNode?.text
	if (scope.name === undefined) {
		errors.push(gameError(`game has no name`, game))
	}

	scope.facts = {}
	let extraFacts = evalFacts(
		scope,
		scope.facts,
		game.isNodes,
	)
	scope.title = evalTitle(scope, game)
	scope.author = evalAuthor(scope, game)
	scope.date = evalCreatedDate(scope, game)
	scope.version = evalVersion(scope, game)
	scope.objects = evalObjects(scope, game.objectNodes)
	scope.text = evalTexts(scope, game.textNodes)
	scope.start = evalStart(scope, game)
	scope.describe = evalDescribe(scope, game.describeNodes)
	//
	// do locations last
	//
	scope.locations = evalLocations(
		scope,
		game.locationNodes,
	)

	// apply the extra facts
	upDateEntitiesFacts(scope, extraFacts)

	// console.log(JSON.stringify(scope, null, 2))
	return [scope, errors]
}

module.exports = {
	evalGame: evalGame,
}
