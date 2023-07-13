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

const evalTitle = (scope, game) => {
	if (game.titleNodes.length === 0) error(game, 'game has no title');
	return evalText(scope, getNodeValue(game.titleNodes));
};

const evalAuthor = (scope, game) => {
	if (game.authorNodes.length === 0) error(game, 'game has no author');
	return evalText(scope, getNodeValue(game.authorNodes));
};

const evalCreatedDate = (scope, game) => {
	return evalDate(evalText(scope, getNodeValue(game.dateNodes)));
};

const evalVersion = (scope, game) => {
	return Number(getNodeValue(game.versionNodes).text);
};

const evalDate = date => {
	return date; //convert to Date at some point
};

const evalSingleText = (scope, textNode) => {
	if (textNode.type === 'code') return evalCode(scope, textNode.codeNodes);
	else return textNode.text;
};

const evalText = (scope, textNode) => {
	return textNode.children
		.map(w => {
			if (w.type === 'code') return evalCode(scope, w.codeNodes);
			else return w.text;
		})
		.join(' ');
};

const evalTexts = (scope, textNodes) => {
	return textNodes.map(n => evalText(scope, n)).join(' ');
};

const evalCode = (scope, code) => {
	return code.map(value => {
		switch (value.type) {
			case 'int':
				return Number(value.text);
			case 'name':
				return scope[value.text];
			case 'text':
				return evalText(scope, value);
		}
	});
};

const evalGame = game => {
	console.log(game.fields);
	let scope = {
		today: new Date().toLocaleDateString(undefined, undefined),
	};
	if (game.type !== 'game') error(game.children[0], "'game' expected");

	scope.name = game.gameNameNode.text;
	scope.title = evalTitle(scope, game);
	scope.author = evalAuthor(scope, game);
	scope.date = evalCreatedDate(scope, game);
	scope.version = evalVersion(scope, game);
	scope.text = evalTexts(scope, game.textNodes);

	//
	// do locations last
	//

	// scope.locations = evalTexts(scope, game.locationNodes);
	// scope.locations = evalTexts(scope, game.locationNodes);

	return scope;
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
		by {Sam {{Phillips}}}

		version 0.1
		created {{today}}

		{# Welcome

		}
		{
			It is a lovely day in the quaint village of Scarbarrow. You are in a shed.
		}
	]
	`;
	tree = parser.parse(sourceCode);
	// console.log(tree.rootNode.children)
	// console.log(tree.rootNode.toString());
	const game = evalGame(tree.rootNode);
	console.log(game);
	console.log(printGame(game));
};

main();
