// app

const fs = require('fs')

const { parseGameCode } = require('./app/parse.js')
const { evalGame } = require('./app/eval.js')
const { runGame } = require('./app/run.js')

// console.log(AvsAnSimple)

const main = () => {
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

	const tree = parseGameCode(sourceCode)
	const game = evalGame(tree)

	// console.log(JSON.stringify(game, null, 2))
	runGame(game)
}

main()
