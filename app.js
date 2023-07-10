const Parser = require('tree-sitter');
const spork = require('../tree-sitter-spork');

let tree;

const error = (node, text) => {
	const sourceCode = tree.input;
	const sourceLines = sourceCode.split('\n');
	const errorLine = sourceLines[node.startPosition.row];

	console.log('syntax error:', text, '\n  at', 'line', node.startPosition.row, ':', node.startPosition.column, '\n  >>' + errorLine);
	process.exit(1);
};

const getNodeValue = node => node[node.length - 1].valueNode;

const parseTitle = game => {
	if (game.titleNodes.length === 0) error(game, 'game has no title');
	return getNodeValue(game.titleNodes).text;
};

const parseAuthor = game => {
	if (game.authorNodes.length === 0) error(game, 'game has no author');
	return getNodeValue(game.authorNodes).text;
};

const parseGame = game => {
	console.log(game.fields);
	if (game.type !== 'game') error(game.children[0], "'game' expected");
	return {
		name: game.gameNameNode.text,
		title: parseTitle(game),
		author: parseAuthor(game),
		version: getNodeValue(game.versionNodes).text,
		date: getNodeValue(game.dateNodes).text,
		text: game.textNodes.map(n => n.text).join(' '),
	};
};

const parseTextNode = textNode => {
	return textNode;
};

const printGame = game => {
	let ss = ['game', game.name ? game.name : '', '[', '\n', '\ttitle', game.title, '\n', '\tby', game.author, '\n', '\n', '\tversion', game.version, '\n', '\tcreated', game.date, '\n', '\ttext', game.text, '\n', ']'];
	return ss.join(' ');
};

const main = () => {
	const parser = new Parser();
	parser.setLanguage(spork);
	const sourceCode = `
	game scarbarrow-incident [

		title {The Scarbarrow Incident {2}}
		by {Sam Phillips}

		version 0.1
		created {today}

		{
			It is a lovely day in the quaint village of Scarbarrow. You are in a shed.
		}
	]
	`;
	tree = parser.parse(sourceCode);
	// console.log(tree.rootNode.children)
	// console.log(tree.rootNode.toString());
	const game = parseGame(tree.rootNode);
	console.log(game);
	console.log(printGame(game));
};

main();
