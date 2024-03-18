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

    _statement: ($) => seq(choice($._oper, $._editblock), optional('|')),

    _querystart: ($) => choice(
      repeat1(seq(choice($._oper, $._editblock), optional('|'))),
      // choice($._oper),
    ),

    // Edit block: zero or more edit operations inside a single set of square brackets
    _editblock: ($) => seq('[', repeat($._editoper), ']'),

    // A single edit operation
    _editoper: ($) => choice(
      $.edittagadd,
      $.edittagdel,
    ),

    edittagadd: ($) => seq(
      '+',
      optional($.SETTAGOPER),
      field('name', $.tagname),
      optional($._valu),
    ),
    edittagdel: ($) => seq('-', field('name', $.tagname)),

    MODSET: (_) => choice('+=', '-='),
    TRYSETPLUS: (_) => '?+=',
    TRYSETMINUS: (_) => '?-=',
    TRYSET: (_) => '?=',
    SETTAGOPER: (_) => '?',

    // The set of non-edit non-commands in storm
    _oper: ($) => choice(
      $.stormfunc,
      $.initblock,
      $.opervarlist,
      $.setitem,
      $.setvar,
      $.break,
      $.continue,
      $.return,
      $.emit,
      $.stop,
      $.ifstmt,
    ),

    break: (_) => 'break',
    continue: (_) => 'continue',

    stop: (_) => 'stop',
    return: ($) => seq('return', '(', optional($._valu), ')'),
    emit: ($) => seq('emit', $._valu),

    // A variable assignment
    setvar: ($) => seq('$', $.VARTOKN, '=', $._valu),
    setitem: ($) => seq(
      '$',
      $._varvaluatom, '.', choice(
        $.VARTOKN,
        seq('$', $.varvalue),
        // $.formatstring,
        // $._derefexpr,
      ),
      $._valu,
    ),

    baresubquery: ($) => seq('{', $._querystart, '}'),

    tagname: ($) => seq('#', choice($._varvalu, $._tagsegs)),
    _tagsegs: ($) => seq($.TAGSEGNOVAR, repeat(
      seq('.', choice(
        $.TAGSEGNOVAR,
        seq('$', $.varvalue),
      )),
    )),
    TAGSEGNOVAR: (_) => /[\w]+/,


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

    stormcmd: ($) => seq(
      $.CMDNAME,
      // optional($.stormcmdargs)
    ),
    // stormcmdargs: ($) => repeat($._stormcmdarg),
    // _stormcmdarg: ($) => repeat($._stormcmdarg),

    CMDNAME: ($) => choice(
      'init',
      'empty',
      'fini',
      'function',
      'return',
      'emit',
      'stop',
      'yield',
      'break',
      'continue',
      'for',
      'while',
      'switch',
      'else',
      'elif',
      'if',
      'not',
      'or',
      'and',
      'try',
      'catch',
      'as',
      'reverse',
    ),


    dot: (_) => '.',


    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: (_) => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),


    // A bare variable reference, useful for a function call
    vareval: ($) => alias($._varvalu, 'vareval'),

    initblock: ($) => seq('init', '{', repeat($._statement), '}'),


    ifstmt: ($) => seq(
      'if',
      $.ifclause,
      repeat(seq(
        'elif',
        $.ifclause,
      )),
      optional(seq('else', $.baresubquery)),
    ),
    ifclause: ($) => seq($._valu, $.baresubquery),


    // A bare variable list
    varlist: ($) => seq('(', seq('$', $.VARTOKN), repeat(seq('$', $.VARTOKN)), ')'),

    // A variable list assignment
    opervarlist: ($) => seq($.varlist, '=', $._valu),


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
    VARTOKN: ($) => choice(/\w+/, $.DOUBLEQUOTEDSTRING, $.SINGLEQUOTEDSTRING),

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
      $.baresubquery,
    ),
    _valu: ($) => choice(
      $._basevalu,
      // $.NONQUOTEWORD,
    ),

    bool: (_) => choice('true', 'false'),
    null: (_) => 'null',
    not: (_) => 'not',
    or: (_) => 'or',
    and: (_) => 'and',

  },
});
