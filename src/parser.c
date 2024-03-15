#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_PIPE = 1,
  sym_TRIPLEQUOTEDSTRING = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_DOUBLEQUOTEDSTRING_token1 = 4,
  anon_sym_SQUOTE = 5,
  aux_sym_SINGLEQUOTEDSTRING_token1 = 6,
  anon_sym_BQUOTE = 7,
  aux_sym_formatstring_token1 = 8,
  anon_sym_EQ = 9,
  anon_sym_LPAREN = 10,
  anon_sym_COMMA = 11,
  anon_sym_RPAREN = 12,
  anon_sym_function = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  sym_dot = 16,
  anon_sym_DOLLAR = 17,
  sym_comment = 18,
  sym_try_set = 19,
  sym_break = 20,
  sym_continue = 21,
  anon_sym_return = 22,
  anon_sym_emit = 23,
  anon_sym_EQ2 = 24,
  sym_query = 25,
  sym__querystart = 26,
  sym_DOUBLEQUOTEDSTRING = 27,
  sym_SINGLEQUOTEDSTRING = 28,
  sym_funcarg = 29,
  sym_funcargs = 30,
  sym_stormfunc = 31,
  sym__oper = 32,
  sym_setvar = 33,
  sym_varlist = 34,
  sym_opervarlist = 35,
  sym_VARTOKN = 36,
  sym__rootvalu = 37,
  sym__argvalu = 38,
  sym__basevalu = 39,
  sym__valu = 40,
  aux_sym__querystart_repeat1 = 41,
  aux_sym_DOUBLEQUOTEDSTRING_repeat1 = 42,
  aux_sym_SINGLEQUOTEDSTRING_repeat1 = 43,
  aux_sym_funcargs_repeat1 = 44,
  aux_sym_varlist_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PIPE] = "|",
  [sym_TRIPLEQUOTEDSTRING] = "TRIPLEQUOTEDSTRING",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_DOUBLEQUOTEDSTRING_token1] = "DOUBLEQUOTEDSTRING_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SINGLEQUOTEDSTRING_token1] = "SINGLEQUOTEDSTRING_token1",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_formatstring_token1] = "formatstring_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_function] = "function",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_dot] = "dot",
  [anon_sym_DOLLAR] = "$",
  [sym_comment] = "comment",
  [sym_try_set] = "try_set",
  [sym_break] = "break",
  [sym_continue] = "continue",
  [anon_sym_return] = "return",
  [anon_sym_emit] = "emit",
  [anon_sym_EQ2] = "=",
  [sym_query] = "query",
  [sym__querystart] = "_querystart",
  [sym_DOUBLEQUOTEDSTRING] = "DOUBLEQUOTEDSTRING",
  [sym_SINGLEQUOTEDSTRING] = "SINGLEQUOTEDSTRING",
  [sym_funcarg] = "funcarg",
  [sym_funcargs] = "funcargs",
  [sym_stormfunc] = "stormfunc",
  [sym__oper] = "_oper",
  [sym_setvar] = "setvar",
  [sym_varlist] = "varlist",
  [sym_opervarlist] = "opervarlist",
  [sym_VARTOKN] = "VARTOKN",
  [sym__rootvalu] = "_rootvalu",
  [sym__argvalu] = "_argvalu",
  [sym__basevalu] = "_basevalu",
  [sym__valu] = "_valu",
  [aux_sym__querystart_repeat1] = "_querystart_repeat1",
  [aux_sym_DOUBLEQUOTEDSTRING_repeat1] = "DOUBLEQUOTEDSTRING_repeat1",
  [aux_sym_SINGLEQUOTEDSTRING_repeat1] = "SINGLEQUOTEDSTRING_repeat1",
  [aux_sym_funcargs_repeat1] = "funcargs_repeat1",
  [aux_sym_varlist_repeat1] = "varlist_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_TRIPLEQUOTEDSTRING] = sym_TRIPLEQUOTEDSTRING,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_DOUBLEQUOTEDSTRING_token1] = aux_sym_DOUBLEQUOTEDSTRING_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_SINGLEQUOTEDSTRING_token1] = aux_sym_SINGLEQUOTEDSTRING_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_formatstring_token1] = aux_sym_formatstring_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_dot] = sym_dot,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_comment] = sym_comment,
  [sym_try_set] = sym_try_set,
  [sym_break] = sym_break,
  [sym_continue] = sym_continue,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_emit] = anon_sym_emit,
  [anon_sym_EQ2] = anon_sym_EQ,
  [sym_query] = sym_query,
  [sym__querystart] = sym__querystart,
  [sym_DOUBLEQUOTEDSTRING] = sym_DOUBLEQUOTEDSTRING,
  [sym_SINGLEQUOTEDSTRING] = sym_SINGLEQUOTEDSTRING,
  [sym_funcarg] = sym_funcarg,
  [sym_funcargs] = sym_funcargs,
  [sym_stormfunc] = sym_stormfunc,
  [sym__oper] = sym__oper,
  [sym_setvar] = sym_setvar,
  [sym_varlist] = sym_varlist,
  [sym_opervarlist] = sym_opervarlist,
  [sym_VARTOKN] = sym_VARTOKN,
  [sym__rootvalu] = sym__rootvalu,
  [sym__argvalu] = sym__argvalu,
  [sym__basevalu] = sym__basevalu,
  [sym__valu] = sym__valu,
  [aux_sym__querystart_repeat1] = aux_sym__querystart_repeat1,
  [aux_sym_DOUBLEQUOTEDSTRING_repeat1] = aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [aux_sym_SINGLEQUOTEDSTRING_repeat1] = aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [aux_sym_funcargs_repeat1] = aux_sym_funcargs_repeat1,
  [aux_sym_varlist_repeat1] = aux_sym_varlist_repeat1,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
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
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_try_set] = {
    .visible = true,
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym__querystart] = {
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
  [sym__oper] = {
    .visible = false,
    .named = true,
  },
  [sym_setvar] = {
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
  [aux_sym_varlist_repeat1] = {
    .visible = false,
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
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_arguments, 2},
    {field_name, 1},
  [3] =
    {field_default_value, 2},
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [28] = 9,
  [29] = 12,
  [30] = 30,
  [31] = 13,
  [32] = 25,
  [33] = 30,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 37,
  [42] = 27,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 10,
  [48] = 35,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == '`') ADVANCE(54);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '}') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '/') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '/') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '/') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'k') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 40:
      if (eof) ADVANCE(42);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '?') ADVANCE(13);
      if (lookahead == '`') ADVANCE(54);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '}') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '}') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_TRIPLEQUOTEDSTRING);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_DOUBLEQUOTEDSTRING_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_DOUBLEQUOTEDSTRING_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_DOUBLEQUOTEDSTRING_token1);
      if (lookahead == '/') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(3);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_SINGLEQUOTEDSTRING_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SINGLEQUOTEDSTRING_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_SINGLEQUOTEDSTRING_token1);
      if (lookahead == '/') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_formatstring_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_try_set);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_emit);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ2);
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
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 41},
  [10] = {.lex_state = 41},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 41},
  [13] = {.lex_state = 41},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_TRIPLEQUOTEDSTRING] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_try_set] = ACTIONS(1),
    [sym_break] = ACTIONS(1),
    [sym_continue] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_emit] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(65),
    [sym__querystart] = STATE(54),
    [sym_stormfunc] = STATE(22),
    [sym__oper] = STATE(22),
    [sym_setvar] = STATE(22),
    [sym_varlist] = STATE(64),
    [sym_opervarlist] = STATE(22),
    [aux_sym__querystart_repeat1] = STATE(4),
    [anon_sym_PIPE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_function] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_PIPE,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym__querystart_repeat1,
    STATE(54), 1,
      sym__querystart,
    STATE(57), 1,
      sym_query,
    STATE(64), 1,
      sym_varlist,
    STATE(22), 4,
      sym_stormfunc,
      sym__oper,
      sym_setvar,
      sym_opervarlist,
  [37] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    STATE(4), 1,
      aux_sym__querystart_repeat1,
    STATE(53), 1,
      sym__querystart,
    STATE(64), 1,
      sym_varlist,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(22), 4,
      sym_stormfunc,
      sym__oper,
      sym_setvar,
      sym_opervarlist,
  [69] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    STATE(5), 1,
      aux_sym__querystart_repeat1,
    STATE(64), 1,
      sym_varlist,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(22), 4,
      sym_stormfunc,
      sym__oper,
      sym_setvar,
      sym_opervarlist,
  [98] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(24), 1,
      anon_sym_function,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    STATE(5), 1,
      aux_sym__querystart_repeat1,
    STATE(64), 1,
      sym_varlist,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(22), 4,
      sym_stormfunc,
      sym__oper,
      sym_setvar,
      sym_opervarlist,
  [127] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_DQUOTE,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      aux_sym_formatstring_token1,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    ACTIONS(38), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym_funcarg,
    STATE(39), 1,
      sym_VARTOKN,
    STATE(40), 1,
      aux_sym_funcargs_repeat1,
    STATE(32), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [159] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    STATE(23), 6,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [180] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    ACTIONS(46), 1,
      sym_TRIPLEQUOTEDSTRING,
    STATE(51), 6,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ2,
  [216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ2,
  [231] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    ACTIONS(52), 1,
      sym_TRIPLEQUOTEDSTRING,
    STATE(20), 6,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym__rootvalu,
      sym__argvalu,
      sym__basevalu,
      sym__valu,
  [252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ2,
  [267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ2,
  [282] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_DQUOTE,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      aux_sym_formatstring_token1,
    STATE(39), 1,
      sym_VARTOKN,
    STATE(50), 1,
      sym_funcarg,
    STATE(32), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [305] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      aux_sym_formatstring_token1,
    STATE(45), 1,
      sym_VARTOKN,
    STATE(25), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [325] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      aux_sym_formatstring_token1,
    STATE(52), 1,
      sym_VARTOKN,
    STATE(25), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
  [357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
  [369] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      aux_sym_formatstring_token1,
    STATE(49), 1,
      sym_VARTOKN,
    STATE(25), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
  [401] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      aux_sym_formatstring_token1,
    STATE(63), 1,
      sym_VARTOKN,
    STATE(25), 2,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
  [421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_PIPE,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
  [435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
  [447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_function,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
  [458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_EQ2,
  [468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    ACTIONS(78), 1,
      anon_sym_DOLLAR,
    STATE(43), 1,
      aux_sym_varlist_repeat1,
  [481] = 4,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    ACTIONS(84), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [512] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    STATE(27), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [543] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    STATE(42), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [556] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    STATE(34), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [569] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    STATE(41), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [582] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    STATE(36), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [595] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    STATE(36), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_funcargs_repeat1,
  [621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(116), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_funcargs_repeat1,
  [645] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    STATE(36), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [658] = 4,
    ACTIONS(82), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    ACTIONS(124), 1,
      anon_sym_DOLLAR,
    STATE(43), 1,
      aux_sym_varlist_repeat1,
  [684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_funcargs_repeat1,
  [697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_DOLLAR,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_varlist_repeat1,
  [710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_funcargs_repeat1,
  [723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [732] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    STATE(37), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_funcargs,
  [755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 2,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
  [779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_EQ2,
  [802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
  [809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
  [816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
  [823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
  [830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_DOLLAR,
  [837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_EQ2,
  [844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
  [851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_EQ2,
  [858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_EQ2,
  [865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 69,
  [SMALL_STATE(5)] = 98,
  [SMALL_STATE(6)] = 127,
  [SMALL_STATE(7)] = 159,
  [SMALL_STATE(8)] = 180,
  [SMALL_STATE(9)] = 201,
  [SMALL_STATE(10)] = 216,
  [SMALL_STATE(11)] = 231,
  [SMALL_STATE(12)] = 252,
  [SMALL_STATE(13)] = 267,
  [SMALL_STATE(14)] = 282,
  [SMALL_STATE(15)] = 305,
  [SMALL_STATE(16)] = 325,
  [SMALL_STATE(17)] = 345,
  [SMALL_STATE(18)] = 357,
  [SMALL_STATE(19)] = 369,
  [SMALL_STATE(20)] = 389,
  [SMALL_STATE(21)] = 401,
  [SMALL_STATE(22)] = 421,
  [SMALL_STATE(23)] = 435,
  [SMALL_STATE(24)] = 447,
  [SMALL_STATE(25)] = 458,
  [SMALL_STATE(26)] = 468,
  [SMALL_STATE(27)] = 481,
  [SMALL_STATE(28)] = 494,
  [SMALL_STATE(29)] = 503,
  [SMALL_STATE(30)] = 512,
  [SMALL_STATE(31)] = 525,
  [SMALL_STATE(32)] = 534,
  [SMALL_STATE(33)] = 543,
  [SMALL_STATE(34)] = 556,
  [SMALL_STATE(35)] = 569,
  [SMALL_STATE(36)] = 582,
  [SMALL_STATE(37)] = 595,
  [SMALL_STATE(38)] = 608,
  [SMALL_STATE(39)] = 621,
  [SMALL_STATE(40)] = 632,
  [SMALL_STATE(41)] = 645,
  [SMALL_STATE(42)] = 658,
  [SMALL_STATE(43)] = 671,
  [SMALL_STATE(44)] = 684,
  [SMALL_STATE(45)] = 697,
  [SMALL_STATE(46)] = 710,
  [SMALL_STATE(47)] = 723,
  [SMALL_STATE(48)] = 732,
  [SMALL_STATE(49)] = 745,
  [SMALL_STATE(50)] = 755,
  [SMALL_STATE(51)] = 763,
  [SMALL_STATE(52)] = 771,
  [SMALL_STATE(53)] = 779,
  [SMALL_STATE(54)] = 787,
  [SMALL_STATE(55)] = 795,
  [SMALL_STATE(56)] = 802,
  [SMALL_STATE(57)] = 809,
  [SMALL_STATE(58)] = 816,
  [SMALL_STATE(59)] = 823,
  [SMALL_STATE(60)] = 830,
  [SMALL_STATE(61)] = 837,
  [SMALL_STATE(62)] = 844,
  [SMALL_STATE(63)] = 851,
  [SMALL_STATE(64)] = 858,
  [SMALL_STATE(65)] = 865,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__querystart, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(60),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(19),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 2), SHIFT_REPEAT(21),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SINGLEQUOTEDSTRING, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SINGLEQUOTEDSTRING, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stormfunc, 6, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stormfunc, 5, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setvar, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__querystart_repeat1, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opervarlist, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_VARTOKN, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_DOUBLEQUOTEDSTRING_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_DOUBLEQUOTEDSTRING_repeat1, 2), SHIFT_REPEAT(34),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_SINGLEQUOTEDSTRING_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_SINGLEQUOTEDSTRING_repeat1, 2), SHIFT_REPEAT(36),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcarg, 1, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_varlist_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_varlist_repeat1, 2), SHIFT_REPEAT(16),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funcargs_repeat1, 2), SHIFT_REPEAT(14),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcargs_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcarg, 3, .production_id = 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varlist, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varlist, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [166] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
