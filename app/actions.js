// action (look|check|describe) (in|inside|contents) (of) it
// (look|check|describe)\s+(in|inside|contents)\s+((of)\s+)?(can|watering\s+can)
// (look|check|describe|peer)\s+(in|inside|contents)\s+((of)\s)?\s+(can|watering\s+can)$
action = [
	{
		type: 'choice',
		words: ['look', 'check', 'describe', 'peer'],
	},
	{
		type: 'choice',
		words: ['in', 'inside', 'into', 'contents'],
	},
	{ type: 'optional', words: ['of'] },
	{ type: 'it' },
]

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

const actionToRegex = (action, objectNouns) => {
	let rxs = []
	action.forEach((c) => {
		switch (c.type) {
			case 'choice':
				rxs.push(choiceToRegex(c.words))
				break
			case 'optional':
				rxs.push(optionalToRegex(c.words))
				break
			case 'it':
				rxs.push(itToRegex(objectNouns))
				break
		}
	})
	return new RegExp('^' + rxs.join('\\s*') + '$', 'i')
}

function main() {
	const rx = actionToRegex(action, [
		'can',
		'watering\\s+can',
	])
	console.log(rx)
	console.log('look in can'.match(rx))
	console.log('peer into watering can'.match(rx))
	console.log('look inside watering can'.match(rx))
}
main()
