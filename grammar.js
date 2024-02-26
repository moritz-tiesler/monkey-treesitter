module.exports = grammar({
    name: 'monkeylang',

    rules: {
        // TODO: add the actual grammar rules
        source_file: $ => repeat($._statement),
        _statement: $ => choice(
            $.let_statement,
            $._expression
        ),
        let_statement: $ => seq(
            'let',
            $.identifier,
            '=',
            $._expression
        ),

        _expression: $ => choice(
            $.number,
            $.boolean,
            $.identifier,
            $.unary_expression,
            $.binary_expression,
            // ...
          ),
        
        unary_expression: $ => prec(3, choice(
            seq('-', $._expression),
            seq('!', $._expression),
          )),
        
        binary_expression: $ => choice(
            prec.left(2, seq($._expression, '*', $._expression)),
            prec.left(1, seq($._expression, '+', $._expression)),
        ),

        number: $ => /\d+/,
        boolean: $ => /(true|false)/,
        identifier: $ => /[a-zA-Z_]+/,
    }
});
