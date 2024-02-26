module.exports = grammar({
    name: 'monkeylang',

    rules: {
        // TODO: add the actual grammar rules
        source_file: $ => repeat($._statement),
        _statement: $ => choice(
            $.let_statement   
        ),
        let_statement: $ => seq(
            'let',
            $.identifier,
            '=',
            $._expression
        ),

        _expression : $ => choice(
            $.identifier,
            $.number,
            $.boolean
        ),

        number: $ => /\d+/,
        boolean: $ => /(true|false)/,
        identifier: $ => /[a-zA-Z_]+/,
    }
});
