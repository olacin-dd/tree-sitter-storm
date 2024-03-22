#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  aux_sym_identifier_token1 = 2,
  anon_sym_DOLLAR = 3,
  anon_sym_DOT = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  sym_integer = 8,
  sym_float = 9,
  sym_break = 10,
  sym_continue = 11,
  sym_stop = 12,
  sym_TRIPLEQUOTEDSTRING = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_DOUBLEQUOTEDSTRING_token1 = 15,
  anon_sym_SQUOTE = 16,
  aux_sym_SINGLEQUOTEDSTRING_token1 = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  anon_sym_BQUOTE = 20,
  aux_sym_formatstring_token1 = 21,
  sym_comment = 22,
  anon_sym_init = 23,
  anon_sym_fini = 24,
  anon_sym_empty = 25,
  sym_source_file = 26,
  sym__statement = 27,
  sym__simple_statement = 28,
  sym_expression_statement = 29,
  sym__expression = 30,
  sym_variable_assignment = 31,
  sym_identifier = 32,
  sym_variable = 33,
  sym_attribute_reference = 34,
  sym_keyword_argument = 35,
  sym_argument = 36,
  sym_arguments = 37,
  sym_function_call = 38,
  sym_literal = 39,
  sym_DOUBLEQUOTEDSTRING = 40,
  sym_SINGLEQUOTEDSTRING = 41,
  sym_string = 42,
  sym_interpolation = 43,
  sym_formatstring = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_arguments_repeat1 = 46,
  aux_sym_DOUBLEQUOTEDSTRING_repeat1 = 47,
  aux_sym_SINGLEQUOTEDSTRING_repeat1 = 48,
  aux_sym_formatstring_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_break] = "break",
  [sym_continue] = "continue",
  [sym_stop] = "stop",
  [sym_TRIPLEQUOTEDSTRING] = "TRIPLEQUOTEDSTRING",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_DOUBLEQUOTEDSTRING_token1] = "DOUBLEQUOTEDSTRING_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SINGLEQUOTEDSTRING_token1] = "SINGLEQUOTEDSTRING_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_formatstring_token1] = "formatstring_token1",
  [sym_comment] = "comment",
  [anon_sym_init] = "init",
  [anon_sym_fini] = "fini",
  [anon_sym_empty] = "empty",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__simple_statement] = "_simple_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__expression] = "_expression",
  [sym_variable_assignment] = "variable_assignment",
  [sym_identifier] = "identifier",
  [sym_variable] = "variable",
  [sym_attribute_reference] = "attribute_reference",
  [sym_keyword_argument] = "keyword_argument",
  [sym_argument] = "argument",
  [sym_arguments] = "arguments",
  [sym_function_call] = "function_call",
  [sym_literal] = "literal",
  [sym_DOUBLEQUOTEDSTRING] = "DOUBLEQUOTEDSTRING",
  [sym_SINGLEQUOTEDSTRING] = "SINGLEQUOTEDSTRING",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [sym_formatstring] = "formatstring",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_DOUBLEQUOTEDSTRING_repeat1] = "DOUBLEQUOTEDSTRING_repeat1",
  [aux_sym_SINGLEQUOTEDSTRING_repeat1] = "SINGLEQUOTEDSTRING_repeat1",
  [aux_sym_formatstring_repeat1] = "formatstring_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_break] = sym_break,
  [sym_continue] = sym_continue,
  [sym_stop] = sym_stop,
  [sym_TRIPLEQUOTEDSTRING] = sym_TRIPLEQUOTEDSTRING,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_DOUBLEQUOTEDSTRING_token1] = aux_sym_DOUBLEQUOTEDSTRING_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_SINGLEQUOTEDSTRING_token1] = aux_sym_SINGLEQUOTEDSTRING_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_formatstring_token1] = aux_sym_formatstring_token1,
  [sym_comment] = sym_comment,
  [anon_sym_init] = anon_sym_init,
  [anon_sym_fini] = anon_sym_fini,
  [anon_sym_empty] = anon_sym_empty,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__simple_statement] = sym__simple_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression] = sym__expression,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_identifier] = sym_identifier,
  [sym_variable] = sym_variable,
  [sym_attribute_reference] = sym_attribute_reference,
  [sym_keyword_argument] = sym_keyword_argument,
  [sym_argument] = sym_argument,
  [sym_arguments] = sym_arguments,
  [sym_function_call] = sym_function_call,
  [sym_literal] = sym_literal,
  [sym_DOUBLEQUOTEDSTRING] = sym_DOUBLEQUOTEDSTRING,
  [sym_SINGLEQUOTEDSTRING] = sym_SINGLEQUOTEDSTRING,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [sym_formatstring] = sym_formatstring,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_DOUBLEQUOTEDSTRING_repeat1] = aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [aux_sym_SINGLEQUOTEDSTRING_repeat1] = aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [aux_sym_formatstring_repeat1] = aux_sym_formatstring_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
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
  [sym_stop] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_init] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fini] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
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
};

enum ts_field_identifiers {
  field_args = 1,
  field_attribute = 2,
  field_name = 3,
  field_object = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_attribute] = "attribute",
  [field_name] = "name",
  [field_object] = "object",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_args, 1},
    {field_name, 0},
  [3] =
    {field_value, 2},
  [4] =
    {field_attribute, 2},
    {field_object, 0},
  [6] =
    {field_name, 0},
    {field_value, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '`') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '/') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '/') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(64);
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
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '{') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 15:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '`') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '}') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '`') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'm') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_stop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_TRIPLEQUOTEDSTRING);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_DOUBLEQUOTEDSTRING_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_DOUBLEQUOTEDSTRING_token1);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_DOUBLEQUOTEDSTRING_token1);
      if (lookahead == '/') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(59);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(3);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SINGLEQUOTEDSTRING_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_SINGLEQUOTEDSTRING_token1);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_SINGLEQUOTEDSTRING_token1);
      if (lookahead == '/') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(64);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_formatstring_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_formatstring_token1);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_formatstring_token1);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '{') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_init);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_fini);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_empty);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_break] = ACTIONS(1),
    [sym_continue] = ACTIONS(1),
    [sym_stop] = ACTIONS(1),
    [sym_TRIPLEQUOTEDSTRING] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_init] = ACTIONS(1),
    [anon_sym_fini] = ACTIONS(1),
    [anon_sym_empty] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym__statement] = STATE(2),
    [sym__simple_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__expression] = STATE(24),
    [sym_variable_assignment] = STATE(24),
    [sym_variable] = STATE(7),
    [sym_attribute_reference] = STATE(30),
    [sym_function_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_DOUBLEQUOTEDSTRING] = STATE(22),
    [sym_SINGLEQUOTEDSTRING] = STATE(22),
    [sym_string] = STATE(17),
    [sym_formatstring] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [sym_TRIPLEQUOTEDSTRING] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_BQUOTE] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_variable,
    STATE(17), 1,
      sym_string,
    STATE(30), 1,
      sym_attribute_reference,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(22), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(3), 4,
      sym__statement,
      sym__simple_statement,
      sym_expression_statement,
      aux_sym_source_file_repeat1,
    STATE(24), 4,
      sym__expression,
      sym_variable_assignment,
      sym_function_call,
      sym_literal,
  [52] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(32), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(38), 1,
      anon_sym_BQUOTE,
    STATE(7), 1,
      sym_variable,
    STATE(17), 1,
      sym_string,
    STATE(30), 1,
      sym_attribute_reference,
    ACTIONS(26), 2,
      sym_integer,
      sym_float,
    STATE(22), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(3), 4,
      sym__statement,
      sym__simple_statement,
      sym_expression_statement,
      aux_sym_source_file_repeat1,
    STATE(24), 4,
      sym__expression,
      sym_variable_assignment,
      sym_function_call,
      sym_literal,
  [104] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    STATE(7), 1,
      sym_variable,
    STATE(17), 1,
      sym_string,
    STATE(30), 1,
      sym_attribute_reference,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(22), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(43), 4,
      sym__expression,
      sym_variable_assignment,
      sym_function_call,
      sym_literal,
  [147] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    STATE(7), 1,
      sym_variable,
    STATE(17), 1,
      sym_string,
    STATE(30), 1,
      sym_attribute_reference,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(22), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(19), 4,
      sym__expression,
      sym_variable_assignment,
      sym_function_call,
      sym_literal,
  [190] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      aux_sym_identifier_token1,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_argument,
    STATE(46), 1,
      sym_identifier,
    STATE(22), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(42), 3,
      sym_variable,
      sym_keyword_argument,
      sym_string,
  [231] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_EQ,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_arguments,
    ACTIONS(53), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [261] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_BQUOTE,
    ACTIONS(41), 1,
      aux_sym_identifier_token1,
    STATE(44), 1,
      sym_argument,
    STATE(46), 1,
      sym_identifier,
    STATE(22), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(42), 3,
      sym_variable,
      sym_keyword_argument,
      sym_string,
  [299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(55), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(59), 10,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(67), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(79), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(83), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(111), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
  [591] = 5,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      anon_sym_BQUOTE,
    ACTIONS(123), 1,
      aux_sym_formatstring_token1,
    ACTIONS(125), 1,
      sym_comment,
    STATE(26), 2,
      sym_interpolation,
      aux_sym_formatstring_repeat1,
  [608] = 5,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_BQUOTE,
    ACTIONS(129), 1,
      aux_sym_formatstring_token1,
    STATE(27), 2,
      sym_interpolation,
      aux_sym_formatstring_repeat1,
  [625] = 5,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(134), 1,
      anon_sym_BQUOTE,
    ACTIONS(136), 1,
      aux_sym_formatstring_token1,
    STATE(27), 2,
      sym_interpolation,
      aux_sym_formatstring_repeat1,
  [642] = 4,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_SQUOTE,
    ACTIONS(141), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    STATE(28), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [655] = 4,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    ACTIONS(146), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    STATE(29), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_arguments,
  [681] = 4,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    STATE(35), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [694] = 4,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    STATE(37), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_arguments_repeat1,
  [720] = 2,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_formatstring_token1,
  [729] = 4,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    STATE(28), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_arguments_repeat1,
  [755] = 4,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    STATE(29), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_arguments_repeat1,
  [781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      aux_sym_identifier_token1,
    STATE(40), 1,
      sym_identifier,
  [791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      sym_identifier,
  [809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
  [840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_EQ,
  [847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
  [854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      aux_sym_identifier_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 231,
  [SMALL_STATE(8)] = 261,
  [SMALL_STATE(9)] = 299,
  [SMALL_STATE(10)] = 320,
  [SMALL_STATE(11)] = 341,
  [SMALL_STATE(12)] = 359,
  [SMALL_STATE(13)] = 377,
  [SMALL_STATE(14)] = 395,
  [SMALL_STATE(15)] = 413,
  [SMALL_STATE(16)] = 431,
  [SMALL_STATE(17)] = 449,
  [SMALL_STATE(18)] = 467,
  [SMALL_STATE(19)] = 485,
  [SMALL_STATE(20)] = 503,
  [SMALL_STATE(21)] = 521,
  [SMALL_STATE(22)] = 539,
  [SMALL_STATE(23)] = 557,
  [SMALL_STATE(24)] = 575,
  [SMALL_STATE(25)] = 591,
  [SMALL_STATE(26)] = 608,
  [SMALL_STATE(27)] = 625,
  [SMALL_STATE(28)] = 642,
  [SMALL_STATE(29)] = 655,
  [SMALL_STATE(30)] = 668,
  [SMALL_STATE(31)] = 681,
  [SMALL_STATE(32)] = 694,
  [SMALL_STATE(33)] = 707,
  [SMALL_STATE(34)] = 720,
  [SMALL_STATE(35)] = 729,
  [SMALL_STATE(36)] = 742,
  [SMALL_STATE(37)] = 755,
  [SMALL_STATE(38)] = 768,
  [SMALL_STATE(39)] = 781,
  [SMALL_STATE(40)] = 791,
  [SMALL_STATE(41)] = 799,
  [SMALL_STATE(42)] = 809,
  [SMALL_STATE(43)] = 817,
  [SMALL_STATE(44)] = 825,
  [SMALL_STATE(45)] = 833,
  [SMALL_STATE(46)] = 840,
  [SMALL_STATE(47)] = 847,
  [SMALL_STATE(48)] = 854,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SINGLEQUOTEDSTRING, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_SINGLEQUOTEDSTRING, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SINGLEQUOTEDSTRING, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_SINGLEQUOTEDSTRING, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 3, .production_id = 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatstring, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formatstring, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatstring, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formatstring, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_formatstring_repeat1, 2), SHIFT_REPEAT(48),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_formatstring_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_formatstring_repeat1, 2), SHIFT_REPEAT(27),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_SINGLEQUOTEDSTRING_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_SINGLEQUOTEDSTRING_repeat1, 2), SHIFT_REPEAT(28),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_DOUBLEQUOTEDSTRING_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_DOUBLEQUOTEDSTRING_repeat1, 2), SHIFT_REPEAT(29),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(8),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_reference, 3, .production_id = 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_argument, 3, .production_id = 5),
  [184] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
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
