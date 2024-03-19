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

  rules: {
    source_file: $ => repeat($._statement),

    _statement: ($) => choice(
      $._simple_statement,
    ),

    // Simple statements
    _simple_statement: $ => seq(

      // TODO: do from scratch
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
      // $.opervarlist,
      $.setitem,
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
    return: ($) => seq('return', '(', optional($._expression), ')'),
    emit: ($) => seq('emit', $._valu),

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

    // A variable assignment
    _single_var_declaration: $ => seq('$', field('name', $.identifier), '=', field('value', $._valu)),
    // A bare variable list
    _multi_var_declaration: ($) => seq('(', commaSep1(seq('$', field('name', $.identifier))), ')',
      '=',
      '(',
      commaSep1($._expression),
      ')'
    ),
    // Assignment
    var_declaration: $ => choice(
      $._single_var_declaration,
      $._multi_var_declaration,
    ),

    // A variable list assignment
    // opervarlist: ($) => seq($.varlist, '=', $._valu),


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
    string: ($) => choice(
      $.DOUBLEQUOTEDSTRING,
      $.SINGLEQUOTEDSTRING,
      $.TRIPLEQUOTEDSTRING,
      $.formatstring,
    ),

    interpolation: $ => seq(
      '{',
      /\w+/,
      '}'
    ),

    formatstring: ($) => seq(
      '`',
      repeat(
        choice(
          (/[^`]/),
          $.interpolation,
        ),
      ),
      '`',
    ),

    _expression: $ => choice(
      $.var_declaration,
      $.call_expression,
      $.identifier,
      // $.string
    ),

    expression_statement: $ => $._expression,

    block: $ => seq('{', repeat($._statement), '}'),


    // Function definitions
    funcarg: ($) => choice(
      field('name', $.identifier),
      seq(
        field('name', $.identifier),
        token.immediate('='),
        field('default_value', $._valu),
      ),
    ),
    funcargs: ($) => seq('(', commaSep($.funcarg), ')'),
    stormfunc: ($) => seq(
      'function',
      field('name', $.identifier),
      field('arguments', $.funcargs),
      $.block,
    ),

    // Function calls
    argument_list: $ => seq('(', optional(seq(commaSep($._expression))), ')'),
    call_expression: $ => seq(
      '$',
      field('target', $.identifier),
      field('args', $.argument_list),
    ),

    identifier: ($) => choice(
      /\w+/,
      // $.DOUBLEQUOTEDSTRING,
      // $.SINGLEQUOTEDSTRING,
    ),


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

    // Control Flow

    // https://synapse.docs.vertex.link/en/latest/synapse/userguides/storm_adv_control.html#init-block
    initblock: ($) => seq('init', $.block),
    // https://synapse.docs.vertex.link/en/latest/synapse/userguides/storm_adv_control.html#fini-block
    finiblock: ($) => seq('fini', $.block),
    // https://synapse.docs.vertex.link/en/latest/synapse/userguides/storm_adv_control.html#empty-block
    emptyblock: ($) => seq('empty', $.block),

    // https://synapse.docs.vertex.link/en/latest/synapse/userguides/storm_adv_control.html#if-else-statement
    if_statement: $ => seq(
      'if',
      field('condition', $._expression),
      field('consequence', $.block),
      repeat(field('alternative', $.elif_clause)),
      optional(field('alternative', $.else_clause))
    ),
    elif_clause: $ => seq('elif', field('condition', $._expression), field('consequence', $.block)),
    else_clause: $ => seq('else', field('consequence', $.block)),


    // A value consisting of a name then 0 or more derefs and function calls
    _varvalu: ($) => seq('$', $._varvaluatom),
    _varvaluatom: ($) => choice(
      $.varvalue,
      // $.funccall,
    ),
    varvalue: ($) => alias($.VARTOKN, 'varvalue'),
    VARTOKN: ($) => choice(/\w+/, $.DOUBLEQUOTEDSTRING, $.SINGLEQUOTEDSTRING),

    _rootvalu: ($) => choice(
      $.string,
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

    bool: ($) => choice($.true, $.false),
    true: (_) => choice('true', '$lib.true'),
    false: (_) => choice('false', '$lib.false'),
    null: (_) => choice('null', '$lib.null'),

    not: (_) => 'not',
    or: (_) => 'or',
    and: (_) => 'and',

  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
