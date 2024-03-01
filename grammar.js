const
  PREC = {
    LOWEST: 0,
    EQUALS: 1,
    LESSGREATER: 2,
    SUM: 3,
    PRODUCT: 4,
    PREFIX: 5,
    METHOD: 6,
    CALL: 7,
    INDEX: 8,
  }

module.exports = grammar({
  name: 'monkeylang',

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat($._statement),
    _statement: $ => choice(
      $.let_statement,
      $._expression,
      $.return_statement
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
      $._parenth,
      $.function
      // ...
    ),

    unary_expression: $ => prec(PREC.PREFIX, choice(
      seq('-', $._expression),
      seq('!', $._expression),
    )),

    _parenth: $ => prec.left(PREC.CALL, seq('(', $._expression, ')')),

    binary_expression: $ => choice(
      prec.left(PREC.PRODUCT, seq($._expression, '*', $._expression)),
      prec.left(PREC.SUM, seq($._expression, '+', $._expression)),
    ),

    function: $ => seq(
      "fn",
      $.parameters,
      $.block
    ),

    parameters: $ => seq(
      '(',
      optional($._parameter_list),
      ')'
    ),

    _parameter_list: $ => repeat1($._parameter),

    _statement_list: $ => repeat1($._statement),

    block: $ => seq(
      "{",
      optional($._statement_list),
      "}"

    ),

    _parameter: $ => seq(
      $.identifier,
      optional(",")
    ),
    
    return_statement: $ => seq(
      "return",
      $._expression
    ),

    number: $ => /\d+/,
    boolean: $ => /(true|false)/,
    identifier: $ => /[a-zA-Z_]+/,
  }
});
