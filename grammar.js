const
  PREC = {
    LOWEST: 0,
    EQUALS: 1,
    LESSGREATER: 2,
    SUM: 3,
    PRODUCT: 4,
    PREFIX: 5,
    METHOD: 6,
    LAMBDA: 7,
    CALL: 8,
    INDEX: 9,
    PARENTH: 10
  }

module.exports = grammar({
  name: 'monkeylang',

  conflicts : $ => [
    [$._expression, $.parameter],
    [$.function_call]
  ],

  rules: {
    source_file: $ => repeat($._top_level_statement),

    _top_level_statement : $ => seq(
      choice(
        $.let_statement,
        $._expression_statement
    )),

    _statement: $ => choice(
      $.let_statement,
      $._expression_statement,
      $.return_statement,
      $._block_statement
    ),

    
    let_statement: $ => seq(
      "let",
      field("left", $.identifier),
      "=",
      field("right", $._expression),
      optional(choice(";", $._newline))
    ),


    _expression_statement: $ => seq(
      $._expression,
      optional(choice(";", $._newline))
    ),

    _expression: $ => choice(
      $.number,
      $.boolean,
      $.function_call,
      $.method_call,
      $.unary_expression,
      $.binary_expression,
      $._grouped_expression,
      $.function,
      $.lambda,
      $.array_literal,
      $.index_expression,
      $.hash_literal,
      $.string_literal,
      $.identifier,
      $.if_expression
      // ...
    ),

    if_expression: $ => seq(
      "if",
      $.condition,
      $.consequence,
      optional($.alternative)
    ),

    condition: $ => seq(
      "(",
      $._expression,
      ")"
    ),
    
    consequence : $ => $._block_statement,
    
    alternative : $ => seq(
      "else", 
      $._block_statement  
    ),

    binary_expression: $ => choice(
      prec.left(PREC.PRODUCT, seq($._expression, $.MUL, $._expression)),
      prec.left(PREC.PRODUCT, seq($._expression, $.DIV, $._expression)),
      prec.left(PREC.SUM, seq($._expression, $.PLUS, $._expression)),
      prec.left(PREC.SUM, seq($._expression, $.MINUS, $._expression)),
      prec.left(PREC.LESSGREATER, seq($._expression, $.LT, $._expression)),
      prec.left(PREC.LESSGREATER, seq($._expression, $.GT, $._expression)),
      prec.left(PREC.LESSGREATER, seq($._expression, $.LTE, $._expression)),
      prec.left(PREC.LESSGREATER, seq($._expression, $.GTE, $._expression)),
      prec.left(PREC.EQUALS, seq($._expression, $.EQ, $._expression)),

    ),
    
    _operator : $ => choice(
      $.MUL,
      $.DIV,
      $.PLUS,
      $.MINUS,
      $.LT,
      $.GT,
      $.LTE,
      $.GTE,
      $.EQ
    ),
    
    MUL : $ => "*",
    DIV : $ => "/",
    PLUS : $ => "+",
    MINUS : $ => "-",
    LT : $ => "<",
    GT : $ => ">",
    LTE : $ => "<=",
    GTE : $ => ">=",
    EQ : $ => "==",
    
    _grouped_expression : $ => prec.left(PREC.PARENTH, seq('(', $._expression, ')')),

    function: $ => seq(
      "fn",
      $.parameters,
      $.body
    ),

    parameters: $ => seq(
      '(',
      optional($._parameter_list),
      ')'
    ),

    _parameter_list: $ => repeat1($.parameter),

    parameter: $ => seq(
      $.identifier,
      optional(",")
    ),

    body: $ => $._block_statement,

    
    return_statement: $ => seq(
      "return",
      $._expression_statement,
    ),

    _block_statement: $ => seq(
      "{",
      optional($._statement_list),
      "}",
    ),

    _statement_list: $ => repeat1($._statement),
    
    lambda : $ => seq (
      "{",
      $.lambda_parameters,
      "->",
      $.lambda_body,
      "}"
    ),
    
    lambda_parameters : $ => $._parameter_list,
    
    lambda_body : $ => $._statement_list,
    
    function_call : $ => prec(PREC.CALL,
          choice(
            seq(
              $.identifier,
              $.arguments
              ),
            seq(
              $.function,
              $.arguments
              ),
            seq(
              $.identifier,
              $.arguments,
              $.lambda
            ),
            seq(
              $.identifier,
              $.lambda
            )
        )
    ), 
    
    method_call : $ => prec(PREC.METHOD, seq(
      $._expression,
      ".",
      $.function_call
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
    
    array_literal : $ => seq(
      "[",
      optional($._argument_list),
      "]"
    ),
    
    hash_literal : $ => prec(PREC.PREFIX, seq(
      "{",
      optional($._kv_pairs),
      "}"
    )),
    
    _kv_pairs : $ => repeat1($.kv_pair),

    kv_pair : $ => seq(
      $._expression,
      ":",
      $._expression,
      optional(",")
    ),
    
    index_expression : $ => prec(PREC.INDEX, seq(
      $._expression,
      "[",
      $._expression,
      "]"
    )),
    
    string_literal : $ => seq(
      '"',
      optional($._string),
      '"'
    ),



    unary_expression: $ => prec(PREC.PREFIX, choice(
      seq('-', $._expression),
      seq('!', $._expression),
    )),

    number: $ => /\d+/,
    boolean: $ => /(true|false)/,
    _string : $ => /[^\s^"]+/,
    identifier: $ => /[a-zA-Z_]+/,
    _newline : $ => "\n"
  }
});
