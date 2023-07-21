const linePos = (startPosition) => {
	return `on line ${startPosition.row + 1}, column ${startPosition.column + 1}`
}

const gameError = (message, location) => {
	return (`GAME ERROR: ${message} ${location ? linePos(location.startPosition) : ""}`)
}

const syntaxError = (node) => {
	return `SYNTAX ERROR: at '${node.text}' ${linePos(node.startPosition)}`
}

module.exports = {
	syntaxError: syntaxError, gameError: gameError, linePos: linePos
}
