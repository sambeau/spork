const write = (s) => process.stdout.write(s)


const jsonNodes = (mode, node) => {
	if (node === null || node === undefined) {
		return null
	}

	if (Array.isArray(node) && node.length > 0) {
		return node.map((n) =>
			jsonNodes(mode, n),
		)
	}

	let jsonNode = {}
	if (node.type)
		jsonNode.type = node.type
	else {
		jsonNode.type = null
	}

	if (node.fields?.length > 0)
		jsonNode.fields = node.fields

	if (mode === "fields" && node.fields?.length > 0) {
		node.fields.forEach(f => {
			if (node[f] !== null)
				jsonNode[f] = jsonNodes(mode, node[f])
		})
	}
	else
		if (node.children?.length > 0) {
			jsonNode.children = node.children?.map((n) =>
				jsonNodes(mode, n)
			)
		}
	return jsonNode
}

const printNode = (mode, node) => {
	console.log(JSON.stringify(jsonNodes(mode, node), null, 2))
	// console.log(jsonNodes(mode, node))
}

module.exports = { printNode: printNode }
