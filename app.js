const Parser = require('tree-sitter');
const spork = require('../tree-sitter-spork');

const parser = new Parser();
parser.setLanguage(spork);

const sourceCode = 'game scarbarrow [title {The Scarbarrow Incident}]';
const tree = parser.parse(sourceCode);

console.log(tree.rootNode.toString());
console.log(tree.rootNode.children[1].text);
console.log(tree.rootNode.children[3].children[0]);
