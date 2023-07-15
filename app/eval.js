const { commandToRegex } = require('./command.js')

let parseTree
const error = (node, text) => {
	const sourceCode = parseTree.input // this is ugly
	const sourceLines = sourceCode.split('\n')
	const errorLine = sourceLines[node.startPosition.row]

	console.log(
		'syntax error:',
		text,
		'\n  at',
		'line',
		node.startPosition.row,
		':',
		node.startPosition.column,
		'\n  >>' + errorLine,
	)
	process.exit(1)
}

const getNodeValue = (node) =>
	node[node.length - 1].valueNode

const evalTitle = (scope, game) => {
	if (game.titleNodes.length === 0)
		error(game, 'game has no title')
	return evalText(scope, getNodeValue(game.titleNodes))
}

const evalAuthor = (scope, game) => {
	if (game.authorNodes.length === 0)
		error(game, 'game has no author')
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
	return Number(getNodeValue(game.versionNodes).text)
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
	// console.log(loc.fields)
	const name = loc.nameNode.text
	const location = {
		name: name,
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
		locations[location.name] = location
	})
	return locations
}

const evalExits = (scope, exits) => {
	return evalExit(scope, exits[exits.length - 1])
}

const evalExit = (scope, exits) => {
	const exit_defs = {}
	exits.children.forEach((exit) => {
		if (exit.type === 'exit_def')
			exit_defs[exit.directionNode.text] = {
				direction: exit.directionNode.text,
				to: exit.locationNode.text,
			}
	})
	// console.log(exit_defs)

	return exit_defs
}

const evalObject = (scope, obj) => {
	// console.log(obj.onNodes)
	const name = obj.nameNode.text
	const object = {
		// defs: loc.isNodes,
		name: name,
		noun: obj.nounNode.text,
	}
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
	objs.forEach((obj) => {
		const object = evalObject(scope, obj)
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
	if (game.startNodes.length === 0)
		error(game, 'game has no start')
	return game.startNodes[game.startNodes.length - 1]
		.locationNode.text
}

const evalText = (scope, textNode) => {
	return textNode.children
		.map((w) => {
			if (w.type === 'code')
				return evalCode(scope, w.codeNodes)
			else return w.text
		})
		.join(' ')
}

const evalTexts = (scope, textNodes) => {
	return textNodes
		.map((n) => evalText(scope, n))
		.join('\n\n')
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
	if (game.type !== 'game')
		error(game.children[0], "'game' expected")

	scope.name = game.gameNameNode.text
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
	scope.text = evalTexts(scope, game.textNodes)
	scope.start = evalStart(scope, game)

	//
	// do locations last
	//
	scope.locations = evalLocations(
		scope,
		game.locationNodes,
	)

	// apply the extra facts
	upDateEntitiesFacts(scope, extraFacts)

	console.log(JSON.stringify(scope, null, 2))

	return scope
}

module.exports = {
	evalGame: evalGame,
}
