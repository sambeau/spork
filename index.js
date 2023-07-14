// app

const readline = require('node:readline')
const fs = require('fs')

const { runGame } = require('./app/run.js')

const Parser = require('tree-sitter')
const spork = require('./tree-sitter-spork')

// console.log(AvsAnSimple)
let tree

const error = (node, text) => {
	const sourceCode = tree.input
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

const evalLocation = (scope, loc) => {
	// console.log(loc.fields)
	return {
		exits: evalExits(scope, loc.exitsNodes),
		// defs: loc.isNodes,
		name: loc.nameNode.text,
		objects: evalObjects(scope, loc.objectNodes),
		// states: loc.stateNodes,
		texts: evalTexts(scope, loc.textNodes),
		// traits: loc.traitNode,
	}
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
	// console.log(obj.fields)
	return {
		// defs: loc.isNodes,
		name: obj.nameNode.text,
		noun: obj.nounNode.text,
		// objects: evalObjects(scope, loc.objectNodes),
		// states: loc.stateNodes,
		texts: evalTexts(scope, obj.textNodes),
		// traits: loc.traitNode,
	}
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
	let scope = {
		today: new Date().toLocaleDateString(
			undefined,
			undefined,
		),
	}
	if (game.type !== 'game')
		error(game.children[0], "'game' expected")

	scope.name = game.gameNameNode.text
	scope.title = evalTitle(scope, game)
	scope.author = evalAuthor(scope, game)
	scope.date = evalCreatedDate(scope, game)
	scope.version = evalVersion(scope, game)
	scope.text = evalTexts(scope, game.textNodes)
	scope.start = evalStart(scope, game) //game.gameStartNode

	//
	// do locations last
	//

	scope.locations = evalLocations(
		scope,
		game.locationNodes,
	)

	return scope
}

const main = () => {
	const parser = new Parser()
	parser.setLanguage(spork)
	const fs = require('fs')
	let sourceCode
	try {
		sourceCode = fs.readFileSync(
			'games/scarbarrow.spk',
			'utf8',
		)
	} catch (err) {
		console.error(err)
		process.exit(1)
	}

	tree = parser.parse(sourceCode)
	const game = evalGame(tree.rootNode)
	// console.log(JSON.stringify(game, null, 2))
	runGame(game)
}

main()
