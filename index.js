// app

const fs = require('fs')
const { argv } = require('node:process')

const { parseGameCode } = require('./app/parse.js')
const {
	checkParseTreeForErrors,
	checkGameForErrors,
} = require('./app/check.js')
const { evalGame } = require('./app/eval.js')
const { runGame } = require('./app/run.js')

const main = () => {
	const fs = require('fs')
	let sourceCode
	if (argv.length < 3) {
		console.error('Error: No game file specified')
		process.exit(1)
	}
	try {
		sourceCode = fs.readFileSync(argv[2], 'utf8')
	} catch (err) {
		console.error(
			"Error: Can't open game file",
			argv[2],
		)
		process.exit(1)
	}

	const parseTree = parseGameCode(sourceCode)

	const syntaxErrors = checkParseTreeForErrors(parseTree)
	syntaxErrors.forEach((e) => console.log(e))

	const [game, evalErrors] = evalGame(parseTree)
	evalErrors.forEach((e) => console.log(e))

	const symanticErrors = checkGameForErrors(game)
	symanticErrors.forEach((e) => console.log(e))

	// Object.keys(game.entities).forEach(
	// 	(e) => (game.entities[e].game = null),
	// )
	// game.entities = null
	// console.log(
	// 	JSON.stringify(
	// 		game.locations['kitchen'].objects[
	// 			'garden-gnome'
	// 		],
	// 		null,
	// 		2,
	// 	),
	// )

	if (
		syntaxErrors.length > 0 ||
		evalErrors.length > 0 ||
		symanticErrors.length > 0
	)
		process.exit(1)
	else runGame(game)
}

main()
