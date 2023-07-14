const Parser = require('tree-sitter')
const spork = require('../tree-sitter-spork')

let parseTree

const parseGameCode = (sourceCode) => {
	const parser = new Parser()
	parser.setLanguage(spork)
	parseTree = parser.parse(sourceCode)
	return parseTree.rootNode
}

module.exports = {
	parseGameCode: parseGameCode,
}
