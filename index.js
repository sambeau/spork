// app

const fs = require('fs')
const { argv } = require('node:process')

const { parseGameCode } = require('./app/parse.js')
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
	const game = evalGame(parseTree)

	// game.entities = null
	// console.log(
	// 	JSON.stringify(game.entities['shed'], null, 2),
	// )

	runGame(game)
}

main()
