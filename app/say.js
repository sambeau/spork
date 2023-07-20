// let _descriptions = {
// 	dog: {
// 		type: 'choose',
// 		from: [
// 			{
// 				type: 'lookup',
// 				id: 'dog',
// 			},
// 			{
// 				type: 'lookup',
// 				id: 'hound',
// 			},
// 		],
// 	},
// 	barking: {
// 		type: 'choose',
// 		from: [
// 			{
// 				type: 'lookup',
// 				id: 'barking',
// 			},
// 			{
// 				type: 'lookup',
// 				id: 'howling',
// 			},
// 		],
// 	},
//
// 	big: {
// 		type: 'choose',
// 		from: ['big', 'giant', 'huge', 'massive'],
// 	},
// 	'black-haired': [
// 		{
// 			type: 'choose',
// 			from: ['black', 'dark', 'raven'],
// 		},
// 		'-haired',
// 	],
// 	runs: {
// 		type: 'choose',
// 		from: ['bounds', 'clatters', 'leaps'],
// 	},
// 	comes: {
// 		type: 'choose',
// 		from: [
// 			[
// 				{
// 					type: 'lookup',
// 					id: 'runs',
// 				},
// 				'towards you',
// 			],
// 			'runs right at you',
// 		],
// 	},
// }

const lookUp = (descriptions, w) => {
	return descriptions[w]
}

const chooseFrom = (array) => {
	const r =
		array[Math.floor(Math.random() * array.length)]

	return r
}
const describeOne = (descriptions, lookingUp, d) => {
	// console.log('>>>', d)
	if (typeof d === 'string') {
		// console.log('string:', d)
		return d
	}

	switch (d.type) {
		case 'lookup':
			// console.log(
			// 	'lookup:',
			// 	d.id,
			// 	'lookingUp:',
			// 	lookingUp,
			// )
			if (lookingUp === d.id) {
				// console.log('lookingUp === d.id', d.id)
				return d.id
			}
			const found = lookUp(descriptions, d.id)
			if (!found) return d.id
			if (lookingUp === null) lookingUp = d.id
			if (Array.isArray(found))
				return describe(
					descriptions,
					lookingUp,
					found,
				)
			return describeOne(
				descriptions,
				lookingUp,
				found,
			)
		case 'choose':
			// console.log('choose:', d)
			const chosen = chooseFrom(d.from)
			// console.log('chosen:', chosen)
			if (typeof chosen === 'string') {
				// console.log('string:', chosen)
				return chosen
			}
			if (Array.isArray(chosen))
				return describe(
					descriptions,
					lookingUp,
					chosen,
				)

			return describeOne(
				descriptions,
				lookingUp,
				chosen,
			)
	}
}
const describe = (descriptions, lookingUp, ds) => {
	if (typeof ds === 'string') {
		return ds
	}
	if (Array.isArray(ds))
		return ds.map((d) =>
			describeOne(descriptions, lookingUp, d),
		)

	return describeOne(descriptions, lookingUp, ds)
}
const joinWithDashes = (ws) => {
	if (!ws || !Array.isArray(ws)) return ws
	ws = ws.flat()
	out = []
	for (i = 0; i < ws.length; i++) {
		if (i > 0 && ws[i] && ws[i][0] === '-')
			out[out.length - 1] =
				out[out.length - 1] + ws[i]
		else out.push(ws[i])
	}
	return out
}
// function main() {
//	console.log(
// 		'said:',
// 		joinWithDashes(
// 			describe(_descriptions, null, [
// 				'the',
// 				{ type: 'lookup', id: 'big' },
// 				{ type: 'lookup', id: 'black-haired' },
// 				{ type: 'lookup', id: 'barking' },
// 				{ type: 'lookup', id: 'dog' },
// 				{ type: 'lookup', id: 'comes' },
// 			]),
// 		),
// 	)
// }
// main()

const say = (descriptions, choice) => {
	// console.log('say:', choice)
	// console.log('descriptions:', descriptions)
	const out = joinWithDashes(
		describe(descriptions, null, choice),
	)
	// console.log('chose:', out)
	return out
}

module.exports = { say: say }
