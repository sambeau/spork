// check.js

//
// todo: check facts/is names
//

const { syntaxError, gameError } = require('./error.js')

const isObjectEmpty = (objectName) => {
	return (
		objectName &&
		Object.keys(objectName).length === 0 &&
		objectName.constructor === Object
	)
}

const checkStart = (game) => {
	const errors = []
	if (game.start === undefined) {
		errors.push(
			gameError('game has no starting location'),
		)
		return errors
	}
	if (game.entities[game.start]?.type !== 'location')
		errors.push(
			gameError('game start is not a location'),
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
