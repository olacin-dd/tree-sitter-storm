module.exports = grammar({
  name: "storm",

  extras: $ => [
    /\s/,
    $.comment,
  ],

  // word: $ => /\w+/,

  rules: {
    program: $ => repeat($._statements),

    // Entry point for an unadorned storm query
    // query: $ => seq(
    //   optional("|"),
    //   optional($._querystart),
    // ),

    // _querystart: $ => seq(
    //   $._querystart,
    //   optional("|"),
    //   "stormcmd"
    // ),

    // A single edit operation
    // _editblock: $ => seq(
    //   "[",
    // $._editoper,
    // "]"
    // ),

    // _editoper: $ => $.editnodeadd,

    _statements: $ => seq(choice(
      $._expression_statement,
      $.assignment,
    )),

    double_quoted_string: _ => seq('"', repeat(/[^\"]/), '"'),
    single_quoted_string: _ => seq("'", repeat(/[^\']/), "'"),
    string: $ => choice($.double_quoted_string, $.single_quoted_string),

    identifier: $ => choice(
      /\w+/,
      $.string,
    ),

    // identifier: _ => /\w+/,

    _expression_statement: $ => choice($._expression),

    _expression: $ => choice(
      $.function_call,
      $.function_declaration,
      $.identifier,
    ),

    dot: _ => ".",

    block: $ => seq(
      "{",
      repeat($._statements),
      "}"
    ),

    assignment: $ => seq(
      "$",
      field("left", $.identifier),
      "=",
      field("right", $._expression)
    ),

    deref: $ => seq(
      "$",
      field("name", $.identifier)
    ),

    function_call: $ => seq(
      field("function", $.deref),
      field("arguments", $._call_args)
    ),
    _call_args: $ => seq(
      "(",
      optional(
        seq(
          $.deref,
          repeat(seq(",", $.deref))
        )
      ),
      ")",
    ),

    _parameters: $ => seq(
      $._expression,
      repeat(seq(",", $._expression))
    ),

    parameters: $ => seq("(", optional($._parameters), ")"),

    function_declaration: $ => prec.right(1, seq(
      "function",
      field("name", $.identifier),
      field("parameters", $.parameters),
      field("body", $.block),
    )),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: _ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),

    try_set: _ => "?=",



    // embedquery: $ => seq(
    //   $._EMBEDQUERYSTART,
    //   $.query,
    //   "}"
    // ),
    // _EMBEDQUERYSTART: _ => "${",
    //
    // NONQUOTEWORD: _ => /(?!\/\/)[\w\-\+\?\*\/\\][^\s\),=\]}\|]*(?=$|[\s\),\]}\|\=])/,
    //
    // _rootvalu: $ => "^",
    //
    // // Common subset + stuff allowable in command arguments
    // _argvalu: $ => choice(
    //   $._rootvalu,
    //   // $.valulist,
    //   $.embedquery,
    // ),
    // // Used for most instances of values
    // _basevalu: $ => choice(
    //   $._argvalu,
    //   // $.baresubquery,
    // ),
    // _valu: $ => choice(
    //   $._basevalu,
    //   $.NONQUOTEWORD,
    // ),
    //
    // bool: _ => choice("true", "false"),
    // null: _ => "null",
    // not: _ => "not",
    // or: _ => "or",
    // and: _ => "and",

  }
})
