module.exports = grammar({
    name: "spork",

    rules: {
        //
        game: $ => seq("game", optional($.name), "[", $.statements, "]"),
        //
        statements: $ =>
            repeat1(
                choice(
                    $.header_statement,
                    $.is_statement,
                    $.trait_statement,
                    $.state_statement,
                    $.text,
                    $.enter_statement,
                    $.location,
                    $.object
                )
            ),
        //
        header_statement: $ => choice($.title_def, $.author_def, $.version_def, $.date_def),
        title_def: $ => seq("title", $.text),
        author_def: $ => seq(choice("by", "author"), $.text),
        version_def: $ => seq("version", $.float),
        date_def: $ => seq("created", $.text),
        //
        is_statement: $ =>
            seq(
                choice(seq("it", "is"), seq("they", "are"), seq($.name, choice("is", "are"))),
                $.name,
                repeat(seq(",", $.name))
            ),
        //
        trait_statement: $ => seq("traits", $.trait_list),
        trait_list: $ => seq($.trait_def, repeat(seq(",", $.trait_def))),
        trait_def: $ => seq($.name, "|", $.name),
        //
        state_statement: $ => seq("states", $.state_list),
        state_list: $ => seq($.state_def, repeat(seq(",", $.state_def))),
        state_def: $ => seq(seq($.name, "|", $.name), repeat(seq("|", $.name))),
        //
        enter_statement: $ => seq("enter", $.name),
        //
        location: $ => seq("location", $.name, "[", $.location_statements, "]"),
        location_statements: $ =>
            repeat1(choice($.is_statement, $.trait_statement, $.state_statement, $.text, $.exit_statement, $.object)),
        //
        exit_statement: $ => choice(seq("exit", $.exit_def), seq("exits", $.exit_def, repeat(seq(",", $.exit_def)))),
        exit_def: $ => seq($.exit, "to", $.name),
        exit: () => choice("north", "south", "east", "west", "up", "down"),
        //

        object: $ => seq("object", $.name, "[", $.object_statements, "]"),
        object_statements: $ =>
            repeat1(choice($.is_statement, $.trait_statement, $.state_statement, $.text, $.on_statement, $.object)),
        //
        on_statement: $ => seq("on", $.name, "[", $.on_statements, "]"),
        on_statements: $ => repeat1(choice($.is_statement, $.trait_statement, $.state_statement, $.text)),
        //
        text: $ => seq("{", repeat(choice($.words, $.newline, $.code)), "}"),
        words: () => /[^\s{}]+/,
        code: $ => $.text,
        newline: () => /[\r\n][\r\n]/,
        //
        value: $ => choice($.text, $.int, $.float, $.name),
        int: () => /[\+\-]?[0-9]+/,
        float: () => /[\+\-]?[0-9]+\.[0-9]+/,
        // use the same identifiers as Javascript, only allow dashes in the middle, e.g. hot-house
        name: () => {
            const alpha =
                /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/;
            const alphanumeric =
                /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/;
            return token(seq(alpha, repeat(alphanumeric)));
        },
        //use the same as javascript
        comment: () =>
            token(
                choice(
                    seq("//", /.*/),
                    seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")
                    // https://tc39.es/ecma262/#sec-html-like-comments
                )
            ),
    },
    extras: $ => [$.comment, /[\s\p{Zs}\uFEFF\u2060\u200B]/],
});
