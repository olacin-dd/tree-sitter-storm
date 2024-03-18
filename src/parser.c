#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 131
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 1
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

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
  anon_sym_BQUOTE = 31,
  aux_sym_formatstring_token1 = 32,
  anon_sym_EQ2 = 33,
  anon_sym_COMMA = 34,
  anon_sym_function = 35,
  anon_sym_init = 36,
  anon_sym_empty = 37,
  anon_sym_fini = 38,
  anon_sym_yield = 39,
  anon_sym_for = 40,
  anon_sym_while = 41,
  anon_sym_switch = 42,
  anon_sym_else = 43,
  anon_sym_elif = 44,
  anon_sym_if = 45,
  anon_sym_not = 46,
  anon_sym_or = 47,
  anon_sym_and = 48,
  anon_sym_try = 49,
  anon_sym_catch = 50,
  anon_sym_as = 51,
  anon_sym_reverse = 52,
  sym_comment = 53,
  anon_sym_true = 54,
  anon_sym_false = 55,
  sym_null = 56,
  sym_query = 57,
  sym__statement = 58,
  sym__querystart = 59,
  sym__editblock = 60,
  sym__editoper = 61,
  sym_edittagadd = 62,
  sym_edittagdel = 63,
  sym__oper = 64,
  sym_break = 65,
  sym_continue = 66,
  sym_stop = 67,
  sym_return = 68,
  sym_emit = 69,
  sym_setvar = 70,
  sym_setitem = 71,
  sym_baresubquery = 72,
  sym_tagname = 73,
  sym__tagsegs = 74,
  sym_DOUBLEQUOTEDSTRING = 75,
  sym_SINGLEQUOTEDSTRING = 76,
  sym_funcarg = 77,
  sym_funcargs = 78,
  sym_stormfunc = 79,
  sym_initblock = 80,
  sym_ifstmt = 81,
  sym_ifclause = 82,
  sym_varlist = 83,
  sym_opervarlist = 84,
  sym__varvalu = 85,
  sym__varvaluatom = 86,
  sym_varvalue = 87,
  sym_VARTOKN = 88,
  sym__rootvalu = 89,
  sym__argvalu = 90,
  sym__basevalu = 91,
  sym__valu = 92,
  aux_sym__querystart_repeat1 = 93,
  aux_sym__editblock_repeat1 = 94,
  aux_sym__tagsegs_repeat1 = 95,
  aux_sym_DOUBLEQUOTEDSTRING_repeat1 = 96,
  aux_sym_SINGLEQUOTEDSTRING_repeat1 = 97,
  aux_sym_funcargs_repeat1 = 98,
  aux_sym_initblock_repeat1 = 99,
  aux_sym_ifstmt_repeat1 = 100,
  aux_sym_varlist_repeat1 = 101,
  anon_alias_sym_varvalue = 102,
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
  [sym_setvar] = "setvar",
  [sym_setitem] = "setitem",
  [sym_baresubquery] = "baresubquery",
  [sym_tagname] = "tagname",
  [sym__tagsegs] = "_tagsegs",
  [sym_DOUBLEQUOTEDSTRING] = "DOUBLEQUOTEDSTRING",
  [sym_SINGLEQUOTEDSTRING] = "SINGLEQUOTEDSTRING",
  [sym_funcarg] = "funcarg",
  [sym_funcargs] = "funcargs",
  [sym_stormfunc] = "stormfunc",
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
  [sym_setvar] = sym_setvar,
  [sym_setitem] = sym_setitem,
  [sym_baresubquery] = sym_baresubquery,
  [sym_tagname] = sym_tagname,
  [sym__tagsegs] = sym__tagsegs,
  [sym_DOUBLEQUOTEDSTRING] = sym_DOUBLEQUOTEDSTRING,
  [sym_SINGLEQUOTEDSTRING] = sym_SINGLEQUOTEDSTRING,
  [sym_funcarg] = sym_funcarg,
  [sym_funcargs] = sym_funcargs,
  [sym_stormfunc] = sym_stormfunc,
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
  [sym_setvar] = {
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
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_default_value] = "default_value",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_name, 0},
  [3] =
    {field_arguments, 2},
    {field_name, 1},
  [5] =
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
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 13,
  [91] = 12,
  [92] = 10,
  [93] = 11,
  [94] = 43,
  [95] = 85,
  [96] = 79,
  [97] = 89,
  [98] = 82,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(96);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '$') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(131);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '?') ADVANCE(110);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '`') ADVANCE(135);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(72);
      if (lookahead == 'c') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'w') ADVANCE(38);
      if (lookahead == 'y') ADVANCE(42);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '|') ADVANCE(97);
      if (lookahead == '}') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(94)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '$') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(130);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '$') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(130);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '/') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '/') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(118);
      if (lookahead == '/') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(130);
      if (lookahead == '/') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(132);
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
      if (lookahead == '/') ADVANCE(158);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(154);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(146);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 49:
      if (lookahead == 'k') ADVANCE(111);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'v') ADVANCE(32);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(26);
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 93:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 94:
      if (eof) ADVANCE(96);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '$') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(131);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(119);
      if (lookahead == '?') ADVANCE(110);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '`') ADVANCE(135);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(72);
      if (lookahead == 'c') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'w') ADVANCE(38);
      if (lookahead == 'y') ADVANCE(42);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '|') ADVANCE(97);
      if (lookahead == '}') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(94)
      END_STATE();
    case 95:
      if (eof) ADVANCE(96);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '$') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(131);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '+') ADVANCE(100);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(119);
      if (lookahead == '?') ADVANCE(109);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == 'b') ADVANCE(72);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '|') ADVANCE(97);
      if (lookahead == '}') ADVANCE(122);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95)
      END_STATE();
    case 96:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_TRYSETPLUS);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_TRYSETMINUS);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_TRYSET);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_SETTAGOPER);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_SETTAGOPER);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_emit);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_TAGSEGNOVAR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_TRIPLEQUOTEDSTRING);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_DOUBLEQUOTEDSTRING_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_DOUBLEQUOTEDSTRING_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(158);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_DOUBLEQUOTEDSTRING_token1);
      if (lookahead == '/') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(127);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(5);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SINGLEQUOTEDSTRING_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SINGLEQUOTEDSTRING_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(158);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SINGLEQUOTEDSTRING_token1);
      if (lookahead == '/') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(132);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_formatstring_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_init);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_fini);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 161:
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
  [10] = {.lex_state = 95},
  [11] = {.lex_state = 95},
  [12] = {.lex_state = 95},
  [13] = {.lex_state = 95},
  [14] = {.lex_state = 95},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 95},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 95},
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
  [43] = {.lex_state = 95},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 95},
  [56] = {.lex_state = 95},
  [57] = {.lex_state = 95},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 95},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 95},
  [62] = {.lex_state = 95},
  [63] = {.lex_state = 95},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 95},
  [68] = {.lex_state = 95},
  [69] = {.lex_state = 95},
  [70] = {.lex_state = 95},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 95},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 95},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 95},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 95},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 95},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 95},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 95},
  [126] = {.lex_state = 95},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
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
    [sym_query] = STATE(119),
    [sym__querystart] = STATE(113),
    [sym__editblock] = STATE(22),
    [sym__oper] = STATE(22),
    [sym_break] = STATE(22),
    [sym_continue] = STATE(22),
    [sym_stop] = STATE(22),
    [sym_return] = STATE(22),
    [sym_emit] = STATE(22),
    [sym_setvar] = STATE(22),
    [sym_setitem] = STATE(22),
    [sym_stormfunc] = STATE(22),
    [sym_initblock] = STATE(22),
    [sym_ifstmt] = STATE(22),
    [sym_varlist] = STATE(125),
    [sym_opervarlist] = STATE(22),
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
    STATE(113), 1,
      sym__querystart,
    STATE(123), 1,
      sym_query,
    STATE(125), 1,
      sym_varlist,
    STATE(22), 13,
      sym__editblock,
      sym__oper,
      sym_break,
      sym_continue,
      sym_stop,
      sym_return,
      sym_emit,
      sym_setvar,
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
    STATE(109), 1,
      sym__querystart,
    STATE(125), 1,
      sym_varlist,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(22), 13,
      sym__editblock,
      sym__oper,
      sym_break,
      sym_continue,
      sym_stop,
      sym_return,
      sym_emit,
      sym_setvar,
      sym_setitem,
      sym_stormfunc,
      sym_initblock,
      sym_ifstmt,
      sym_opervarlist,
  [135] = 16,
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
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      sym_varlist,
    STATE(7), 2,
      sym__statement,
      aux_sym_initblock_repeat1,
    STATE(42), 13,
      sym__editblock,
      sym__oper,
      sym_break,
      sym_continue,
      sym_stop,
      sym_return,
      sym_emit,
      sym_setvar,
      sym_setitem,
      sym_stormfunc,
      sym_initblock,
      sym_ifstmt,
      sym_opervarlist,
  [197] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      anon_sym_break,
    ACTIONS(43), 1,
      anon_sym_continue,
    ACTIONS(46), 1,
      anon_sym_stop,
    ACTIONS(49), 1,
      anon_sym_return,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_emit,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(61), 1,
      anon_sym_function,
    ACTIONS(64), 1,
      anon_sym_init,
    ACTIONS(67), 1,
      anon_sym_if,
    STATE(5), 1,
      aux_sym__querystart_repeat1,
    STATE(125), 1,
      sym_varlist,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(22), 13,
      sym__editblock,
      sym__oper,
      sym_break,
      sym_continue,
      sym_stop,
      sym_return,
      sym_emit,
      sym_setvar,
      sym_setitem,
      sym_stormfunc,
      sym_initblock,
      sym_ifstmt,
      sym_opervarlist,
  [259] = 16,
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
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      sym_varlist,
    STATE(4), 2,
      sym__statement,
      aux_sym_initblock_repeat1,
    STATE(42), 13,
      sym__editblock,
      sym__oper,
      sym_break,
      sym_continue,
      sym_stop,
      sym_return,
      sym_emit,
      sym_setvar,
      sym_setitem,
      sym_stormfunc,
      sym_initblock,
      sym_ifstmt,
      sym_opervarlist,
  [321] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_break,
    ACTIONS(78), 1,
      anon_sym_continue,
    ACTIONS(81), 1,
      anon_sym_stop,
    ACTIONS(84), 1,
      anon_sym_return,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_emit,
    ACTIONS(93), 1,
      anon_sym_DOLLAR,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      anon_sym_function,
    ACTIONS(101), 1,
      anon_sym_init,
    ACTIONS(104), 1,
      anon_sym_if,
    STATE(125), 1,
      sym_varlist,
    STATE(7), 2,
      sym__statement,
      aux_sym_initblock_repeat1,
    STATE(42), 13,
      sym__editblock,
      sym__oper,
      sym_break,
      sym_continue,
      sym_stop,
      sym_return,
      sym_emit,
      sym_setvar,
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
    STATE(5), 1,
      aux_sym__querystart_repeat1,
    STATE(125), 1,
      sym_varlist,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(22), 13,
      sym__editblock,
      sym__oper,
      sym_break,
      sym_continue,
      sym_stop,
      sym_return,
      sym_emit,
      sym_setvar,
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
    STATE(125), 1,
      sym_varlist,
    STATE(128), 1,
      sym__querystart,
    STATE(22), 13,
      sym__editblock,
      sym__oper,
      sym_break,
      sym_continue,
      sym_stop,
      sym_return,
      sym_emit,
      sym_setvar,
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
    ACTIONS(109), 24,
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
      anon_sym_COMMA,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 24,
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
      anon_sym_COMMA,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 24,
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
      anon_sym_COMMA,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 24,
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
      anon_sym_COMMA,
      anon_sym_function,
      anon_sym_init,
      anon_sym_if,
  [638] = 2,
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
  [666] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_else,
    ACTIONS(131), 1,
      anon_sym_elif,
    STATE(17), 1,
      aux_sym_ifstmt_repeat1,
    ACTIONS(127), 14,
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
  [695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_elif,
    STATE(16), 1,
      aux_sym_ifstmt_repeat1,
    ACTIONS(133), 15,
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
  [722] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_elif,
    ACTIONS(140), 1,
      anon_sym_else,
    STATE(16), 1,
      aux_sym_ifstmt_repeat1,
    ACTIONS(138), 14,
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
  [751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 16,
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
  [773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 16,
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
  [795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 14,
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
  [815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 14,
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
  [835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_PIPE,
    ACTIONS(148), 13,
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
  [857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 14,
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
  [877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 14,
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
  [897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 14,
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
  [917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 14,
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
  [937] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(100), 7,
      sym_baresubquery,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [967] = 2,
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
  [987] = 2,
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
  [1007] = 2,
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
  [1027] = 2,
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
  [1047] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(178), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(76), 7,
      sym_baresubquery,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1077] = 2,
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
  [1097] = 2,
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
  [1117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 14,
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
  [1137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 14,
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
  [1157] = 2,
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
  [1177] = 2,
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
  [1197] = 2,
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
  [1217] = 2,
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
  [1237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 13,
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
  [1256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_PIPE,
    ACTIONS(200), 12,
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
  [1277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(202), 11,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
  [1297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 12,
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
  [1315] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      sym_TRIPLEQUOTEDSTRING,
    STATE(15), 1,
      sym_ifclause,
    STATE(107), 7,
      sym_baresubquery,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1343] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    ACTIONS(212), 1,
      sym_TRIPLEQUOTEDSTRING,
    STATE(130), 7,
      sym_baresubquery,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1371] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      sym_TRIPLEQUOTEDSTRING,
    STATE(19), 1,
      sym_ifclause,
    STATE(107), 7,
      sym_baresubquery,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1399] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(214), 1,
      sym_TRIPLEQUOTEDSTRING,
    STATE(24), 7,
      sym_baresubquery,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1424] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(216), 1,
      sym_TRIPLEQUOTEDSTRING,
    STATE(115), 7,
      sym_baresubquery,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1449] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      sym_TRIPLEQUOTEDSTRING,
    STATE(30), 7,
      sym_baresubquery,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1474] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      sym_TRIPLEQUOTEDSTRING,
    STATE(29), 7,
      sym_baresubquery,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1499] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      sym_TRIPLEQUOTEDSTRING,
    STATE(37), 7,
      sym_baresubquery,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1524] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 1,
      sym_TRIPLEQUOTEDSTRING,
    STATE(39), 7,
      sym_baresubquery,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [1549] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      aux_sym_formatstring_token1,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      sym_funcarg,
    STATE(87), 1,
      sym_VARTOKN,
    STATE(88), 1,
      aux_sym_funcargs_repeat1,
    STATE(94), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [1581] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_SQUOTE,
    STATE(55), 1,
      aux_sym__tagsegs_repeat1,
    ACTIONS(236), 6,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
  [1602] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      aux_sym__tagsegs_repeat1,
    ACTIONS(243), 6,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
  [1623] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_SQUOTE,
    STATE(55), 1,
      aux_sym__tagsegs_repeat1,
    ACTIONS(249), 6,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
  [1644] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_formatstring_token1,
    STATE(111), 1,
      sym_VARTOKN,
    STATE(43), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
    STATE(124), 2,
      sym__varvaluatom,
      sym_varvalue,
  [1668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_SQUOTE,
    ACTIONS(236), 7,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
  [1684] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_formatstring_token1,
    STATE(62), 1,
      sym_VARTOKN,
    STATE(43), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
    STATE(63), 2,
      sym__varvaluatom,
      sym_varvalue,
  [1708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
    ACTIONS(257), 7,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
  [1724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 7,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
  [1740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(265), 6,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
  [1755] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_formatstring_token1,
    STATE(53), 1,
      sym_varvalue,
    STATE(62), 1,
      sym_VARTOKN,
    STATE(43), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [1778] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_formatstring_token1,
    STATE(61), 1,
      sym_varvalue,
    STATE(62), 1,
      sym_VARTOKN,
    STATE(43), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [1801] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_formatstring_token1,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    STATE(48), 1,
      sym_VARTOKN,
    STATE(43), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [1824] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_RBRACK,
    ACTIONS(273), 1,
      anon_sym_PLUS,
    ACTIONS(275), 1,
      anon_sym_DASH,
    STATE(70), 4,
      sym__editoper,
      sym_edittagadd,
      sym_edittagdel,
      aux_sym__editblock_repeat1,
  [1843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 6,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACE,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
  [1858] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_PLUS,
    ACTIONS(275), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    STATE(67), 4,
      sym__editoper,
      sym_edittagadd,
      sym_edittagdel,
      aux_sym__editblock_repeat1,
  [1877] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    ACTIONS(285), 1,
      anon_sym_PLUS,
    ACTIONS(288), 1,
      anon_sym_DASH,
    STATE(70), 4,
      sym__editoper,
      sym_edittagadd,
      sym_edittagdel,
      aux_sym__editblock_repeat1,
  [1896] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      aux_sym_formatstring_token1,
    STATE(87), 1,
      sym_VARTOKN,
    STATE(106), 1,
      sym_funcarg,
    STATE(94), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [1919] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_formatstring_token1,
    STATE(108), 1,
      sym_VARTOKN,
    STATE(43), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [1939] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_formatstring_token1,
    STATE(80), 1,
      sym_VARTOKN,
    STATE(43), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [1959] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_SQUOTE,
    ACTIONS(255), 1,
      aux_sym_formatstring_token1,
    STATE(110), 1,
      sym_VARTOKN,
    STATE(43), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [1979] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_DOLLAR,
    ACTIONS(293), 1,
      sym_TAGSEGNOVAR,
    STATE(68), 2,
      sym__tagsegs,
      sym__varvalu,
  [1993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2002] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    ACTIONS(299), 1,
      anon_sym_DOLLAR,
    STATE(77), 1,
      aux_sym_varlist_repeat1,
  [2015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    ACTIONS(304), 1,
      anon_sym_DOLLAR,
    STATE(77), 1,
      aux_sym_varlist_repeat1,
  [2028] = 4,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    ACTIONS(310), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [2041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_DOLLAR,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_varlist_repeat1,
  [2054] = 4,
    ACTIONS(310), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DQUOTE,
    ACTIONS(316), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    STATE(81), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [2067] = 4,
    ACTIONS(310), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    STATE(81), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [2080] = 4,
    ACTIONS(310), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_SQUOTE,
    ACTIONS(325), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    STATE(83), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [2093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2102] = 4,
    ACTIONS(310), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    STATE(79), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [2115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_funcargs_repeat1,
  [2128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_EQ2,
    ACTIONS(336), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_funcargs_repeat1,
  [2152] = 4,
    ACTIONS(310), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    ACTIONS(342), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    STATE(82), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [2165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_RPAREN,
      anon_sym_EQ2,
      anon_sym_COMMA,
  [2174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_RPAREN,
      anon_sym_EQ2,
      anon_sym_COMMA,
  [2183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_RPAREN,
      anon_sym_EQ2,
      anon_sym_COMMA,
  [2192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_RPAREN,
      anon_sym_EQ2,
      anon_sym_COMMA,
  [2201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 3,
      anon_sym_RPAREN,
      anon_sym_EQ2,
      anon_sym_COMMA,
  [2210] = 4,
    ACTIONS(310), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    ACTIONS(346), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    STATE(96), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [2223] = 4,
    ACTIONS(308), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    ACTIONS(310), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_SQUOTE,
    STATE(83), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [2236] = 4,
    ACTIONS(310), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    STATE(98), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [2249] = 4,
    ACTIONS(310), 1,
      sym_comment,
    ACTIONS(321), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [2262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_funcargs_repeat1,
  [2275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 3,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_funcargs_repeat1,
  [2297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_SETTAGOPER,
    ACTIONS(367), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_tagname,
  [2310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_POUND,
    STATE(84), 1,
      sym_tagname,
  [2320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_baresubquery,
  [2330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_tagname,
  [2340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_baresubquery,
  [2358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym_funcargs,
  [2368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [2376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
  [2384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOT,
    ACTIONS(373), 1,
      anon_sym_EQ,
  [2394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_baresubquery,
  [2404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [2412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_DOLLAR,
    ACTIONS(377), 1,
      sym_TAGSEGNOVAR,
  [2422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
  [2437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LBRACE,
  [2444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LBRACE,
  [2451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
  [2458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_DOLLAR,
  [2465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
  [2472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_EQ,
  [2479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
  [2486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_DOT,
  [2493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_EQ,
  [2500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_EQ,
  [2507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LBRACE,
  [2514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
  [2521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
  [2528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
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
  [SMALL_STATE(11)] = 539,
  [SMALL_STATE(12)] = 572,
  [SMALL_STATE(13)] = 605,
  [SMALL_STATE(14)] = 638,
  [SMALL_STATE(15)] = 666,
  [SMALL_STATE(16)] = 695,
  [SMALL_STATE(17)] = 722,
  [SMALL_STATE(18)] = 751,
  [SMALL_STATE(19)] = 773,
  [SMALL_STATE(20)] = 795,
  [SMALL_STATE(21)] = 815,
  [SMALL_STATE(22)] = 835,
  [SMALL_STATE(23)] = 857,
  [SMALL_STATE(24)] = 877,
  [SMALL_STATE(25)] = 897,
  [SMALL_STATE(26)] = 917,
  [SMALL_STATE(27)] = 937,
  [SMALL_STATE(28)] = 967,
  [SMALL_STATE(29)] = 987,
  [SMALL_STATE(30)] = 1007,
  [SMALL_STATE(31)] = 1027,
  [SMALL_STATE(32)] = 1047,
  [SMALL_STATE(33)] = 1077,
  [SMALL_STATE(34)] = 1097,
  [SMALL_STATE(35)] = 1117,
  [SMALL_STATE(36)] = 1137,
  [SMALL_STATE(37)] = 1157,
  [SMALL_STATE(38)] = 1177,
  [SMALL_STATE(39)] = 1197,
  [SMALL_STATE(40)] = 1217,
  [SMALL_STATE(41)] = 1237,
  [SMALL_STATE(42)] = 1256,
  [SMALL_STATE(43)] = 1277,
  [SMALL_STATE(44)] = 1297,
  [SMALL_STATE(45)] = 1315,
  [SMALL_STATE(46)] = 1343,
  [SMALL_STATE(47)] = 1371,
  [SMALL_STATE(48)] = 1399,
  [SMALL_STATE(49)] = 1424,
  [SMALL_STATE(50)] = 1449,
  [SMALL_STATE(51)] = 1474,
  [SMALL_STATE(52)] = 1499,
  [SMALL_STATE(53)] = 1524,
  [SMALL_STATE(54)] = 1549,
  [SMALL_STATE(55)] = 1581,
  [SMALL_STATE(56)] = 1602,
  [SMALL_STATE(57)] = 1623,
  [SMALL_STATE(58)] = 1644,
  [SMALL_STATE(59)] = 1668,
  [SMALL_STATE(60)] = 1684,
  [SMALL_STATE(61)] = 1708,
  [SMALL_STATE(62)] = 1724,
  [SMALL_STATE(63)] = 1740,
  [SMALL_STATE(64)] = 1755,
  [SMALL_STATE(65)] = 1778,
  [SMALL_STATE(66)] = 1801,
  [SMALL_STATE(67)] = 1824,
  [SMALL_STATE(68)] = 1843,
  [SMALL_STATE(69)] = 1858,
  [SMALL_STATE(70)] = 1877,
  [SMALL_STATE(71)] = 1896,
  [SMALL_STATE(72)] = 1919,
  [SMALL_STATE(73)] = 1939,
  [SMALL_STATE(74)] = 1959,
  [SMALL_STATE(75)] = 1979,
  [SMALL_STATE(76)] = 1993,
  [SMALL_STATE(77)] = 2002,
  [SMALL_STATE(78)] = 2015,
  [SMALL_STATE(79)] = 2028,
  [SMALL_STATE(80)] = 2041,
  [SMALL_STATE(81)] = 2054,
  [SMALL_STATE(82)] = 2067,
  [SMALL_STATE(83)] = 2080,
  [SMALL_STATE(84)] = 2093,
  [SMALL_STATE(85)] = 2102,
  [SMALL_STATE(86)] = 2115,
  [SMALL_STATE(87)] = 2128,
  [SMALL_STATE(88)] = 2139,
  [SMALL_STATE(89)] = 2152,
  [SMALL_STATE(90)] = 2165,
  [SMALL_STATE(91)] = 2174,
  [SMALL_STATE(92)] = 2183,
  [SMALL_STATE(93)] = 2192,
  [SMALL_STATE(94)] = 2201,
  [SMALL_STATE(95)] = 2210,
  [SMALL_STATE(96)] = 2223,
  [SMALL_STATE(97)] = 2236,
  [SMALL_STATE(98)] = 2249,
  [SMALL_STATE(99)] = 2262,
  [SMALL_STATE(100)] = 2275,
  [SMALL_STATE(101)] = 2284,
  [SMALL_STATE(102)] = 2297,
  [SMALL_STATE(103)] = 2310,
  [SMALL_STATE(104)] = 2320,
  [SMALL_STATE(105)] = 2330,
  [SMALL_STATE(106)] = 2340,
  [SMALL_STATE(107)] = 2348,
  [SMALL_STATE(108)] = 2358,
  [SMALL_STATE(109)] = 2368,
  [SMALL_STATE(110)] = 2376,
  [SMALL_STATE(111)] = 2384,
  [SMALL_STATE(112)] = 2394,
  [SMALL_STATE(113)] = 2404,
  [SMALL_STATE(114)] = 2412,
  [SMALL_STATE(115)] = 2422,
  [SMALL_STATE(116)] = 2430,
  [SMALL_STATE(117)] = 2437,
  [SMALL_STATE(118)] = 2444,
  [SMALL_STATE(119)] = 2451,
  [SMALL_STATE(120)] = 2458,
  [SMALL_STATE(121)] = 2465,
  [SMALL_STATE(122)] = 2472,
  [SMALL_STATE(123)] = 2479,
  [SMALL_STATE(124)] = 2486,
  [SMALL_STATE(125)] = 2493,
  [SMALL_STATE(126)] = 2500,
  [SMALL_STATE(127)] = 2507,
  [SMALL_STATE(128)] = 2514,
  [SMALL_STATE(129)] = 2521,
  [SMALL_STATE(130)] = 2528,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(69),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(23),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(26),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(35),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(121),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(120),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(50),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(58),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(72),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(116),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(45),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(69),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(23),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(26),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(35),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(121),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(120),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(50),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(58),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(72),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(116),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_initblock_repeat1, 2), SHIFT_REPEAT(45),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__querystart, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SINGLEQUOTEDSTRING, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_SINGLEQUOTEDSTRING, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SINGLEQUOTEDSTRING, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_SINGLEQUOTEDSTRING, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_baresubquery, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifstmt, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ifstmt_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ifstmt_repeat1, 2), SHIFT_REPEAT(47),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifstmt, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifclause, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifstmt, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stormfunc, 5, .production_id = 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setitem, 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__editblock, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edittagadd, 2, .production_id = 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initblock, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opervarlist, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emit, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__editblock, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edittagadd, 3, .production_id = 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initblock, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ifstmt, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stop, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stormfunc, 6, .production_id = 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setvar, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setitem, 6),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_VARTOKN, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_VARTOKN, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tagsegs_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tagsegs_repeat1, 2), SHIFT_REPEAT(114),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tagsegs_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagsegs, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tagsegs, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tagsegs, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tagsegs, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tagsegs_repeat1, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tagsegs_repeat1, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varvalue, 1, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varvalue, 1, .production_id = 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__varvalu, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__varvalu, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tagname, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tagname, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__editblock_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__editblock_repeat1, 2), SHIFT_REPEAT(102),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__editblock_repeat1, 2), SHIFT_REPEAT(103),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edittagadd, 4, .production_id = 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_varlist_repeat1, 2),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_varlist_repeat1, 2), SHIFT_REPEAT(74),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_DOUBLEQUOTEDSTRING_repeat1, 2),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_DOUBLEQUOTEDSTRING_repeat1, 2), SHIFT_REPEAT(81),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_SINGLEQUOTEDSTRING_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_SINGLEQUOTEDSTRING_repeat1, 2), SHIFT_REPEAT(83),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edittagdel, 2, .production_id = 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcarg, 1, .production_id = 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcargs_repeat1, 2),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funcargs_repeat1, 2), SHIFT_REPEAT(71),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edittagadd, 3, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcarg, 3, .production_id = 6),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 4),
  [387] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varlist, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varlist, 5),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
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
