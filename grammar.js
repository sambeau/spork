module.exports = grammar({
	name: 'spork',

	rules: {
		//
		game: ($) =>
			seq(
				'game',
				field('game_name', optional($.name)),
				'[',
				$._statements,
				']',
			),
		//
		_statements: ($) =>
			repeat1(
				choice(
					$._header_statement,
					$.is_statement,
					$.trait_statement,
					$.state_statement,
					field('text', $.text),
					$.enter_statement,
					$.location,
					$.object,
				),
			),
		//
		_header_statement: ($) =>
			choice(
				field('title', $.title_def),
				field('author', $.author_def),
				field('version', $.version_def),
				field('date', $.date_def),
			),
		title_def: ($) =>
			seq('title', field('value', $.text)),
		author_def: ($) =>
			seq(
				choice('by', 'author'),
				field('value', $.text),
			),
		version_def: ($) =>
			seq('version', field('value', $.float)),
		date_def: ($) =>
			seq('created', field('value', $.text)),
		//
		is_statement: ($) =>
			seq(
				choice(
					seq('it', 'is'),
					seq('they', 'are'),
					seq($.name, choice('is', 'are')),
				),
				$.name,
				repeat(seq(',', $.name)),
			),
		//
		trait_statement: ($) => seq('traits', $._trait_list),
		_trait_list: ($) =>
			seq($.trait_def, repeat(seq(',', $.trait_def))),
		trait_def: ($) => seq($.name, '|', $.name),
		//
		state_statement: ($) => seq('states', $._state_list),
		_state_list: ($) =>
			seq($.state_def, repeat(seq(',', $.state_def))),
		state_def: ($) =>
			seq(
				seq($.name, '|', $.name),
				repeat(seq('|', $.name)),
			),
		//
		enter_statement: ($) => seq('start', optional('in'), $.name),
		//
		location: ($) =>
			seq(
				'location',
				$.name,
				'[',
				$._location_statements,
				']',
			),
		_location_statements: ($) =>
			repeat1(
				choice(
					$.is_statement,
					$.trait_statement,
					$.state_statement,
					$.text,
					$.exit_statement,
					$.object,
				),
			),
		//
		exit_statement: ($) =>
			choice(
				seq('exit', $.exit_def),
				seq(
					'exits',
					$.exit_def,
					repeat(seq(',', $.exit_def)),
				),
			),
		exit_def: ($) => seq($.exit, 'to', $.name),
		exit: () =>
			choice(
				'north',
				'south',
				'east',
				'west',
				'up',
				'down',
			),
		//

		object: ($) =>
			seq(
				'object',
				$.name,
				'[',
				$._object_statements,
				']',
			),
		_object_statements: ($) =>
			repeat1(
				choice(
					$.is_statement,
					$.trait_statement,
					$.state_statement,
					$.text,
					$.on_statement,
					$.object,
				),
			),
		//
		on_statement: ($) =>
			seq('on', $.name, '[', $._on_statements, ']'),
		_on_statements: ($) =>
			repeat1(
				choice(
					$.is_statement,
					$.trait_statement,
					$.state_statement,
					$.text,
				),
			),
		//
		text: ($) =>
			seq(
				$._start_text,
				repeat(choice($.words, $.newline, $.code)),
				$._end_text,
			),
		_start_text: () => '{',
		_end_text: () => '}',
		words: () => field('words', /[^\s{}]+/),
		code: ($) => field('code',
			seq(
				$._start_text,
				choice($.name, $.int, $.float, $.text),
				$._end_text
			),

		),
		newline: () => field('nl', /[\r\n][\r\n]/),
		//
		value: ($) =>
			choice($.name, $.int, $.float, $.text),
		int: () => /[\+\-]?[0-9]+/,
		float: () => /[\+\-]?[0-9]+\.[0-9]+/,
		// use the same identifiers as Javascript, only allow dashes in the middle, e.g. hot-house
		name: () => {
			const alpha =
				/[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
			const alphanumeric =
				/[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
			return field(
				'name',
				token(seq(alpha, repeat(alphanumeric))),
			)
		},
		//use the same as javascript
		comment: () =>
			token(
				choice(
					seq('//', /.*/),
					seq(
						'/*',
						/[^*]*\*+([^/*][^*]*\*+)*/,
						'/',
					),
					// https://tc39.es/ecma262/#sec-html-like-comments
				),
			),
	},
	extras: ($) => [
		$.comment,
		/[\s\p{Zs}\uFEFF\u2060\u200B]/,
	],
})
