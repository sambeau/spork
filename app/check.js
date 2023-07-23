// check.js

//
// todo: check facts/is names
//

const { syntaxError, gameError } = require('./error.js')

const isObject = (obj) =>
	typeof obj === 'object' &&
	!Array.isArray(obj) &&
	obj !== null

const isObjectEmpty = (objectName) => {
	return (
		objectName &&
		Object.keys(objectName).length === 0 &&
		objectName.constructor === Object
	)
}

const forObject = (object, f) => {
	Object.keys(object).forEach(k => {
		f(object[k], k, object)
	})
}

const mapObject = (object, f) => {
	let result = []
	Object.keys(object).forEach(k => result.push(f(object[k], k, object)))
	return result
}

const searchGameTree = (node, f) => {
	if (node === null
		|| typeof (node) === "undefined"
		// || typeof (node) === "boolean"
		// || typeof (node) === "number"
		// || typeof (node) === "bigint"
		// || typeof (node) === "string"
		// || typeof (node) === "symbol"
		// || typeof (node) === "function"
	)
		return

	if (Array.isArray(node) && node.length > 0) {
		node.forEach((n) => {
			if (n.type !== 'game' && n.type !== 'entities')
				searchGameTree(n, f)
		})
		return
	}

	if (isObject(node) && !isObjectEmpty(node)) {
		f(node)
		Object.keys(node).forEach(k => {
			if (k !== 'game' && k !== 'entities')
				searchGameTree(node[k], f)
		})
	}
}

// const checkForNameErrors = (game, node) => {
// 	let errorsFound = []
// 	// console.log("*")
// 	// if (node.type === 'name') {
// 	// 	if (!(node.name in game.entities))
// 	// 		errorsFound.push(gameError(`${node.name} does not exist`, node))
// 	// }
// 	// node.children?.forEach((n) =>
// 	// 	errorsFound.push(checkForNameErrors(game, n)),
// 	// )
// 	Object.keys(node).forEach(k => {
// 		const prop = node[k]
// 		if (isObject(prop)) {
// 			if (prop.type === 'name') {
// 				console.log(k)
// 			}
// 			errorsFound.push(checkForNameErrors(game, prop))
// 		} else if (Array.isArray(prop)) {
// 			prop.forEach(n => {
// 				errorsFound.push(checkForNameErrors(game, n))
// 			})
// 		}
// 	})
// 	return errorsFound.flat()
// }

function checkStart(game) {
	const errors = []
	if (game.start === undefined) {
		errors.push(
			gameError('game has no starting location')
		)
		return errors
	}
	if (game.entities[game.start]?.type !== 'location')
		errors.push(
			gameError('game start is not a location')
		)
	return errors
}

const checkLocationExits = (location) => {
	const exits = location.exits
	let errors = []
	if (exits == 'none') return []
	Object.keys(exits).forEach((dir) => {
		const dest = exits[dir].to
		if (!(dest in location.game.entities))
			errors.push(
				gameError(
					`exit '${dest}' does not exist, in location '${location.name}'`,
					location,
				),
			)
	})
	return errors
}

const checkLocation = (location) => {
	let errors = []
	if (location.texts.length === 0)
		errors.push(
			gameError(
				`location '${location.name}' has no description`,
				location,
			),
		)
	if (isObjectEmpty(location.exits))
		errors.push(
			gameError(
				`location '${location.name}' has no exits`,
				location,
			),
		)
	else
		errors = errors.concat(checkLocationExits(location))
	errors = errors.concat(checkObjects(location.objects))
	return errors
}

const checkLocations = (locations) => {
	let errors = []
	Object.keys(locations).forEach((name) => {
		const err = checkLocation(locations[name])
		if (err !== []) errors.push(err)
	})
	return errors.flat()
}

const checkObject = (object) => {
	const errors = []
	if (object.texts.length === 0)
		errors.push(
			gameError(
				`object '${object.name}' has no description`,
				object,
			),
		)
	// TODO: check blocks for things like entities in 'add'
	return errors
}

const checkObjects = (objects) => {
	let errors = []
	Object.keys(objects).forEach((name) => {
		const err = checkObject(objects[name])
		if (err !== []) errors.push(err)
	})
	return errors.flat()
}
const nameNotExist = (game, name) => {
	if (!name) return false
	if (name in game.entities && game.entities[name])
		return false
	return true
}
const checkGameForErrors = (game) => {
	let errors = []
	// check for game title
	if (game.title === undefined)
		errors.push(gameError('game has no title'))
	if (game.author === undefined)
		errors.push(gameError('game has no author'))
	if (game.text === undefined)
		errors.push(
			gameError('game has no introduction text'),
		)

	errors = errors.concat(checkStart(game))
	errors = errors.concat(checkLocations(game.locations))
	searchGameTree(game, (n) => {
		switch (n.type) {
			case 'name':
				if (nameNotExist(game, n.name))
					errors.push(gameError(n.name + ' does not exist', n))
				break
			case 'add':
				if (nameNotExist(game, n.objectName))
					errors.push(gameError(n.objectName + ' does not exist', n))
				if (nameNotExist(game, n.toName))
					errors.push(gameError(n.toName + ' does not exist', n))
				break

			case 'remove':
				if (nameNotExist(game, n.objectName))
					errors.push(gameError(n.objectName + ' does not exist', n))
				if (nameNotExist(game, n.fromName))
					errors.push(gameError(n.fromName + ' does not exist', n))
				break

			case 'updates':
				forObject(n.namedUpdates, (node, name) => {
					if (nameNotExist(game, name))
						errors.push(gameError(name + ' does not exist', n))
				})
				break

		}
	})

	return errors
}

const checkNodeForErrors = (node) => {
	let errorsFound = []
	if (node.type === 'ERROR') {
		errorsFound.push(syntaxError(node))
	}
	node.children?.forEach((n) =>
		errorsFound.push(checkNodeForErrors(n)),
	)
	return errorsFound.flat()
}

const checkParseTreeForErrors = (parseTree) => {
	return checkNodeForErrors(parseTree)
}

module.exports = {
	checkParseTreeForErrors: checkParseTreeForErrors,
	checkGameForErrors: checkGameForErrors,
}
