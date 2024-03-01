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
    source_file: $ => repeat($._statement),
    _statement: $ => choice(
      $.let_statement,
      $._expression_statement,
      $.return_statement
    ),

    let_statement: $ => seq(
      'let',
      $.identifier,
      '=',
      $._expression,
      ";"
    ),
    
    _expression_statement: $ => seq(
      $._expression,
      ";"
    ),

    _expression: $ => choice(
      $.number,
      $.boolean,
      $.identifier,
      $.function_call,
      $.unary_expression,
      $.binary_expression,
      $._grouped_expression,
      $.function,
      // ...
    ),


    binary_expression: $ => choice(
      prec.left(PREC.PRODUCT, seq($._expression, '*', $._expression)),
      prec.left(PREC.SUM, seq($._expression, '+', $._expression)),
    ),
    
    _grouped_expression : $ => prec.left(PREC.CALL, seq('(', $._expression, ')')),

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
      "}",
    ),

    _parameter: $ => seq(
      $.identifier,
      optional(",")
    ),
    
    return_statement: $ => seq(
      "return",
      $._expression,
      ";"
    ),

    function_call : $ => prec(PREC.CALL,seq(
      $._expression,
      $.arguments
    )), 
    
    arguments: $ => seq(
      "(",
      optional($._argument_list),
      ")"
    ),
    
    _argument_list : $ => repeat1($._argument),
    
    _argument : $ => seq(
      $._expression,
      optional(",")
    ),
    
    _expression_list : $ => seq(
      $._expression,
      optional(",")
    ),

    unary_expression: $ => prec(PREC.PREFIX, choice(
      seq('-', $._expression),
      seq('!', $._expression),
    )),

    number: $ => /\d+/,
    boolean: $ => /(true|false)/,
    identifier: $ => /[a-zA-Z_]+/,
  }
});
