#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 140
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 1
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  anon_sym_PIPE = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_PLUS = 4,
  anon_sym_DASH = 5,
  anon_sym_PLUS_EQ = 6,
  anon_sym_DASH_EQ = 7,
  sym_TRYSETPLUS = 8,
  sym_TRYSETMINUS = 9,
  sym_TRYSET = 10,
  sym_SETTAGOPER = 11,
  anon_sym_break = 12,
  anon_sym_continue = 13,
  anon_sym_stop = 14,
  anon_sym_return = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_emit = 18,
  anon_sym_DOLLAR = 19,
  anon_sym_EQ = 20,
  anon_sym_DOT = 21,
  anon_sym_LBRACE = 22,
  anon_sym_RBRACE = 23,
  anon_sym_POUND = 24,
  sym_TAGSEGNOVAR = 25,
  sym_TRIPLEQUOTEDSTRING = 26,
  anon_sym_DQUOTE = 27,
  aux_sym_DOUBLEQUOTEDSTRING_token1 = 28,
  anon_sym_SQUOTE = 29,
  aux_sym_SINGLEQUOTEDSTRING_token1 = 30,
  aux_sym_interpolation_token1 = 31,
  anon_sym_BQUOTE = 32,
  aux_sym_formatstring_token1 = 33,
  anon_sym_EQ2 = 34,
  anon_sym_COMMA = 35,
  anon_sym_function = 36,
  anon_sym_init = 37,
  anon_sym_empty = 38,
  anon_sym_fini = 39,
  anon_sym_yield = 40,
  anon_sym_for = 41,
  anon_sym_while = 42,
  anon_sym_switch = 43,
  anon_sym_else = 44,
  anon_sym_elif = 45,
  anon_sym_if = 46,
  anon_sym_not = 47,
  anon_sym_or = 48,
  anon_sym_and = 49,
  anon_sym_try = 50,
  anon_sym_catch = 51,
  anon_sym_as = 52,
  anon_sym_reverse = 53,
  sym_comment = 54,
  anon_sym_true = 55,
  anon_sym_false = 56,
  sym_null = 57,
  sym_query = 58,
  sym__statement = 59,
  sym__querystart = 60,
  sym__editblock = 61,
  sym__editoper = 62,
  sym_edittagadd = 63,
  sym_edittagdel = 64,
  sym__oper = 65,
  sym_break = 66,
  sym_continue = 67,
  sym_stop = 68,
  sym_return = 69,
  sym_emit = 70,
  sym_var_declaration = 71,
  sym_setitem = 72,
  sym_baresubquery = 73,
  sym_tagname = 74,
  sym__tagsegs = 75,
  sym_DOUBLEQUOTEDSTRING = 76,
  sym_SINGLEQUOTEDSTRING = 77,
  sym_string = 78,
  sym_interpolation = 79,
  sym_formatstring = 80,
  sym_funcarg = 81,
  sym_funcargs = 82,
  sym_stormfunc = 83,
  sym_identifier = 84,
  sym_initblock = 85,
  sym_ifstmt = 86,
  sym_ifclause = 87,
  sym_varlist = 88,
  sym_opervarlist = 89,
  sym__varvalu = 90,
  sym__varvaluatom = 91,
  sym_varvalue = 92,
  sym_VARTOKN = 93,
  sym__rootvalu = 94,
  sym__argvalu = 95,
  sym__basevalu = 96,
  sym__valu = 97,
  aux_sym__querystart_repeat1 = 98,
  aux_sym__editblock_repeat1 = 99,
  aux_sym__tagsegs_repeat1 = 100,
  aux_sym_DOUBLEQUOTEDSTRING_repeat1 = 101,
  aux_sym_SINGLEQUOTEDSTRING_repeat1 = 102,
  aux_sym_formatstring_repeat1 = 103,
  aux_sym_funcargs_repeat1 = 104,
  aux_sym_initblock_repeat1 = 105,
  aux_sym_ifstmt_repeat1 = 106,
  aux_sym_varlist_repeat1 = 107,
  anon_alias_sym_varvalue = 108,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [sym_TRYSETPLUS] = "TRYSETPLUS",
  [sym_TRYSETMINUS] = "TRYSETMINUS",
  [sym_TRYSET] = "TRYSET",
  [sym_SETTAGOPER] = "SETTAGOPER",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_stop] = "stop",
  [anon_sym_return] = "return",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_emit] = "emit",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUND] = "#",
  [sym_TAGSEGNOVAR] = "TAGSEGNOVAR",
  [sym_TRIPLEQUOTEDSTRING] = "TRIPLEQUOTEDSTRING",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_DOUBLEQUOTEDSTRING_token1] = "DOUBLEQUOTEDSTRING_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SINGLEQUOTEDSTRING_token1] = "SINGLEQUOTEDSTRING_token1",
  [aux_sym_interpolation_token1] = "interpolation_token1",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_formatstring_token1] = "formatstring_token1",
  [anon_sym_EQ2] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_function] = "function",
  [anon_sym_init] = "init",
  [anon_sym_empty] = "empty",
  [anon_sym_fini] = "fini",
  [anon_sym_yield] = "yield",
  [anon_sym_for] = "for",
  [anon_sym_while] = "while",
  [anon_sym_switch] = "switch",
  [anon_sym_else] = "else",
  [anon_sym_elif] = "elif",
  [anon_sym_if] = "if",
  [anon_sym_not] = "not",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_try] = "try",
  [anon_sym_catch] = "catch",
  [anon_sym_as] = "as",
  [anon_sym_reverse] = "reverse",
  [sym_comment] = "comment",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null] = "null",
  [sym_query] = "query",
  [sym__statement] = "_statement",
  [sym__querystart] = "_querystart",
  [sym__editblock] = "_editblock",
  [sym__editoper] = "_editoper",
  [sym_edittagadd] = "edittagadd",
  [sym_edittagdel] = "edittagdel",
  [sym__oper] = "_oper",
  [sym_break] = "break",
  [sym_continue] = "continue",
  [sym_stop] = "stop",
  [sym_return] = "return",
  [sym_emit] = "emit",
  [sym_var_declaration] = "var_declaration",
  [sym_setitem] = "setitem",
  [sym_baresubquery] = "baresubquery",
  [sym_tagname] = "tagname",
  [sym__tagsegs] = "_tagsegs",
  [sym_DOUBLEQUOTEDSTRING] = "DOUBLEQUOTEDSTRING",
  [sym_SINGLEQUOTEDSTRING] = "SINGLEQUOTEDSTRING",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [sym_formatstring] = "formatstring",
  [sym_funcarg] = "funcarg",
  [sym_funcargs] = "funcargs",
  [sym_stormfunc] = "stormfunc",
  [sym_identifier] = "identifier",
  [sym_initblock] = "initblock",
  [sym_ifstmt] = "ifstmt",
  [sym_ifclause] = "ifclause",
  [sym_varlist] = "varlist",
  [sym_opervarlist] = "opervarlist",
  [sym__varvalu] = "_varvalu",
  [sym__varvaluatom] = "_varvaluatom",
  [sym_varvalue] = "varvalue",
  [sym_VARTOKN] = "VARTOKN",
  [sym__rootvalu] = "_rootvalu",
  [sym__argvalu] = "_argvalu",
  [sym__basevalu] = "_basevalu",
  [sym__valu] = "_valu",
  [aux_sym__querystart_repeat1] = "_querystart_repeat1",
  [aux_sym__editblock_repeat1] = "_editblock_repeat1",
  [aux_sym__tagsegs_repeat1] = "_tagsegs_repeat1",
  [aux_sym_DOUBLEQUOTEDSTRING_repeat1] = "DOUBLEQUOTEDSTRING_repeat1",
  [aux_sym_SINGLEQUOTEDSTRING_repeat1] = "SINGLEQUOTEDSTRING_repeat1",
  [aux_sym_formatstring_repeat1] = "formatstring_repeat1",
  [aux_sym_funcargs_repeat1] = "funcargs_repeat1",
  [aux_sym_initblock_repeat1] = "initblock_repeat1",
  [aux_sym_ifstmt_repeat1] = "ifstmt_repeat1",
  [aux_sym_varlist_repeat1] = "varlist_repeat1",
  [anon_alias_sym_varvalue] = "varvalue",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [sym_TRYSETPLUS] = sym_TRYSETPLUS,
  [sym_TRYSETMINUS] = sym_TRYSETMINUS,
  [sym_TRYSET] = sym_TRYSET,
  [sym_SETTAGOPER] = sym_SETTAGOPER,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_stop] = anon_sym_stop,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_emit] = anon_sym_emit,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_TAGSEGNOVAR] = sym_TAGSEGNOVAR,
  [sym_TRIPLEQUOTEDSTRING] = sym_TRIPLEQUOTEDSTRING,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_DOUBLEQUOTEDSTRING_token1] = aux_sym_DOUBLEQUOTEDSTRING_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_SINGLEQUOTEDSTRING_token1] = aux_sym_SINGLEQUOTEDSTRING_token1,
  [aux_sym_interpolation_token1] = aux_sym_interpolation_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_formatstring_token1] = aux_sym_formatstring_token1,
  [anon_sym_EQ2] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_init] = anon_sym_init,
  [anon_sym_empty] = anon_sym_empty,
  [anon_sym_fini] = anon_sym_fini,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_reverse] = anon_sym_reverse,
  [sym_comment] = sym_comment,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null] = sym_null,
  [sym_query] = sym_query,
  [sym__statement] = sym__statement,
  [sym__querystart] = sym__querystart,
  [sym__editblock] = sym__editblock,
  [sym__editoper] = sym__editoper,
  [sym_edittagadd] = sym_edittagadd,
  [sym_edittagdel] = sym_edittagdel,
  [sym__oper] = sym__oper,
  [sym_break] = sym_break,
  [sym_continue] = sym_continue,
  [sym_stop] = sym_stop,
  [sym_return] = sym_return,
  [sym_emit] = sym_emit,
  [sym_var_declaration] = sym_var_declaration,
  [sym_setitem] = sym_setitem,
  [sym_baresubquery] = sym_baresubquery,
  [sym_tagname] = sym_tagname,
  [sym__tagsegs] = sym__tagsegs,
  [sym_DOUBLEQUOTEDSTRING] = sym_DOUBLEQUOTEDSTRING,
  [sym_SINGLEQUOTEDSTRING] = sym_SINGLEQUOTEDSTRING,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [sym_formatstring] = sym_formatstring,
  [sym_funcarg] = sym_funcarg,
  [sym_funcargs] = sym_funcargs,
  [sym_stormfunc] = sym_stormfunc,
  [sym_identifier] = sym_identifier,
  [sym_initblock] = sym_initblock,
  [sym_ifstmt] = sym_ifstmt,
  [sym_ifclause] = sym_ifclause,
  [sym_varlist] = sym_varlist,
  [sym_opervarlist] = sym_opervarlist,
  [sym__varvalu] = sym__varvalu,
  [sym__varvaluatom] = sym__varvaluatom,
  [sym_varvalue] = sym_varvalue,
  [sym_VARTOKN] = sym_VARTOKN,
  [sym__rootvalu] = sym__rootvalu,
  [sym__argvalu] = sym__argvalu,
  [sym__basevalu] = sym__basevalu,
  [sym__valu] = sym__valu,
  [aux_sym__querystart_repeat1] = aux_sym__querystart_repeat1,
  [aux_sym__editblock_repeat1] = aux_sym__editblock_repeat1,
  [aux_sym__tagsegs_repeat1] = aux_sym__tagsegs_repeat1,
  [aux_sym_DOUBLEQUOTEDSTRING_repeat1] = aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [aux_sym_SINGLEQUOTEDSTRING_repeat1] = aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [aux_sym_formatstring_repeat1] = aux_sym_formatstring_repeat1,
  [aux_sym_funcargs_repeat1] = aux_sym_funcargs_repeat1,
  [aux_sym_initblock_repeat1] = aux_sym_initblock_repeat1,
  [aux_sym_ifstmt_repeat1] = aux_sym_ifstmt_repeat1,
  [aux_sym_varlist_repeat1] = aux_sym_varlist_repeat1,
  [anon_alias_sym_varvalue] = anon_alias_sym_varvalue,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_TRYSETPLUS] = {
    .visible = true,
    .named = true,
  },
  [sym_TRYSETMINUS] = {
    .visible = true,
    .named = true,
  },
  [sym_TRYSET] = {
    .visible = true,
    .named = true,
  },
  [sym_SETTAGOPER] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_TAGSEGNOVAR] = {
    .visible = true,
    .named = true,
  },
  [sym_TRIPLEQUOTEDSTRING] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_DOUBLEQUOTEDSTRING_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SINGLEQUOTEDSTRING_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpolation_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_formatstring_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_init] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fini] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reverse] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__querystart] = {
    .visible = false,
    .named = true,
  },
  [sym__editblock] = {
    .visible = false,
    .named = true,
  },
  [sym__editoper] = {
    .visible = false,
    .named = true,
  },
  [sym_edittagadd] = {
    .visible = true,
    .named = true,
  },
  [sym_edittagdel] = {
    .visible = true,
    .named = true,
  },
  [sym__oper] = {
    .visible = false,
    .named = true,
  },
  [sym_break] = {
    .visible = true,
    .named = true,
  },
  [sym_continue] = {
    .visible = true,
    .named = true,
  },
  [sym_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_emit] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_setitem] = {
    .visible = true,
    .named = true,
  },
  [sym_baresubquery] = {
    .visible = true,
    .named = true,
  },
  [sym_tagname] = {
    .visible = true,
    .named = true,
  },
  [sym__tagsegs] = {
    .visible = false,
    .named = true,
  },
  [sym_DOUBLEQUOTEDSTRING] = {
    .visible = true,
    .named = true,
  },
  [sym_SINGLEQUOTEDSTRING] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_formatstring] = {
    .visible = true,
    .named = true,
  },
  [sym_funcarg] = {
    .visible = true,
    .named = true,
  },
  [sym_funcargs] = {
    .visible = true,
    .named = true,
  },
  [sym_stormfunc] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_initblock] = {
    .visible = true,
    .named = true,
  },
  [sym_ifstmt] = {
    .visible = true,
    .named = true,
  },
  [sym_ifclause] = {
    .visible = true,
    .named = true,
  },
  [sym_varlist] = {
    .visible = true,
    .named = true,
  },
  [sym_opervarlist] = {
    .visible = true,
    .named = true,
  },
  [sym__varvalu] = {
    .visible = false,
    .named = true,
  },
  [sym__varvaluatom] = {
    .visible = false,
    .named = true,
  },
  [sym_varvalue] = {
    .visible = true,
    .named = true,
  },
  [sym_VARTOKN] = {
    .visible = true,
    .named = true,
  },
  [sym__rootvalu] = {
    .visible = false,
    .named = true,
  },
  [sym__argvalu] = {
    .visible = false,
    .named = true,
  },
  [sym__basevalu] = {
    .visible = false,
    .named = true,
  },
  [sym__valu] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__querystart_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__editblock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tagsegs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_DOUBLEQUOTEDSTRING_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SINGLEQUOTEDSTRING_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formatstring_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_funcargs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_initblock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ifstmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_varlist_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_varvalue] = {
    .visible = true,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arguments = 1,
  field_default_value = 2,
  field_name = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_default_value] = "default_value",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_name, 1},
    {field_value, 3},
  [4] =
    {field_name, 0},
  [5] =
    {field_arguments, 2},
    {field_name, 1},
  [7] =
    {field_default_value, 2},
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_varvalue,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_VARTOKN, 2,
    sym_VARTOKN,
    anon_alias_sym_varvalue,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 83,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 82,
  [91] = 91,
  [92] = 10,
  [93] = 11,
  [94] = 13,
  [95] = 95,
  [96] = 96,
  [97] = 12,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 84,
  [102] = 102,
  [103] = 103,
  [104] = 91,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(97);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '$') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '`') ADVANCE(137);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == 'w') ADVANCE(39);
      if (lookahead == 'y') ADVANCE(43);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '|') ADVANCE(98);
      if (lookahead == '}') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '$') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '`') ADVANCE(137);
      if (lookahead == '{') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '$') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '`') ADVANCE(137);
      if (lookahead == '{') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '$') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(131);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '/') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '/') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(131);
      if (lookahead == '/') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0) ADVANCE(133);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(162);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '`') ADVANCE(137);
      if (lookahead == '{') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(152);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(158);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(150);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 50:
      if (lookahead == 'k') ADVANCE(112);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == 'w') ADVANCE(49);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'y') ADVANCE(157);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 94:
      if (lookahead == 'y') ADVANCE(145);
      END_STATE();
    case 95:
      if (eof) ADVANCE(97);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '$') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(120);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '`') ADVANCE(137);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == 'w') ADVANCE(39);
      if (lookahead == 'y') ADVANCE(43);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '|') ADVANCE(98);
      if (lookahead == '}') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95)
      END_STATE();
    case 96:
      if (eof) ADVANCE(97);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '$') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(120);
      if (lookahead == '?') ADVANCE(110);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '`') ADVANCE(137);
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '|') ADVANCE(98);
      if (lookahead == '}') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(96)
      END_STATE();
    case 97:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_TRYSETPLUS);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_TRYSETMINUS);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_TRYSET);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_SETTAGOPER);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_SETTAGOPER);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_emit);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_TAGSEGNOVAR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_TRIPLEQUOTEDSTRING);
      if (lookahead == '\'') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_DOUBLEQUOTEDSTRING_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_DOUBLEQUOTEDSTRING_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(162);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_DOUBLEQUOTEDSTRING_token1);
      if (lookahead == '/') ADVANCE(129);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(5);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SINGLEQUOTEDSTRING_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SINGLEQUOTEDSTRING_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(162);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_SINGLEQUOTEDSTRING_token1);
      if (lookahead == '/') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(133);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_interpolation_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_formatstring_token1);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_formatstring_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(162);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_formatstring_token1);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '{') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(138);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_init);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_fini);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 96},
  [11] = {.lex_state = 96},
  [12] = {.lex_state = 96},
  [13] = {.lex_state = 96},
  [14] = {.lex_state = 96},
  [15] = {.lex_state = 96},
  [16] = {.lex_state = 96},
  [17] = {.lex_state = 96},
  [18] = {.lex_state = 96},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 96},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 96},
  [58] = {.lex_state = 96},
  [59] = {.lex_state = 96},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 96},
  [62] = {.lex_state = 96},
  [63] = {.lex_state = 96},
  [64] = {.lex_state = 96},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 96},
  [68] = {.lex_state = 96},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 96},
  [73] = {.lex_state = 96},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 96},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 96},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 96},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 96},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 96},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 96},
  [126] = {.lex_state = 96},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 96},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 96},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [sym_TRYSETPLUS] = ACTIONS(1),
    [sym_TRYSETMINUS] = ACTIONS(1),
    [sym_TRYSET] = ACTIONS(1),
    [sym_SETTAGOPER] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_stop] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_emit] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_TRIPLEQUOTEDSTRING] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_init] = ACTIONS(1),
    [anon_sym_empty] = ACTIONS(1),
    [anon_sym_fini] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_reverse] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(121),
    [sym__querystart] = STATE(109),
    [sym__editblock] = STATE(43),
    [sym__oper] = STATE(43),
    [sym_break] = STATE(43),
    [sym_continue] = STATE(43),
    [sym_stop] = STATE(43),
    [sym_return] = STATE(43),
    [sym_emit] = STATE(43),
    [sym_var_declaration] = STATE(43),
    [sym_setitem] = STATE(43),
    [sym_stormfunc] = STATE(43),
    [sym_initblock] = STATE(43),
    [sym_ifstmt] = STATE(43),
    [sym_varlist] = STATE(126),
    [sym_opervarlist] = STATE(43),
    [aux_sym__querystart_repeat1] = STATE(8),
    [anon_sym_PIPE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_break] = ACTIONS(9),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_stop] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_emit] = ACTIONS(19),
    [anon_sym_DOLLAR] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(23),
    [anon_sym_init] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_PIPE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_break,
    ACTIONS(11), 1,
      anon_sym_continue,
    ACTIONS(13), 1,
      anon_sym_stop,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_emit,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_init,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym__querystart_repeat1,
    STATE(109), 1,
      sym__querystart,
    STATE(122), 1,
      sym_query,
    STATE(126), 1,
      sym_varlist,
    STATE(43), 13,
      sym__editblock,
      sym__oper,
      sym_break,
      sym_continue,
      sym_stop,
      sym_return,
      sym_emit,
      sym_var_declaration,
      sym_setitem,
      sym_stormfunc,
      sym_initblock,
      sym_ifstmt,
      sym_opervarlist,
  [70] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_break,
    ACTIONS(11), 1,
      anon_sym_continue,
    ACTIONS(13), 1,
      anon_sym_stop,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_emit,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_init,
    ACTIONS(27), 1,
      anon_sym_if,
    STATE(8), 1,
      aux_sym__querystart_repeat1,
    STATE(118), 1,
      sym__querystart,
    STATE(126), 1,
      sym_varlist,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(43), 13,
      sym__editblock,
      sym__oper,
      sym_break,
      sym_continue,
      sym_stop,
      sym_return,
      sym_emit,
      sym_var_declaration,
      sym_setitem,
      sym_stormfunc,
      sym_initblock,
      sym_ifstmt,
      sym_opervarlist,
  [135] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      anon_sym_break,
    ACTIONS(41), 1,
      anon_sym_continue,
    ACTIONS(44), 1,
      anon_sym_stop,
    ACTIONS(47), 1,
      anon_sym_return,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_emit,
    ACTIONS(56), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      anon_sym_function,
    ACTIONS(62), 1,
      anon_sym_init,
    ACTIONS(65), 1,
      anon_sym_if,
    STATE(4), 1,
      aux_sym__querystart_repeat1,
    STATE(126), 1,
      sym_varlist,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(43), 13,
      sym__editblock,
      sym__oper,
      sym_break,
      sym_continue,
      sym_stop,
      sym_return,
      sym_emit,
      sym_var_declaration,
      sym_setitem,
      sym_stormfunc,
      sym_initblock,
      sym_ifstmt,
      sym_opervarlist,
  [197] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_break,
    ACTIONS(11), 1,
      anon_sym_continue,
    ACTIONS(13), 1,
      anon_sym_stop,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_emit,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_init,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      sym_varlist,
    STATE(6), 2,
      sym__statement,
      aux_sym_initblock_repeat1,
    STATE(55), 13,
      sym__editblock,
      sym__oper,
      sym_break,
      sym_continue,
      sym_stop,
      sym_return,
      sym_emit,
      sym_var_declaration,
      sym_setitem,
      sym_stormfunc,
      sym_initblock,
      sym_ifstmt,
      sym_opervarlist,
  [259] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_break,
    ACTIONS(76), 1,
      anon_sym_continue,
    ACTIONS(79), 1,
      anon_sym_stop,
    ACTIONS(82), 1,
      anon_sym_return,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_emit,
    ACTIONS(91), 1,
      anon_sym_DOLLAR,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 1,
      anon_sym_function,
    ACTIONS(99), 1,
      anon_sym_init,
    ACTIONS(102), 1,
      anon_sym_if,
    STATE(126), 1,
      sym_varlist,
    STATE(6), 2,
      sym__statement,
      aux_sym_initblock_repeat1,
    STATE(55), 13,
      sym__editblock,
      sym__oper,
      sym_break,
      sym_continue,
      sym_stop,
      sym_return,
      sym_emit,
      sym_var_declaration,
      sym_setitem,
      sym_stormfunc,
      sym_initblock,
      sym_ifstmt,
      sym_opervarlist,
  [321] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_break,
    ACTIONS(11), 1,
      anon_sym_continue,
    ACTIONS(13), 1,
      anon_sym_stop,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_emit,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_init,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      sym_varlist,
    STATE(5), 2,
      sym__statement,
      aux_sym_initblock_repeat1,
    STATE(55), 13,
      sym__editblock,
      sym__oper,
      sym_break,
      sym_continue,
      sym_stop,
      sym_return,
      sym_emit,
      sym_var_declaration,
      sym_setitem,
      sym_stormfunc,
      sym_initblock,
      sym_ifstmt,
      sym_opervarlist,
  [383] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_break,
    ACTIONS(11), 1,
      anon_sym_continue,
    ACTIONS(13), 1,
      anon_sym_stop,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_emit,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_init,
    ACTIONS(27), 1,
      anon_sym_if,
    STATE(4), 1,
      aux_sym__querystart_repeat1,
    STATE(126), 1,
      sym_varlist,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(43), 13,
      sym__editblock,
      sym__oper,
      sym_break,
      sym_continue,
      sym_stop,
      sym_return,
      sym_emit,
      sym_var_declaration,
      sym_setitem,
      sym_stormfunc,
      sym_initblock,
      sym_ifstmt,
      sym_opervarlist,
  [445] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_break,
    ACTIONS(11), 1,
      anon_sym_continue,
    ACTIONS(13), 1,
      anon_sym_stop,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_emit,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(25), 1,
      anon_sym_init,
    ACTIONS(27), 1,
      anon_sym_if,
    STATE(8), 1,
      aux_sym__querystart_repeat1,
    STATE(126), 1,
      sym_varlist,
    STATE(136), 1,
      sym__querystart,
    STATE(43), 13,
      sym__editblock,
      sym__oper,
      sym_break,
      sym_continue,
      sym_stop,
      sym_return,
      sym_emit,
      sym_var_declaration,
      sym_setitem,
      sym_stormfunc,
      sym_initblock,
      sym_ifstmt,
      sym_opervarlist,
  [506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 25,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 25,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 25,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 25,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 22,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_function,
      anon_sym_init,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_if,
  [670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 20,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 20,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 20,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [748] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(133), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(17), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(99), 6,
      sym_baresubquery,
      sym_string,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [785] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_else,
    ACTIONS(149), 1,
      anon_sym_elif,
    STATE(21), 1,
      aux_sym_ifstmt_repeat1,
    ACTIONS(145), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [814] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(151), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(17), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(105), 6,
      sym_baresubquery,
      sym_string,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [851] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_elif,
    ACTIONS(155), 1,
      anon_sym_else,
    STATE(22), 1,
      aux_sym_ifstmt_repeat1,
    ACTIONS(153), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_elif,
    STATE(22), 1,
      aux_sym_ifstmt_repeat1,
    ACTIONS(157), 15,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_else,
      anon_sym_if,
  [907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 16,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_if,
  [929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 16,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_if,
  [951] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    STATE(19), 1,
      sym_ifclause,
    STATE(17), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(112), 6,
      sym_baresubquery,
      sym_string,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [986] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(17), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(137), 6,
      sym_baresubquery,
      sym_string,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1021] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    STATE(23), 1,
      sym_ifclause,
    STATE(17), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(112), 6,
      sym_baresubquery,
      sym_string,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1156] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    STATE(17), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(37), 6,
      sym_baresubquery,
      sym_string,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1188] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    STATE(17), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(47), 6,
      sym_baresubquery,
      sym_string,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1240] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    STATE(17), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(39), 6,
      sym_baresubquery,
      sym_string,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1332] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    STATE(17), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(115), 6,
      sym_baresubquery,
      sym_string,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1384] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    STATE(17), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(52), 6,
      sym_baresubquery,
      sym_string,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_PIPE,
    ACTIONS(186), 13,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1578] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE,
    STATE(17), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(31), 6,
      sym_baresubquery,
      sym_string,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 14,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 12,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_EQ2,
      anon_sym_COMMA,
  [1651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 13,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_PIPE,
    ACTIONS(212), 12,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 12,
      anon_sym_LBRACK,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_stop,
      anon_sym_return,
      anon_sym_LPAREN,
      anon_sym_emit,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [1709] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_DOT,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
    STATE(59), 1,
      aux_sym__tagsegs_repeat1,
    ACTIONS(216), 7,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1731] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      aux_sym__tagsegs_repeat1,
    ACTIONS(222), 7,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1753] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_DOT,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      aux_sym__tagsegs_repeat1,
    ACTIONS(229), 7,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1775] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_interpolation_token1,
    STATE(63), 1,
      sym_VARTOKN,
    STATE(128), 1,
      sym_identifier,
    STATE(117), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
    STATE(132), 2,
      sym__varvaluatom,
      sym_varvalue,
  [1802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 8,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    ACTIONS(237), 8,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_SQUOTE,
    ACTIONS(241), 8,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    ACTIONS(245), 7,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1869] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_interpolation_token1,
    STATE(95), 1,
      sym_funcarg,
    STATE(96), 1,
      sym_VARTOKN,
    STATE(53), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [1895] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_interpolation_token1,
    STATE(63), 1,
      sym_VARTOKN,
    STATE(53), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
    STATE(64), 2,
      sym__varvaluatom,
      sym_varvalue,
  [1919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(257), 7,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [1935] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    ACTIONS(263), 1,
      anon_sym_PLUS,
    ACTIONS(265), 1,
      anon_sym_DASH,
    STATE(72), 4,
      sym__editoper,
      sym_edittagadd,
      sym_edittagdel,
      aux_sym__editblock_repeat1,
  [1954] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_interpolation_token1,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    STATE(36), 1,
      sym_VARTOKN,
    STATE(53), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [1977] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_interpolation_token1,
    STATE(62), 1,
      sym_varvalue,
    STATE(63), 1,
      sym_VARTOKN,
    STATE(53), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [2000] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_interpolation_token1,
    STATE(96), 1,
      sym_VARTOKN,
    STATE(108), 1,
      sym_funcarg,
    STATE(53), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [2023] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_PLUS,
    ACTIONS(265), 1,
      anon_sym_DASH,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    STATE(73), 4,
      sym__editoper,
      sym_edittagadd,
      sym_edittagdel,
      aux_sym__editblock_repeat1,
  [2042] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_RBRACK,
    ACTIONS(273), 1,
      anon_sym_PLUS,
    ACTIONS(276), 1,
      anon_sym_DASH,
    STATE(73), 4,
      sym__editoper,
      sym_edittagadd,
      sym_edittagdel,
      aux_sym__editblock_repeat1,
  [2061] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_interpolation_token1,
    STATE(34), 1,
      sym_varvalue,
    STATE(63), 1,
      sym_VARTOKN,
    STATE(53), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [2084] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(279), 1,
      aux_sym_interpolation_token1,
    STATE(114), 1,
      sym_identifier,
    STATE(133), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [2104] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_interpolation_token1,
    STATE(102), 1,
      sym_VARTOKN,
    STATE(53), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [2124] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_interpolation_token1,
    STATE(110), 1,
      sym_VARTOKN,
    STATE(53), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [2144] = 5,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_BQUOTE,
    ACTIONS(285), 1,
      aux_sym_formatstring_token1,
    ACTIONS(287), 1,
      sym_comment,
    STATE(80), 2,
      sym_interpolation,
      aux_sym_formatstring_repeat1,
  [2161] = 5,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_BQUOTE,
    ACTIONS(291), 1,
      aux_sym_formatstring_token1,
    STATE(78), 2,
      sym_interpolation,
      aux_sym_formatstring_repeat1,
  [2178] = 5,
    ACTIONS(287), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 1,
      anon_sym_BQUOTE,
    ACTIONS(298), 1,
      aux_sym_formatstring_token1,
    STATE(80), 2,
      sym_interpolation,
      aux_sym_formatstring_repeat1,
  [2195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DOLLAR,
    ACTIONS(303), 1,
      sym_TAGSEGNOVAR,
    STATE(67), 2,
      sym__tagsegs,
      sym__varvalu,
  [2209] = 4,
    ACTIONS(287), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_SQUOTE,
    ACTIONS(307), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    STATE(101), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [2222] = 4,
    ACTIONS(287), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    STATE(88), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [2235] = 4,
    ACTIONS(287), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_SQUOTE,
    ACTIONS(315), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    STATE(89), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [2248] = 4,
    ACTIONS(287), 1,
      sym_comment,
    ACTIONS(311), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    STATE(88), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [2261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(321), 1,
      anon_sym_DOLLAR,
    STATE(107), 1,
      aux_sym_varlist_repeat1,
  [2274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2283] = 4,
    ACTIONS(287), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    STATE(88), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [2296] = 4,
    ACTIONS(287), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    STATE(89), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [2309] = 4,
    ACTIONS(287), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_SQUOTE,
    ACTIONS(337), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    STATE(84), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [2322] = 4,
    ACTIONS(287), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    STATE(85), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [2335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_RPAREN,
      anon_sym_EQ2,
      anon_sym_COMMA,
  [2344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_RPAREN,
      anon_sym_EQ2,
      anon_sym_COMMA,
  [2353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_RPAREN,
      anon_sym_EQ2,
      anon_sym_COMMA,
  [2362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_funcargs_repeat1,
  [2375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_EQ2,
    ACTIONS(347), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_RPAREN,
      anon_sym_EQ2,
      anon_sym_COMMA,
  [2395] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_funcargs_repeat1,
  [2408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_funcargs_repeat1,
  [2430] = 4,
    ACTIONS(287), 1,
      sym_comment,
    ACTIONS(315), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    ACTIONS(360), 1,
      anon_sym_SQUOTE,
    STATE(89), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [2443] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_DOLLAR,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_varlist_repeat1,
  [2456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_SETTAGOPER,
    ACTIONS(366), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_tagname,
  [2469] = 4,
    ACTIONS(287), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    STATE(83), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [2482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2491] = 2,
    ACTIONS(287), 1,
      sym_comment,
    ACTIONS(374), 3,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_formatstring_token1,
  [2500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    ACTIONS(378), 1,
      anon_sym_DOLLAR,
    STATE(107), 1,
      aux_sym_varlist_repeat1,
  [2513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [2529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
  [2537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_tagname,
  [2547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_baresubquery,
  [2557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_POUND,
    STATE(87), 1,
      sym_tagname,
  [2567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym_funcargs,
  [2577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_baresubquery,
  [2595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DOT,
    ACTIONS(385), 1,
      anon_sym_EQ,
  [2605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [2613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_baresubquery,
  [2623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_DOLLAR,
    ACTIONS(391), 1,
      sym_TAGSEGNOVAR,
  [2633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
  [2640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
  [2647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      aux_sym_interpolation_token1,
  [2654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LBRACE,
  [2661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_EQ,
  [2668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_EQ,
  [2675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_LBRACE,
  [2682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_EQ,
  [2689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
  [2696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_DOLLAR,
  [2703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
  [2710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_DOT,
  [2717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
  [2724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
  [2731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LBRACE,
  [2738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
  [2745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
  [2752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
  [2759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 135,
  [SMALL_STATE(5)] = 197,
  [SMALL_STATE(6)] = 259,
  [SMALL_STATE(7)] = 321,
  [SMALL_STATE(8)] = 383,
  [SMALL_STATE(9)] = 445,
  [SMALL_STATE(10)] = 506,
  [SMALL_STATE(11)] = 540,
  [SMALL_STATE(12)] = 574,
  [SMALL_STATE(13)] = 608,
  [SMALL_STATE(14)] = 642,
  [SMALL_STATE(15)] = 670,
  [SMALL_STATE(16)] = 696,
  [SMALL_STATE(17)] = 722,
  [SMALL_STATE(18)] = 748,
  [SMALL_STATE(19)] = 785,
  [SMALL_STATE(20)] = 814,
  [SMALL_STATE(21)] = 851,
  [SMALL_STATE(22)] = 880,
  [SMALL_STATE(23)] = 907,
  [SMALL_STATE(24)] = 929,
  [SMALL_STATE(25)] = 951,
  [SMALL_STATE(26)] = 986,
  [SMALL_STATE(27)] = 1021,
  [SMALL_STATE(28)] = 1056,
  [SMALL_STATE(29)] = 1076,
  [SMALL_STATE(30)] = 1096,
  [SMALL_STATE(31)] = 1116,
  [SMALL_STATE(32)] = 1136,
  [SMALL_STATE(33)] = 1156,
  [SMALL_STATE(34)] = 1188,
  [SMALL_STATE(35)] = 1220,
  [SMALL_STATE(36)] = 1240,
  [SMALL_STATE(37)] = 1272,
  [SMALL_STATE(38)] = 1292,
  [SMALL_STATE(39)] = 1312,
  [SMALL_STATE(40)] = 1332,
  [SMALL_STATE(41)] = 1364,
  [SMALL_STATE(42)] = 1384,
  [SMALL_STATE(43)] = 1416,
  [SMALL_STATE(44)] = 1438,
  [SMALL_STATE(45)] = 1458,
  [SMALL_STATE(46)] = 1478,
  [SMALL_STATE(47)] = 1498,
  [SMALL_STATE(48)] = 1518,
  [SMALL_STATE(49)] = 1538,
  [SMALL_STATE(50)] = 1558,
  [SMALL_STATE(51)] = 1578,
  [SMALL_STATE(52)] = 1610,
  [SMALL_STATE(53)] = 1630,
  [SMALL_STATE(54)] = 1651,
  [SMALL_STATE(55)] = 1670,
  [SMALL_STATE(56)] = 1691,
  [SMALL_STATE(57)] = 1709,
  [SMALL_STATE(58)] = 1731,
  [SMALL_STATE(59)] = 1753,
  [SMALL_STATE(60)] = 1775,
  [SMALL_STATE(61)] = 1802,
  [SMALL_STATE(62)] = 1819,
  [SMALL_STATE(63)] = 1836,
  [SMALL_STATE(64)] = 1853,
  [SMALL_STATE(65)] = 1869,
  [SMALL_STATE(66)] = 1895,
  [SMALL_STATE(67)] = 1919,
  [SMALL_STATE(68)] = 1935,
  [SMALL_STATE(69)] = 1954,
  [SMALL_STATE(70)] = 1977,
  [SMALL_STATE(71)] = 2000,
  [SMALL_STATE(72)] = 2023,
  [SMALL_STATE(73)] = 2042,
  [SMALL_STATE(74)] = 2061,
  [SMALL_STATE(75)] = 2084,
  [SMALL_STATE(76)] = 2104,
  [SMALL_STATE(77)] = 2124,
  [SMALL_STATE(78)] = 2144,
  [SMALL_STATE(79)] = 2161,
  [SMALL_STATE(80)] = 2178,
  [SMALL_STATE(81)] = 2195,
  [SMALL_STATE(82)] = 2209,
  [SMALL_STATE(83)] = 2222,
  [SMALL_STATE(84)] = 2235,
  [SMALL_STATE(85)] = 2248,
  [SMALL_STATE(86)] = 2261,
  [SMALL_STATE(87)] = 2274,
  [SMALL_STATE(88)] = 2283,
  [SMALL_STATE(89)] = 2296,
  [SMALL_STATE(90)] = 2309,
  [SMALL_STATE(91)] = 2322,
  [SMALL_STATE(92)] = 2335,
  [SMALL_STATE(93)] = 2344,
  [SMALL_STATE(94)] = 2353,
  [SMALL_STATE(95)] = 2362,
  [SMALL_STATE(96)] = 2375,
  [SMALL_STATE(97)] = 2386,
  [SMALL_STATE(98)] = 2395,
  [SMALL_STATE(99)] = 2408,
  [SMALL_STATE(100)] = 2417,
  [SMALL_STATE(101)] = 2430,
  [SMALL_STATE(102)] = 2443,
  [SMALL_STATE(103)] = 2456,
  [SMALL_STATE(104)] = 2469,
  [SMALL_STATE(105)] = 2482,
  [SMALL_STATE(106)] = 2491,
  [SMALL_STATE(107)] = 2500,
  [SMALL_STATE(108)] = 2513,
  [SMALL_STATE(109)] = 2521,
  [SMALL_STATE(110)] = 2529,
  [SMALL_STATE(111)] = 2537,
  [SMALL_STATE(112)] = 2547,
  [SMALL_STATE(113)] = 2557,
  [SMALL_STATE(114)] = 2567,
  [SMALL_STATE(115)] = 2577,
  [SMALL_STATE(116)] = 2585,
  [SMALL_STATE(117)] = 2595,
  [SMALL_STATE(118)] = 2605,
  [SMALL_STATE(119)] = 2613,
  [SMALL_STATE(120)] = 2623,
  [SMALL_STATE(121)] = 2633,
  [SMALL_STATE(122)] = 2640,
  [SMALL_STATE(123)] = 2647,
  [SMALL_STATE(124)] = 2654,
  [SMALL_STATE(125)] = 2661,
  [SMALL_STATE(126)] = 2668,
  [SMALL_STATE(127)] = 2675,
  [SMALL_STATE(128)] = 2682,
  [SMALL_STATE(129)] = 2689,
  [SMALL_STATE(130)] = 2696,
  [SMALL_STATE(131)] = 2703,
  [SMALL_STATE(132)] = 2710,
  [SMALL_STATE(133)] = 2717,
  [SMALL_STATE(134)] = 2724,
  [SMALL_STATE(135)] = 2731,
  [SMALL_STATE(136)] = 2738,
  [SMALL_STATE(137)] = 2745,
  [SMALL_STATE(138)] = 2752,
  [SMALL_STATE(139)] = 2759,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(68),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(35),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(41),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(45),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(131),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(130),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(51),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(60),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(75),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(124),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(25),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(68),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(35),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(41),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(45),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(131),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(130),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(51),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(60),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(75),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(124),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(25),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__querystart, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SINGLEQUOTEDSTRING, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_SINGLEQUOTEDSTRING, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SINGLEQUOTEDSTRING, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_SINGLEQUOTEDSTRING, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baresubquery, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatstring, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatstring, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edittagadd, 2, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifstmt, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edittagadd, 3, .production_id = 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifstmt, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ifstmt_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ifstmt_repeat1, 2), SHIFT_REPEAT(27),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifclause, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initblock, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifstmt, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifstmt, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emit, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initblock, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__editblock, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setitem, 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stormfunc, 5, .production_id = 6),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stop, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stormfunc, 6, .production_id = 6),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setitem, 6),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__editblock, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opervarlist, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_VARTOKN, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_VARTOKN, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagsegs, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tagsegs, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tagsegs_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tagsegs_repeat1, 2), SHIFT_REPEAT(120),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tagsegs_repeat1, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagsegs, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tagsegs, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tagsegs_repeat1, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tagsegs_repeat1, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varvalue, 1, .production_id = 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varvalue, 1, .production_id = 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__varvalu, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__varvalu, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagname, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagname, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__editblock_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__editblock_repeat1, 2), SHIFT_REPEAT(103),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__editblock_repeat1, 2), SHIFT_REPEAT(113),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_formatstring_repeat1, 2), SHIFT_REPEAT(123),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_formatstring_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_formatstring_repeat1, 2), SHIFT_REPEAT(80),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edittagdel, 2, .production_id = 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_DOUBLEQUOTEDSTRING_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_DOUBLEQUOTEDSTRING_repeat1, 2), SHIFT_REPEAT(88),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_SINGLEQUOTEDSTRING_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_SINGLEQUOTEDSTRING_repeat1, 2), SHIFT_REPEAT(89),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcarg, 1, .production_id = 5),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcargs_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funcargs_repeat1, 2), SHIFT_REPEAT(71),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edittagadd, 3, .production_id = 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edittagadd, 4, .production_id = 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_varlist_repeat1, 2),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_varlist_repeat1, 2), SHIFT_REPEAT(77),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcarg, 3, .production_id = 7),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [393] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varlist, 5),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varlist, 4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_storm(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
