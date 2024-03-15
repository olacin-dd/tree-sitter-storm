/**
 * @file Storm grammar for tree-sitter
 * @author Nicolas Picard
 * @license MIT
 */

/* eslint-disable-arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'storm',

  extras: ($) => [
    /\s/,
    $.comment,
  ],

  // word: ($) => $._word,

  rules: {
    // Entry point for an unadorned storm query
    query: ($) => choice(
      seq('|', optional($._querystart)),
      $._querystart,
    ),

    _querystart: ($) => choice(
      repeat1(seq(choice($._oper), optional('|'))),
      // choice($._oper),
    ),

    // A single edit operation
    // _editblock: $ => seq(
    //   "[",
    // $._editoper,
    // "]"
    // ),

    // _editoper: $ => $.editnodeadd,


    TRIPLEQUOTEDSTRING: (_) => /'''.*?'''/,
    DOUBLEQUOTEDSTRING: (_) => seq('"', repeat(/[^\"]/), '"'),
    SINGLEQUOTEDSTRING: (_) => seq('\'', repeat(/[^\']/), '\''),
    string: ($) => choice($.DOUBLEQUOTEDSTRING, $.SINGLEQUOTEDSTRING, $.TRIPLEQUOTEDSTRING),

    // FORMATTEXT: (_) => /[^`{].*?(?<!\\)(\\\\)*?(?=[`{])/s,
    // _formatexpr: ($) => seq('{', $.expror, '}'),
    formatstring: ($) => seq(
      '`',
      repeat(
        choice(
          // $.FORMATTEXT,
          /\w+/,
          // $._formatexpr,
        ),
      ),
      '`',
    ),

    // Function definitions
    funcarg: ($) => choice(
      field('name', $.VARTOKN),
      seq(
        field('name', $.VARTOKN),
        token.immediate('='),
        field('default_value', $._valu),
      ),
    ),
    funcargs: ($) => seq('(', optional($.funcarg), repeat(seq(',', $.funcarg)), ')'),
    stormfunc: ($) => seq(
      'function',
      field('name', $.VARTOKN),
      field('arguments', $.funcargs),
      '{',
      optional($.query),
      '}',
    ),

    identifier: ($) => choice(
      /\w+/,
      $.string,
    ),


    dot: (_) => '.',


    deref: ($) => seq(
      '$',
      field('name', $.identifier),
    ),

    function_call: ($) => seq(
      field('function', $.deref),
      field('arguments', $._call_args),
    ),
    _call_args: ($) => seq(
      '(',
      optional(
        seq(
          $.deref,
          repeat(seq(',', $.deref)),
        ),
      ),
      ')',
    ),

    // _parameters: ($) => seq(
    //   $._expression,
    //   repeat(seq(',', $._expression)),
    // ),
    //
    // parameters: ($) => seq('(', optional($._parameters), ')'),
    //
    // function_declaration: ($) => prec.right(1, seq(
    //   'function',
    //   field('name', $.identifier),
    //   field('parameters', $.parameters),
    //   field('body', $.block),
    // )),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: (_) => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),

    try_set: (_) => '?=',

    // The set of non-edit non-commands in storm
    _oper: ($) => choice(
      $.stormfunc,
      $.setvar,
      $.opervarlist,
    ),


    break: (_) => 'break',
    continue: (_) => 'continue',

    return: ($) => seq(
      'return',
      '(',
      // TODO: add optional(value)
      ')',
    ),
    emit: ($) => seq(
      'emit',
      // TODO: add value
    ),

    // A bare variable reference, useful for a function call
    vareval: ($) => alias($._varvalu, 'vareval'),

    // A variable assignment
    setvar: ($) => seq('$', $.VARTOKN, '=', $._valu),

    // A bare variable list
    varlist: ($) => seq('(', seq('$', $.VARTOKN), repeat(seq('$', $.VARTOKN)), ')'),

    // A variable list assignment
    opervarlist: ($) => seq($.varlist, '=', $._valu),

    VARTOKN: ($) => choice(
      /\w+/,
      $.DOUBLEQUOTEDSTRING,
      $.SINGLEQUOTEDSTRING,
    ),

    // embedquery: $ => seq(
    //   $._EMBEDQUERYSTART,
    //   $.query,
    //   "}"
    // ),
    // _EMBEDQUERYSTART: _ => "${",
    //
    // NONQUOTEWORD: (_) => /(?!\/\/)[\w\-\+\?\*\/\\][^\s\),=\]}\|]*(?=$|[\s\),\]}\|\=])/,

    // A value consisting of a name then 0 or more derefs and function calls
    _varvalu: ($) => seq('$', $._varvaluatom),
    _varvaluatom: ($) => choice(
      $.varvalue,
      // $.funccall,
    ),
    varvalue: ($) => alias($.VARTOKN, 'varvalue'),

    // funccall: ($) => seq($._varvaluatom, token.immediate($._callargs)),
    // _callarg: ($) => choice(
    //   $._valu,
    //   $.VARTOKN,
    //   seq(
    //     $.VARTOKN,
    //     $._valu,
    //   ),
    // ),
    // // funcargs: ($) => seq('(', optional($.funcarg), repeat(seq(',', $.funcarg)), ')'),
    // _callargs: ($) => seq(
    //   '(',
    //   optional($._callarg),
    //   repeat(seq(',', $._callarg)),
    //   ')',
    // ),

    _rootvalu: ($) => choice(
      $.TRIPLEQUOTEDSTRING,
      $.DOUBLEQUOTEDSTRING,
      $.SINGLEQUOTEDSTRING,
    ),

    // Common subset + stuff allowable in command arguments
    _argvalu: ($) => choice(
      $._rootvalu,
      // $.valulist,
      // $.embedquery,
    ),
    // Used for most instances of values
    _basevalu: ($) => choice(
      $._argvalu,
      // $.baresubquery,
    ),
    _valu: ($) => choice(
      $._basevalu,
      // $.NONQUOTEWORD,
    ),
    //
    // bool: _ => choice("true", "false"),
    // null: _ => "null",
    // not: _ => "not",
    // or: _ => "or",
    // and: _ => "and",

  },
});
