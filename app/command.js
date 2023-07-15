// command (look|check|describe) (in|inside|contents) (of) it
// (look|check|describe)\s+(in|inside|contents)\s+((of)\s+)?(can|watering\s+can)
// (look|check|describe|peer)\s+(in|inside|contents)\s+((of)\s)?\s+(can|watering\s+can)$
// command = [
// 	{ type: 'word', word: 'please' },
// 	{
// 		type: 'choice',
// 		words: ['look', 'check', 'describe', 'peer'],
// 	},
// 	{
// 		type: 'choice',
// 		words: ['in', 'inside', 'into', 'contents'],
// 	},
// 	{ type: 'optional', words: ['of'] },
// 	{ type: 'it' },
// ]

const choiceToRegex = (choice) => {
	rx = choice.join('|')
	return '(' + rx + ')'
}
const optionalToRegex = (optional) => {
	return '(' + choiceToRegex(optional) + '\\s*)?'
}
const itToRegex = (objectNouns) => {
	return choiceToRegex(objectNouns)
}

const commandToRegex = (objectNouns, command) => {
	let rxs = []
	command.forEach((c) => {
		switch (c.type) {
			case 'word':
				rxs.push(c.word)
				break
			case 'choice':
				rxs.push(choiceToRegex(c.words))
				break
			case 'optional':
				rxs.push(optionalToRegex(c.words))
				break
			case 'it':
				rxs.push(itToRegex(objectNouns))
				break
			case 'thing':
				rxs.push('__THING__')
				break
		}
	})
	return new RegExp('^' + rxs.join('\\s*') + '$', 'i')
}

// function main() {
// 	const rx = commandToRegex(command, [
// 		'can',
// 		'watering\\s+can',
// 	])
// 	console.log(rx)
// 	console.log('please look in can'.match(rx))
// 	console.log('please peer into watering can'.match(rx))
// 	console.log('please look inside watering can'.match(rx))
// }
// main()

module.exports = { commandToRegex: commandToRegex }
