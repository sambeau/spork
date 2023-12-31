//
// Grammar for Spork — a text adventure language interpreter
//

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
					field('is', $.is_statement),
					$.trait_statement,
					$.state_statement,
					field('text', $.text),
					field('describe', $.describe),
					field('start', $.start_statement),
					field('location', $.location),
					field('object', $.object),
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
				field('subject', $.subject),
				choice('is', 'are'),
				field(
					'values',
					seq(
						$.boolean,
						repeat(seq(',', $.boolean)),
					),
				),
			),
		// is_single_statement: ($) =>
		// 	seq(
		// 		field('subject', $.subject),
		// 		choice('is', 'are'),
		// 		field('value', $.boolean),
		// 	),
		boolean: ($) =>
			seq(
				field('negative', optional('not')),
				field('value', $.name),
			),
		subject: ($) =>
			choice(
				field('it', choice('it', 'they', 'he', 'she')),
				field('name', $.name),
			),
		//
		trait_statement: ($) =>
			seq('traits', $._trait_list),
		_trait_list: ($) =>
			seq($.trait_def, repeat(seq(',', $.trait_def))),
		trait_def: ($) => seq($.name, '|', $.name),
		//
		state_statement: ($) =>
			seq('states', $._state_list),
		_state_list: ($) =>
			seq($.state_def, repeat(seq(',', $.state_def))),
		state_def: ($) =>
			seq(
				seq($.name, '|', $.name),
				repeat(seq('|', $.name)),
			),
		//
		describe: ($) =>
			seq(
				'describe',
				field(
					'descriptions',
					seq(
						$.description,
						repeat(seq(',', $.description)),
					),
				),
			),
		description: ($) =>
			seq(
				field('name', $.name),
				'as',
				field('textChoice', $.textChoice),
			),
		textChoice: ($) =>
			seq(
				'(',
				field('textOrChoice', $.textOrChoice),
				repeat(
					seq(
						'|',
						field(
							'textOrChoice',
							$.textOrChoice,
						),
					),
				),
				')',
			),
		textOrChoice: ($) =>
			choice(repeat1($.name), $.textChoice, $.text),
		//
		start_statement: ($) =>
			seq(
				'start',
				optional('in'),
				field('location', $.name),
			),
		//
		location: ($) =>
			seq(
				'location',
				field('name', $.name),
				'[',
				$._location_statements,
				']',
			),
		_location_statements: ($) =>
			repeat1(
				choice(
					field('is', $.is_statement),
					field('describe', $.describe),
					field('trait', $.trait_statement),
					field('state', $.state_statement),
					field('text', $.text),
					field('exits', $.exits_statement),
					field('object', $.object),
					field('on', $.on_statement),
				),
			),
		//
		exits_statement: ($) =>
			seq(
				'exits',
				choice(
					field('none', 'none'),

					seq(
						$.exit_def,
						repeat(seq(',', $.exit_def)),
					),
				),
			),
		exit_def: ($) =>
			seq(
				field('direction', $.direction),
				'to',
				field('location', $.name),
				// add an optional block here
				// e.g. [{The door creaks loudly as you open it. You step through.} dog is awake]
			),

		direction: () =>
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
				field('add', optional('add')),
				'object',
				field('name', $.name),
				'(',
				field('noun', $.name),
				')',
				'[',
				$._object_statements,
				']',
			),
		_object_statements: ($) =>
			repeat1(
				choice(
					field('is', $.is_statement),
					field('describe', $.describe),
					field('trait', $.trait_statement),
					field('state', $.state_statement),
					field('text', $.text),
					field('object', $.object),
					field('on', $.on_statement),
				),
			),
		//
		on_statement: ($) =>
			seq(
				'on',
				field('command', $.command),
				field('block', $.block),
			),
		block: ($) =>
			seq(
				'[',
				field(
					'block_statements',
					$._block_statements,
				),
				']',
			),
		_block_statements: ($) =>
			repeat1(
				choice(
					$.is_statement,
					$.if_statement,
					$.add_statement,
					$.remove_statement,
					$.text,
				),
			),
		command: ($) =>
			seq('(', field('words', $.command_words), ')'),
		command_words: ($) =>
			repeat1(
				choice(
					field('it', $.it),
					field('thing', $.thing),
					field('optional', $.optional_words),
					field('synonym', $.synonyms),
					field('name', $.name),
				),
			),
		it: () => choice('it', 'them', 'him', 'her'),
		thing: () => 'thing',
		optional_words: ($) =>
			seq('(', field('words', repeat1($.name)), ')'),
		synonyms: ($) =>
			seq(
				'(',
				seq(
					field('word', $.name),
					repeat1(
						seq('|', field('word', $.name)),
					),
				),
				')',
			),
		//
		if_statement: ($) =>
			seq(
				'if',
				'(',
				field('conditional', $.conditional),
				')',
				field('if_block', $.block),
				optional(
					seq(
						'else',
						field('else_block', $.block),
					),
				),
			),
		add_statement: $ =>
			choice(
				field('add', seq('add', field('object', $.name))),
				field('add_to', seq('add', field('object', $.name), 'to', field('location', $.name)))
			),
		remove_statement: $ =>
			choice(
				field('remove', seq('remove', field('object', $.name))),
				field('remove_from', seq('remove', field('object', $.name), 'from', field('location', $.name)))
			),
		conditional: ($) =>
			choice(
				field('and', $.and),
				field('or', $.or),
				field('is', $.is),
			),
		and: $ => prec.left(2, seq(field('left', $.conditional), 'and', field('right', $.conditional))),
		or: $ => prec.left(2, seq(field('left', $.conditional), 'or', field('right', $.conditional))),
		is: $ => prec.left(1, seq(field('subject', $.subject), choice('is', 'are'), field('boolean', $.boolean))),
		//
		lookUp: ($) =>
			prec(2, seq('(', field('name', $.name), ')')), // higher precedence
		text: ($) =>
			seq(
				$._start_text,
				repeat(
					choice(
						$.lookUp,
						$.textChoice,
						prec(2, $.block),
						$.newline,
						$.words,
					),
				),
				$._end_text,
			),
		_start_text: () => '{',
		_end_text: () => '}',

		words: () => field('words', /[^\s{}()\[\]]+/),
		code: ($) =>
			field(
				'code',
				seq(
					$._start_text,
					choice($.name), // for now just interpolate variables
					$._end_text,
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
