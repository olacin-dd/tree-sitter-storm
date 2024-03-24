#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 9

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
  anon_sym_return = 10,
  anon_sym_emit = 11,
  anon_sym_break = 12,
  anon_sym_continue = 13,
  anon_sym_EQ2 = 14,
  anon_sym_function = 15,
  sym_stop = 16,
  sym_TRIPLEQUOTEDSTRING = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_DOUBLEQUOTEDSTRING_token1 = 19,
  anon_sym_SQUOTE = 20,
  aux_sym_SINGLEQUOTEDSTRING_token1 = 21,
  anon_sym_LBRACE = 22,
  anon_sym_RBRACE = 23,
  anon_sym_BQUOTE = 24,
  aux_sym_formatstring_token1 = 25,
  sym_comment = 26,
  anon_sym_init = 27,
  anon_sym_fini = 28,
  anon_sym_empty = 29,
  sym_source_file = 30,
  sym__statement = 31,
  sym__simple_statement = 32,
  sym__compound_statement = 33,
  sym_expression_statement = 34,
  sym__expression = 35,
  sym_variable_assignment = 36,
  sym_identifier = 37,
  sym_variable = 38,
  sym_selector_expression = 39,
  sym_keyword_argument = 40,
  sym_argument = 41,
  sym_arguments = 42,
  sym_function_call = 43,
  sym_literal = 44,
  sym_return_statement = 45,
  sym_emit_statement = 46,
  sym_break_statement = 47,
  sym_continue_statement = 48,
  sym_funcarg = 49,
  sym_funcargs = 50,
  sym_function_definition = 51,
  sym_DOUBLEQUOTEDSTRING = 52,
  sym_SINGLEQUOTEDSTRING = 53,
  sym_string = 54,
  sym_interpolation = 55,
  sym_formatstring = 56,
  sym_block = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_arguments_repeat1 = 59,
  aux_sym_funcargs_repeat1 = 60,
  aux_sym_DOUBLEQUOTEDSTRING_repeat1 = 61,
  aux_sym_SINGLEQUOTEDSTRING_repeat1 = 62,
  aux_sym_formatstring_repeat1 = 63,
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
  [anon_sym_return] = "return",
  [anon_sym_emit] = "emit",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_EQ2] = "=",
  [anon_sym_function] = "function",
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
  [sym__compound_statement] = "_compound_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__expression] = "_expression",
  [sym_variable_assignment] = "variable_assignment",
  [sym_identifier] = "identifier",
  [sym_variable] = "variable",
  [sym_selector_expression] = "selector_expression",
  [sym_keyword_argument] = "keyword_argument",
  [sym_argument] = "argument",
  [sym_arguments] = "arguments",
  [sym_function_call] = "function_call",
  [sym_literal] = "literal",
  [sym_return_statement] = "return_statement",
  [sym_emit_statement] = "emit_statement",
  [sym_break_statement] = "break_statement",
  [sym_continue_statement] = "continue_statement",
  [sym_funcarg] = "funcarg",
  [sym_funcargs] = "funcargs",
  [sym_function_definition] = "function_definition",
  [sym_DOUBLEQUOTEDSTRING] = "DOUBLEQUOTEDSTRING",
  [sym_SINGLEQUOTEDSTRING] = "SINGLEQUOTEDSTRING",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [sym_formatstring] = "formatstring",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_funcargs_repeat1] = "funcargs_repeat1",
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
  [anon_sym_return] = anon_sym_return,
  [anon_sym_emit] = anon_sym_emit,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_EQ2] = anon_sym_EQ,
  [anon_sym_function] = anon_sym_function,
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
  [sym__compound_statement] = sym__compound_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression] = sym__expression,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_identifier] = sym_identifier,
  [sym_variable] = sym_variable,
  [sym_selector_expression] = sym_selector_expression,
  [sym_keyword_argument] = sym_keyword_argument,
  [sym_argument] = sym_argument,
  [sym_arguments] = sym_arguments,
  [sym_function_call] = sym_function_call,
  [sym_literal] = sym_literal,
  [sym_return_statement] = sym_return_statement,
  [sym_emit_statement] = sym_emit_statement,
  [sym_break_statement] = sym_break_statement,
  [sym_continue_statement] = sym_continue_statement,
  [sym_funcarg] = sym_funcarg,
  [sym_funcargs] = sym_funcargs,
  [sym_function_definition] = sym_function_definition,
  [sym_DOUBLEQUOTEDSTRING] = sym_DOUBLEQUOTEDSTRING,
  [sym_SINGLEQUOTEDSTRING] = sym_SINGLEQUOTEDSTRING,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [sym_formatstring] = sym_formatstring,
  [sym_block] = sym_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_funcargs_repeat1] = aux_sym_funcargs_repeat1,
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
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
  [sym__compound_statement] = {
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
  [sym_selector_expression] = {
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
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_emit_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_statement] = {
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
  [sym_function_definition] = {
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
  [sym_block] = {
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
  [aux_sym_funcargs_repeat1] = {
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
  field_arguments = 2,
  field_attribute = 3,
  field_default_value = 4,
  field_name = 5,
  field_object = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_arguments] = "arguments",
  [field_attribute] = "attribute",
  [field_default_value] = "default_value",
  [field_name] = "name",
  [field_object] = "object",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_args, 1},
    {field_name, 0},
  [3] =
    {field_attribute, 2},
    {field_object, 0},
  [5] =
    {field_value, 2},
  [6] =
    {field_name, 0},
  [7] =
    {field_arguments, 2},
    {field_name, 1},
  [9] =
    {field_name, 0},
    {field_value, 2},
  [11] =
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
  [48] = 7,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '`') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '`') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '/') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '/') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(91);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == '{') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'k') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 51:
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 54:
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == '}') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 55:
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == '}') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_emit);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_stop);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_TRIPLEQUOTEDSTRING);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_DOUBLEQUOTEDSTRING_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_DOUBLEQUOTEDSTRING_token1);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(91);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_DOUBLEQUOTEDSTRING_token1);
      if (lookahead == '/') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(76);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(4);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_SINGLEQUOTEDSTRING_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SINGLEQUOTEDSTRING_token1);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SINGLEQUOTEDSTRING_token1);
      if (lookahead == '/') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(81);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_formatstring_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_formatstring_token1);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_formatstring_token1);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '{') ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(87);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_init);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_fini);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_empty);
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
  [6] = {.lex_state = 54},
  [7] = {.lex_state = 54},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 54},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 54},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_emit] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
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
    [sym_source_file] = STATE(74),
    [sym__statement] = STATE(4),
    [sym__simple_statement] = STATE(4),
    [sym__compound_statement] = STATE(4),
    [sym_expression_statement] = STATE(4),
    [sym__expression] = STATE(21),
    [sym_variable_assignment] = STATE(4),
    [sym_variable] = STATE(24),
    [sym_selector_expression] = STATE(21),
    [sym_function_call] = STATE(21),
    [sym_literal] = STATE(21),
    [sym_return_statement] = STATE(4),
    [sym_emit_statement] = STATE(4),
    [sym_break_statement] = STATE(4),
    [sym_continue_statement] = STATE(4),
    [sym_function_definition] = STATE(4),
    [sym_DOUBLEQUOTEDSTRING] = STATE(11),
    [sym_SINGLEQUOTEDSTRING] = STATE(11),
    [sym_string] = STATE(10),
    [sym_formatstring] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_emit] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_continue] = ACTIONS(17),
    [anon_sym_function] = ACTIONS(19),
    [sym_TRIPLEQUOTEDSTRING] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__simple_statement] = STATE(2),
    [sym__compound_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__expression] = STATE(21),
    [sym_variable_assignment] = STATE(2),
    [sym_variable] = STATE(24),
    [sym_selector_expression] = STATE(21),
    [sym_function_call] = STATE(21),
    [sym_literal] = STATE(21),
    [sym_return_statement] = STATE(2),
    [sym_emit_statement] = STATE(2),
    [sym_break_statement] = STATE(2),
    [sym_continue_statement] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_DOUBLEQUOTEDSTRING] = STATE(11),
    [sym_SINGLEQUOTEDSTRING] = STATE(11),
    [sym_string] = STATE(10),
    [sym_formatstring] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_integer] = ACTIONS(34),
    [sym_float] = ACTIONS(34),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_emit] = ACTIONS(40),
    [anon_sym_break] = ACTIONS(43),
    [anon_sym_continue] = ACTIONS(46),
    [anon_sym_function] = ACTIONS(49),
    [sym_TRIPLEQUOTEDSTRING] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_BQUOTE] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__simple_statement] = STATE(2),
    [sym__compound_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__expression] = STATE(21),
    [sym_variable_assignment] = STATE(2),
    [sym_variable] = STATE(24),
    [sym_selector_expression] = STATE(21),
    [sym_function_call] = STATE(21),
    [sym_literal] = STATE(21),
    [sym_return_statement] = STATE(2),
    [sym_emit_statement] = STATE(2),
    [sym_break_statement] = STATE(2),
    [sym_continue_statement] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_DOUBLEQUOTEDSTRING] = STATE(11),
    [sym_SINGLEQUOTEDSTRING] = STATE(11),
    [sym_string] = STATE(10),
    [sym_formatstring] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_emit] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_continue] = ACTIONS(17),
    [anon_sym_function] = ACTIONS(19),
    [sym_TRIPLEQUOTEDSTRING] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(64),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__statement] = STATE(2),
    [sym__simple_statement] = STATE(2),
    [sym__compound_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__expression] = STATE(21),
    [sym_variable_assignment] = STATE(2),
    [sym_variable] = STATE(24),
    [sym_selector_expression] = STATE(21),
    [sym_function_call] = STATE(21),
    [sym_literal] = STATE(21),
    [sym_return_statement] = STATE(2),
    [sym_emit_statement] = STATE(2),
    [sym_break_statement] = STATE(2),
    [sym_continue_statement] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_DOUBLEQUOTEDSTRING] = STATE(11),
    [sym_SINGLEQUOTEDSTRING] = STATE(11),
    [sym_string] = STATE(10),
    [sym_formatstring] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_emit] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_continue] = ACTIONS(17),
    [anon_sym_function] = ACTIONS(19),
    [sym_TRIPLEQUOTEDSTRING] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__statement] = STATE(3),
    [sym__simple_statement] = STATE(3),
    [sym__compound_statement] = STATE(3),
    [sym_expression_statement] = STATE(3),
    [sym__expression] = STATE(21),
    [sym_variable_assignment] = STATE(3),
    [sym_variable] = STATE(24),
    [sym_selector_expression] = STATE(21),
    [sym_function_call] = STATE(21),
    [sym_literal] = STATE(21),
    [sym_return_statement] = STATE(3),
    [sym_emit_statement] = STATE(3),
    [sym_break_statement] = STATE(3),
    [sym_continue_statement] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_DOUBLEQUOTEDSTRING] = STATE(11),
    [sym_SINGLEQUOTEDSTRING] = STATE(11),
    [sym_string] = STATE(10),
    [sym_formatstring] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_emit] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_continue] = ACTIONS(17),
    [anon_sym_function] = ACTIONS(19),
    [sym_TRIPLEQUOTEDSTRING] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(68),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(70), 16,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [27] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(74), 16,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [54] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(78), 15,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [80] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(82), 15,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(86), 15,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(90), 15,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(94), 15,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(98), 15,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(102), 15,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(106), 15,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(110), 15,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(114), 15,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(118), 15,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(122), 15,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(126), 15,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [392] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_DOT,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_arguments,
    ACTIONS(136), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(130), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [423] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_DOT,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_arguments,
    ACTIONS(140), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(138), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [454] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(11), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(44), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_EQ,
    ACTIONS(148), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(144), 13,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [522] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_DOT,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_arguments,
    ACTIONS(152), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(150), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [553] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    STATE(10), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(11), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(41), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [591] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    STATE(10), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(11), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(22), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [629] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    STATE(10), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(11), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(40), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [667] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    STATE(10), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(11), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(25), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [705] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(154), 1,
      aux_sym_identifier_token1,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_argument,
    STATE(77), 1,
      sym_identifier,
    STATE(11), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(65), 3,
      sym_variable,
      sym_keyword_argument,
      sym_string,
  [746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(158), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(162), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(166), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(170), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(174), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(178), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [878] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      sym_TRIPLEQUOTEDSTRING,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(154), 1,
      aux_sym_identifier_token1,
    STATE(64), 1,
      sym_argument,
    STATE(77), 1,
      sym_identifier,
    STATE(11), 3,
      sym_DOUBLEQUOTEDSTRING,
      sym_SINGLEQUOTEDSTRING,
      sym_formatstring,
    STATE(65), 3,
      sym_variable,
      sym_keyword_argument,
      sym_string,
  [916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(182), 11,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      sym_TRIPLEQUOTEDSTRING,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [938] = 5,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_BQUOTE,
    ACTIONS(190), 1,
      aux_sym_formatstring_token1,
    ACTIONS(192), 1,
      sym_comment,
    STATE(43), 2,
      sym_interpolation,
      aux_sym_formatstring_repeat1,
  [955] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_DOT,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_arguments,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [972] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_DOT,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_arguments,
    ACTIONS(196), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [989] = 5,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_BQUOTE,
    ACTIONS(200), 1,
      aux_sym_formatstring_token1,
    STATE(39), 2,
      sym_interpolation,
      aux_sym_formatstring_repeat1,
  [1006] = 5,
    ACTIONS(192), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_BQUOTE,
    ACTIONS(207), 1,
      aux_sym_formatstring_token1,
    STATE(43), 2,
      sym_interpolation,
      aux_sym_formatstring_repeat1,
  [1023] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_DOT,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_arguments,
  [1039] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym_funcarg,
    STATE(54), 1,
      sym_identifier,
  [1055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_funcargs_repeat1,
  [1068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_arguments_repeat1,
  [1081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ2,
  [1090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_funcargs_repeat1,
  [1103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_arguments_repeat1,
  [1116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_arguments_repeat1,
  [1129] = 4,
    ACTIONS(192), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    STATE(52), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [1142] = 4,
    ACTIONS(192), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_SQUOTE,
    ACTIONS(243), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    STATE(53), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [1155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_EQ2,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_funcargs_repeat1,
  [1179] = 4,
    ACTIONS(192), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(254), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    STATE(59), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [1192] = 2,
    ACTIONS(192), 1,
      sym_comment,
    ACTIONS(256), 3,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym_formatstring_token1,
  [1201] = 4,
    ACTIONS(192), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    STATE(61), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [1214] = 4,
    ACTIONS(192), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(264), 1,
      aux_sym_SINGLEQUOTEDSTRING_token1,
    STATE(53), 1,
      aux_sym_SINGLEQUOTEDSTRING_repeat1,
  [1227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    STATE(54), 1,
      sym_identifier,
    STATE(67), 1,
      sym_funcarg,
  [1240] = 4,
    ACTIONS(192), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      aux_sym_DOUBLEQUOTEDSTRING_token1,
    STATE(52), 1,
      aux_sym_DOUBLEQUOTEDSTRING_repeat1,
  [1253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      aux_sym_identifier_token1,
    STATE(69), 1,
      sym_identifier,
  [1263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      aux_sym_identifier_token1,
    STATE(8), 1,
      sym_identifier,
  [1273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      aux_sym_identifier_token1,
    STATE(6), 1,
      sym_identifier,
  [1299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
  [1317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_funcargs,
  [1327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
  [1334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
  [1341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
  [1348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_identifier_token1,
  [1355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
  [1362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
  [1369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
  [1376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 27,
  [SMALL_STATE(8)] = 54,
  [SMALL_STATE(9)] = 80,
  [SMALL_STATE(10)] = 106,
  [SMALL_STATE(11)] = 132,
  [SMALL_STATE(12)] = 158,
  [SMALL_STATE(13)] = 184,
  [SMALL_STATE(14)] = 210,
  [SMALL_STATE(15)] = 236,
  [SMALL_STATE(16)] = 262,
  [SMALL_STATE(17)] = 288,
  [SMALL_STATE(18)] = 314,
  [SMALL_STATE(19)] = 340,
  [SMALL_STATE(20)] = 366,
  [SMALL_STATE(21)] = 392,
  [SMALL_STATE(22)] = 423,
  [SMALL_STATE(23)] = 454,
  [SMALL_STATE(24)] = 495,
  [SMALL_STATE(25)] = 522,
  [SMALL_STATE(26)] = 553,
  [SMALL_STATE(27)] = 591,
  [SMALL_STATE(28)] = 629,
  [SMALL_STATE(29)] = 667,
  [SMALL_STATE(30)] = 705,
  [SMALL_STATE(31)] = 746,
  [SMALL_STATE(32)] = 768,
  [SMALL_STATE(33)] = 790,
  [SMALL_STATE(34)] = 812,
  [SMALL_STATE(35)] = 834,
  [SMALL_STATE(36)] = 856,
  [SMALL_STATE(37)] = 878,
  [SMALL_STATE(38)] = 916,
  [SMALL_STATE(39)] = 938,
  [SMALL_STATE(40)] = 955,
  [SMALL_STATE(41)] = 972,
  [SMALL_STATE(42)] = 989,
  [SMALL_STATE(43)] = 1006,
  [SMALL_STATE(44)] = 1023,
  [SMALL_STATE(45)] = 1039,
  [SMALL_STATE(46)] = 1055,
  [SMALL_STATE(47)] = 1068,
  [SMALL_STATE(48)] = 1081,
  [SMALL_STATE(49)] = 1090,
  [SMALL_STATE(50)] = 1103,
  [SMALL_STATE(51)] = 1116,
  [SMALL_STATE(52)] = 1129,
  [SMALL_STATE(53)] = 1142,
  [SMALL_STATE(54)] = 1155,
  [SMALL_STATE(55)] = 1166,
  [SMALL_STATE(56)] = 1179,
  [SMALL_STATE(57)] = 1192,
  [SMALL_STATE(58)] = 1201,
  [SMALL_STATE(59)] = 1214,
  [SMALL_STATE(60)] = 1227,
  [SMALL_STATE(61)] = 1240,
  [SMALL_STATE(62)] = 1253,
  [SMALL_STATE(63)] = 1263,
  [SMALL_STATE(64)] = 1273,
  [SMALL_STATE(65)] = 1281,
  [SMALL_STATE(66)] = 1289,
  [SMALL_STATE(67)] = 1299,
  [SMALL_STATE(68)] = 1307,
  [SMALL_STATE(69)] = 1317,
  [SMALL_STATE(70)] = 1327,
  [SMALL_STATE(71)] = 1334,
  [SMALL_STATE(72)] = 1341,
  [SMALL_STATE(73)] = 1348,
  [SMALL_STATE(74)] = 1355,
  [SMALL_STATE(75)] = 1362,
  [SMALL_STATE(76)] = 1369,
  [SMALL_STATE(77)] = 1376,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatstring, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formatstring, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOUBLEQUOTEDSTRING, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SINGLEQUOTEDSTRING, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_SINGLEQUOTEDSTRING, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SINGLEQUOTEDSTRING, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_SINGLEQUOTEDSTRING, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formatstring, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formatstring, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emit_statement, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emit_statement, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3, .production_id = 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 3, .production_id = 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 6),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 6),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 4),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcarg, 3, .production_id = 8),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_argument, 3, .production_id = 7),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_formatstring_repeat1, 2), SHIFT_REPEAT(73),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_formatstring_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_formatstring_repeat1, 2), SHIFT_REPEAT(43),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funcargs_repeat1, 2), SHIFT_REPEAT(60),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcargs_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(37),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_DOUBLEQUOTEDSTRING_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_DOUBLEQUOTEDSTRING_repeat1, 2), SHIFT_REPEAT(52),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_SINGLEQUOTEDSTRING_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_SINGLEQUOTEDSTRING_repeat1, 2), SHIFT_REPEAT(53),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcarg, 1, .production_id = 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [284] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
