const Parser = require('tree-sitter')
const spork = require('../tree-sitter-spork')

let tree

const parseGameCode = (sourceCode) => {
	const parser = new Parser()
	parser.setLanguage(spork)
	tree = parser.parse(sourceCode)
	return tree.rootNode
}

module.exports = {
	parseGameCode: parseGameCode,
}
