let descriptions = {
	big: {
		type: 'choose',
		from: ['big', 'giant', 'huge', 'massive'],
	},
	'black-haired': [
		{
			type: 'choose',
			from: ['black', 'dark', 'raven'],
		},
		'-haired',
	],
	dog: {
		type: 'choose',
		from: ['dog', 'hound', 'mongrel'],
	},
	runs: {
		type: 'choose',
		from: ['bounds', 'clatters', 'leaps'],
	},
	comes: {
		type: 'choose',
		from: [
			[
				{
					type: 'lookup',
					id: 'runs',
				},
				'towards you',
			],
			'runs right at you',
		],
	},
}

const lookUp = (w) => {
	return descriptions[w]
}

const chooseFrom = (array) => {
	const r =
		array[Math.floor(Math.random() * array.length)]

	return r
}
const describeOne = (d) => {
	if (typeof d === 'string') {
		return d
	}
	switch (d.type) {
		case 'lookup':
			const found = lookUp(d.id)
			if (!found) return d.id
			if (Array.isArray(found)) return describe(found)
			return describeOne(found)
		case 'choose':
			const chosen = chooseFrom(d.from)
			if (typeof chosen === 'string') {
				return chosen
			}
			if (Array.isArray(chosen))
				return describe(chosen)
	}
}
const describe = (ds) => {
	if (typeof ds === 'string') {
		return ds
	}
	if (Array.isArray(ds))
		return ds.map((d) => describeOne(d))

	// return describeOne(ds)
}
const joinWithDashes = (ws) => {
	ws = ws.flat()
	out = []
	for (i = 0; i < ws.length; i++) {
		if (i > 0 && ws[i][0] === '-')
			out[out.length - 1] =
				out[out.length - 1] + ws[i]
		else out.push(ws[i])
	}
	return out
}
function main() {
	console.log(
		'said:',
		joinWithDashes(
			describe([
				'the',
				{ type: 'lookup', id: 'big' },
				{ type: 'lookup', id: 'black-haired' },
				{ type: 'lookup', id: 'dog' },
				{ type: 'lookup', id: 'comes' },
			]),
		),
	)
}
main()
