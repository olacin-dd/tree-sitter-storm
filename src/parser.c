#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  sym_identifier = 2,
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
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 17,
  aux_sym__triple_quoted_string_token1 = 18,
  anon_sym_DQUOTE = 19,
  aux_sym__double_quoted_string_token1 = 20,
  anon_sym_SQUOTE = 21,
  sym_escape_sequence = 22,
  anon_sym_LBRACE = 23,
  anon_sym_RBRACE = 24,
  anon_sym_BQUOTE = 25,
  aux_sym__formatstring_token1 = 26,
  sym_comment = 27,
  anon_sym_init = 28,
  anon_sym_fini = 29,
  anon_sym_empty = 30,
  sym_spin_statement = 31,
  anon_sym_yield = 32,
  anon_sym_divert = 33,
  sym_source_file = 34,
  sym__statement = 35,
  sym__simple_statement = 36,
  sym__compound_statement = 37,
  sym_expression_statement = 38,
  sym__expression = 39,
  sym_variable_assignment = 40,
  sym_variable = 41,
  sym_selector_expression = 42,
  sym_keyword_argument = 43,
  sym_argument = 44,
  sym_arguments = 45,
  sym_function_call = 46,
  sym_literal = 47,
  sym_return_statement = 48,
  sym_emit_statement = 49,
  sym_break_statement = 50,
  sym_continue_statement = 51,
  sym_funcarg = 52,
  sym_funcargs = 53,
  sym_function_definition = 54,
  sym__triple_quoted_string = 55,
  sym__double_quoted_string = 56,
  sym__single_quoted_string = 57,
  sym_string = 58,
  sym_interpolation = 59,
  sym__formatstring = 60,
  sym_block = 61,
  sym_initblock = 62,
  sym_finiblock = 63,
  sym_emptyblock = 64,
  sym_yield_statement = 65,
  sym_divert_statement = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_arguments_repeat1 = 68,
  aux_sym_funcargs_repeat1 = 69,
  aux_sym__triple_quoted_string_repeat1 = 70,
  aux_sym__double_quoted_string_repeat1 = 71,
  aux_sym__formatstring_repeat1 = 72,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [sym_identifier] = "identifier",
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
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym__triple_quoted_string_token1] = "_triple_quoted_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quoted_string_token1] = "_double_quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BQUOTE] = "`",
  [aux_sym__formatstring_token1] = "_formatstring_token1",
  [sym_comment] = "comment",
  [anon_sym_init] = "init",
  [anon_sym_fini] = "fini",
  [anon_sym_empty] = "empty",
  [sym_spin_statement] = "spin_statement",
  [anon_sym_yield] = "yield",
  [anon_sym_divert] = "divert",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__simple_statement] = "_simple_statement",
  [sym__compound_statement] = "_compound_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__expression] = "_expression",
  [sym_variable_assignment] = "variable_assignment",
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
  [sym__triple_quoted_string] = "_triple_quoted_string",
  [sym__double_quoted_string] = "_double_quoted_string",
  [sym__single_quoted_string] = "_single_quoted_string",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [sym__formatstring] = "_formatstring",
  [sym_block] = "block",
  [sym_initblock] = "initblock",
  [sym_finiblock] = "finiblock",
  [sym_emptyblock] = "emptyblock",
  [sym_yield_statement] = "yield_statement",
  [sym_divert_statement] = "divert_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_funcargs_repeat1] = "funcargs_repeat1",
  [aux_sym__triple_quoted_string_repeat1] = "_triple_quoted_string_repeat1",
  [aux_sym__double_quoted_string_repeat1] = "_double_quoted_string_repeat1",
  [aux_sym__formatstring_repeat1] = "_formatstring_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_identifier] = sym_identifier,
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
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym__triple_quoted_string_token1] = aux_sym__triple_quoted_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quoted_string_token1] = aux_sym__double_quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym__formatstring_token1] = aux_sym__formatstring_token1,
  [sym_comment] = sym_comment,
  [anon_sym_init] = anon_sym_init,
  [anon_sym_fini] = anon_sym_fini,
  [anon_sym_empty] = anon_sym_empty,
  [sym_spin_statement] = sym_spin_statement,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_divert] = anon_sym_divert,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__simple_statement] = sym__simple_statement,
  [sym__compound_statement] = sym__compound_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression] = sym__expression,
  [sym_variable_assignment] = sym_variable_assignment,
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
  [sym__triple_quoted_string] = sym__triple_quoted_string,
  [sym__double_quoted_string] = sym__double_quoted_string,
  [sym__single_quoted_string] = sym__single_quoted_string,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [sym__formatstring] = sym__formatstring,
  [sym_block] = sym_block,
  [sym_initblock] = sym_initblock,
  [sym_finiblock] = sym_finiblock,
  [sym_emptyblock] = sym_emptyblock,
  [sym_yield_statement] = sym_yield_statement,
  [sym_divert_statement] = sym_divert_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_funcargs_repeat1] = aux_sym_funcargs_repeat1,
  [aux_sym__triple_quoted_string_repeat1] = aux_sym__triple_quoted_string_repeat1,
  [aux_sym__double_quoted_string_repeat1] = aux_sym__double_quoted_string_repeat1,
  [aux_sym__formatstring_repeat1] = aux_sym__formatstring_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__triple_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
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
  [aux_sym__formatstring_token1] = {
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
  [sym_spin_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_divert] = {
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
  [sym__triple_quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__double_quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__single_quoted_string] = {
    .visible = false,
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
  [sym__formatstring] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_initblock] = {
    .visible = true,
    .named = true,
  },
  [sym_finiblock] = {
    .visible = true,
    .named = true,
  },
  [sym_emptyblock] = {
    .visible = true,
    .named = true,
  },
  [sym_yield_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_divert_statement] = {
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
  [aux_sym__triple_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__formatstring_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_args = 1,
  field_arguments = 2,
  field_attribute = 3,
  field_cond = 4,
  field_default_value = 5,
  field_expression = 6,
  field_genr = 7,
  field_name = 8,
  field_object = 9,
  field_value = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_arguments] = "arguments",
  [field_attribute] = "attribute",
  [field_cond] = "cond",
  [field_default_value] = "default_value",
  [field_expression] = "expression",
  [field_genr] = "genr",
  [field_name] = "name",
  [field_object] = "object",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_args, 1},
    {field_name, 0},
  [3] =
    {field_cond, 1},
    {field_genr, 2},
  [5] =
    {field_attribute, 2},
    {field_object, 0},
  [7] =
    {field_value, 2},
  [8] =
    {field_name, 0},
  [9] =
    {field_arguments, 2},
    {field_name, 1},
  [11] =
    {field_expression, 1},
  [12] =
    {field_name, 0},
    {field_value, 2},
  [14] =
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
  [64] = 62,
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
  [90] = 90,
  [91] = 91,
  [92] = 92,
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < '\''
      ? (c < '"'
        ? c == '\n'
        : c <= '"')
      : (c <= '\'' || (c < 'a'
        ? c == '\\'
        : c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(81);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == ',') ADVANCE(89);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '`') ADVANCE(114);
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 'y') ADVANCE(24);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '}') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(79)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(111);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == ',') ADVANCE(89);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(97);
      if (lookahead == '`') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == ',') ADVANCE(89);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '`') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '`') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(108);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(100);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(109);
      if (lookahead == '/') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '/') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(119);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(116);
      if (lookahead == '`') ADVANCE(114);
      if (lookahead == '{') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'k') ADVANCE(95);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 60:
      if (lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 61:
      if (lookahead == 'y') ADVANCE(122);
      END_STATE();
    case 62:
      if (lookahead == '{') ADVANCE(77);
      END_STATE();
    case 63:
      if (lookahead == '}') ADVANCE(111);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 68:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(111);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(62);
      if (lookahead == 'U') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(63);
      END_STATE();
    case 78:
      if (eof) ADVANCE(81);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == ',') ADVANCE(89);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '`') ADVANCE(114);
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 'y') ADVANCE(24);
      if (lookahead == '}') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(80)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 79:
      if (eof) ADVANCE(81);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == ',') ADVANCE(89);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '`') ADVANCE(114);
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 'y') ADVANCE(24);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '}') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(79)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == ',') ADVANCE(89);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '`') ADVANCE(114);
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 'y') ADVANCE(24);
      if (lookahead == '}') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(80)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_emit);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_stop);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__triple_quoted_string_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__triple_quoted_string_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__triple_quoted_string_token1);
      if (lookahead == '/') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(101);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      if (lookahead == '/') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(105);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__double_quoted_string_token1);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(111);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'N') ADVANCE(62);
      if (lookahead == 'U') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(7);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__formatstring_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__formatstring_token1);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__formatstring_token1);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead == '{') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(115);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_init);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_fini);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_spin_statement);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_divert);
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
  [6] = {.lex_state = 78},
  [7] = {.lex_state = 0},
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
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 78},
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
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 78},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
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
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_init] = ACTIONS(1),
    [anon_sym_fini] = ACTIONS(1),
    [anon_sym_empty] = ACTIONS(1),
    [sym_spin_statement] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_divert] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(91),
    [sym__statement] = STATE(4),
    [sym__simple_statement] = STATE(4),
    [sym__compound_statement] = STATE(4),
    [sym_expression_statement] = STATE(4),
    [sym__expression] = STATE(24),
    [sym_variable_assignment] = STATE(4),
    [sym_variable] = STATE(25),
    [sym_selector_expression] = STATE(24),
    [sym_function_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_return_statement] = STATE(4),
    [sym_emit_statement] = STATE(4),
    [sym_break_statement] = STATE(4),
    [sym_continue_statement] = STATE(4),
    [sym_function_definition] = STATE(4),
    [sym__triple_quoted_string] = STATE(17),
    [sym__double_quoted_string] = STATE(17),
    [sym__single_quoted_string] = STATE(17),
    [sym_string] = STATE(19),
    [sym__formatstring] = STATE(17),
    [sym_initblock] = STATE(4),
    [sym_finiblock] = STATE(4),
    [sym_emptyblock] = STATE(4),
    [sym_yield_statement] = STATE(4),
    [sym_divert_statement] = STATE(4),
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
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_init] = ACTIONS(29),
    [anon_sym_fini] = ACTIONS(31),
    [anon_sym_empty] = ACTIONS(33),
    [sym_spin_statement] = ACTIONS(35),
    [anon_sym_yield] = ACTIONS(37),
    [anon_sym_divert] = ACTIONS(39),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__simple_statement] = STATE(2),
    [sym__compound_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__expression] = STATE(24),
    [sym_variable_assignment] = STATE(2),
    [sym_variable] = STATE(25),
    [sym_selector_expression] = STATE(24),
    [sym_function_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_return_statement] = STATE(2),
    [sym_emit_statement] = STATE(2),
    [sym_break_statement] = STATE(2),
    [sym_continue_statement] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym__triple_quoted_string] = STATE(17),
    [sym__double_quoted_string] = STATE(17),
    [sym__single_quoted_string] = STATE(17),
    [sym_string] = STATE(19),
    [sym__formatstring] = STATE(17),
    [sym_initblock] = STATE(2),
    [sym_finiblock] = STATE(2),
    [sym_emptyblock] = STATE(2),
    [sym_yield_statement] = STATE(2),
    [sym_divert_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_DOLLAR] = ACTIONS(43),
    [sym_integer] = ACTIONS(46),
    [sym_float] = ACTIONS(46),
    [anon_sym_return] = ACTIONS(49),
    [anon_sym_emit] = ACTIONS(52),
    [anon_sym_break] = ACTIONS(55),
    [anon_sym_continue] = ACTIONS(58),
    [anon_sym_function] = ACTIONS(61),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(64),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
    [anon_sym_init] = ACTIONS(76),
    [anon_sym_fini] = ACTIONS(79),
    [anon_sym_empty] = ACTIONS(82),
    [sym_spin_statement] = ACTIONS(85),
    [anon_sym_yield] = ACTIONS(88),
    [anon_sym_divert] = ACTIONS(91),
  },
  [3] = {
    [sym__statement] = STATE(5),
    [sym__simple_statement] = STATE(5),
    [sym__compound_statement] = STATE(5),
    [sym_expression_statement] = STATE(5),
    [sym__expression] = STATE(24),
    [sym_variable_assignment] = STATE(5),
    [sym_variable] = STATE(25),
    [sym_selector_expression] = STATE(24),
    [sym_function_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_return_statement] = STATE(5),
    [sym_emit_statement] = STATE(5),
    [sym_break_statement] = STATE(5),
    [sym_continue_statement] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym__triple_quoted_string] = STATE(17),
    [sym__double_quoted_string] = STATE(17),
    [sym__single_quoted_string] = STATE(17),
    [sym_string] = STATE(19),
    [sym__formatstring] = STATE(17),
    [sym_initblock] = STATE(5),
    [sym_finiblock] = STATE(5),
    [sym_emptyblock] = STATE(5),
    [sym_yield_statement] = STATE(5),
    [sym_divert_statement] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_emit] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_continue] = ACTIONS(17),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_init] = ACTIONS(29),
    [anon_sym_fini] = ACTIONS(31),
    [anon_sym_empty] = ACTIONS(33),
    [sym_spin_statement] = ACTIONS(96),
    [anon_sym_yield] = ACTIONS(37),
    [anon_sym_divert] = ACTIONS(39),
  },
  [4] = {
    [sym__statement] = STATE(2),
    [sym__simple_statement] = STATE(2),
    [sym__compound_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__expression] = STATE(24),
    [sym_variable_assignment] = STATE(2),
    [sym_variable] = STATE(25),
    [sym_selector_expression] = STATE(24),
    [sym_function_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_return_statement] = STATE(2),
    [sym_emit_statement] = STATE(2),
    [sym_break_statement] = STATE(2),
    [sym_continue_statement] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym__triple_quoted_string] = STATE(17),
    [sym__double_quoted_string] = STATE(17),
    [sym__single_quoted_string] = STATE(17),
    [sym_string] = STATE(19),
    [sym__formatstring] = STATE(17),
    [sym_initblock] = STATE(2),
    [sym_finiblock] = STATE(2),
    [sym_emptyblock] = STATE(2),
    [sym_yield_statement] = STATE(2),
    [sym_divert_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_emit] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_continue] = ACTIONS(17),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_init] = ACTIONS(29),
    [anon_sym_fini] = ACTIONS(31),
    [anon_sym_empty] = ACTIONS(33),
    [sym_spin_statement] = ACTIONS(100),
    [anon_sym_yield] = ACTIONS(37),
    [anon_sym_divert] = ACTIONS(39),
  },
  [5] = {
    [sym__statement] = STATE(2),
    [sym__simple_statement] = STATE(2),
    [sym__compound_statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__expression] = STATE(24),
    [sym_variable_assignment] = STATE(2),
    [sym_variable] = STATE(25),
    [sym_selector_expression] = STATE(24),
    [sym_function_call] = STATE(24),
    [sym_literal] = STATE(24),
    [sym_return_statement] = STATE(2),
    [sym_emit_statement] = STATE(2),
    [sym_break_statement] = STATE(2),
    [sym_continue_statement] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym__triple_quoted_string] = STATE(17),
    [sym__double_quoted_string] = STATE(17),
    [sym__single_quoted_string] = STATE(17),
    [sym_string] = STATE(19),
    [sym__formatstring] = STATE(17),
    [sym_initblock] = STATE(2),
    [sym_finiblock] = STATE(2),
    [sym_emptyblock] = STATE(2),
    [sym_yield_statement] = STATE(2),
    [sym_divert_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_DOLLAR] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_emit] = ACTIONS(13),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_continue] = ACTIONS(17),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_init] = ACTIONS(29),
    [anon_sym_fini] = ACTIONS(31),
    [anon_sym_empty] = ACTIONS(33),
    [sym_spin_statement] = ACTIONS(100),
    [anon_sym_yield] = ACTIONS(37),
    [anon_sym_divert] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(104), 22,
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
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [33] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(108), 21,
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
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [65] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(112), 21,
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
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [97] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(116), 21,
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
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(120), 21,
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
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(124), 21,
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
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(128), 21,
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
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(132), 21,
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
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(136), 21,
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
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(140), 21,
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
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(144), 21,
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
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(148), 21,
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
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(152), 21,
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
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(156), 21,
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
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(160), 21,
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
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(164), 21,
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
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [513] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_arguments,
    ACTIONS(174), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(168), 17,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [550] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_arguments,
    ACTIONS(178), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(176), 17,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [587] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_arguments,
    ACTIONS(182), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(180), 17,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(188), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(184), 19,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [657] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_arguments,
    ACTIONS(192), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(190), 17,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [694] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_arguments,
    ACTIONS(196), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(194), 17,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(198), 17,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [759] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_arguments,
    STATE(19), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(17), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(22), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(202), 17,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(206), 17,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(210), 17,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(214), 17,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(218), 17,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(222), 17,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(226), 17,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [1003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(230), 17,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [1031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 3,
      sym_integer,
      sym_float,
      anon_sym_SQUOTE,
    ACTIONS(234), 17,
      ts_builtin_sym_end,
      anon_sym_DOLLAR,
      anon_sym_return,
      anon_sym_emit,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_function,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      anon_sym_init,
      anon_sym_fini,
      anon_sym_empty,
      sym_spin_statement,
      anon_sym_yield,
      anon_sym_divert,
  [1059] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(17), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(56), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1101] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(240), 1,
      sym_identifier,
    STATE(19), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(17), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(58), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1143] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    STATE(19), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(17), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(26), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1182] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    STATE(19), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(17), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(23), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1221] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    STATE(19), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(17), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(27), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1260] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    STATE(19), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(17), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(50), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1299] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    STATE(19), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(17), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(29), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1338] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    STATE(19), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_integer,
      sym_float,
    STATE(17), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
    STATE(51), 5,
      sym__expression,
      sym_variable,
      sym_selector_expression,
      sym_function_call,
      sym_literal,
  [1377] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(242), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym_argument,
    STATE(81), 3,
      sym_variable,
      sym_keyword_argument,
      sym_string,
    STATE(17), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
  [1416] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(79), 1,
      sym_argument,
    STATE(81), 3,
      sym_variable,
      sym_keyword_argument,
      sym_string,
    STATE(17), 4,
      sym__triple_quoted_string,
      sym__double_quoted_string,
      sym__single_quoted_string,
      sym__formatstring,
  [1452] = 5,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(249), 1,
      anon_sym_BQUOTE,
    ACTIONS(251), 1,
      aux_sym__formatstring_token1,
    ACTIONS(254), 1,
      sym_comment,
    STATE(49), 2,
      sym_interpolation,
      aux_sym__formatstring_repeat1,
  [1469] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_arguments,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1486] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_arguments,
    ACTIONS(258), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1503] = 5,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      anon_sym_BQUOTE,
    ACTIONS(264), 1,
      aux_sym__formatstring_token1,
    STATE(53), 2,
      sym_interpolation,
      aux_sym__formatstring_repeat1,
  [1520] = 5,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      anon_sym_BQUOTE,
    ACTIONS(268), 1,
      aux_sym__formatstring_token1,
    STATE(49), 2,
      sym_interpolation,
      aux_sym__formatstring_repeat1,
  [1537] = 5,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(275), 1,
      sym_escape_sequence,
    STATE(54), 1,
      aux_sym__double_quoted_string_repeat1,
  [1553] = 5,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(282), 1,
      sym_escape_sequence,
    STATE(54), 1,
      aux_sym__double_quoted_string_repeat1,
  [1569] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_arguments,
  [1585] = 5,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      aux_sym__double_quoted_string_token1,
    ACTIONS(290), 1,
      sym_escape_sequence,
    STATE(55), 1,
      aux_sym__double_quoted_string_repeat1,
  [1601] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_arguments,
  [1617] = 2,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(294), 3,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      aux_sym__formatstring_token1,
  [1626] = 4,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym__triple_quoted_string_token1,
    ACTIONS(298), 1,
      anon_sym_SQUOTE,
    STATE(68), 1,
      aux_sym__triple_quoted_string_repeat1,
  [1639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_funcargs_repeat1,
  [1652] = 4,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym__triple_quoted_string_token1,
    ACTIONS(307), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      aux_sym__triple_quoted_string_repeat1,
  [1665] = 4,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(311), 1,
      aux_sym__triple_quoted_string_token1,
    STATE(73), 1,
      aux_sym__triple_quoted_string_repeat1,
  [1678] = 4,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(313), 1,
      aux_sym__triple_quoted_string_token1,
    STATE(64), 1,
      aux_sym__triple_quoted_string_repeat1,
  [1691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_funcargs_repeat1,
  [1704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym_funcarg,
  [1717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_arguments_repeat1,
  [1730] = 4,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(329), 1,
      aux_sym__triple_quoted_string_token1,
    ACTIONS(331), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      aux_sym__triple_quoted_string_repeat1,
  [1743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_arguments_repeat1,
  [1756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_EQ2,
    ACTIONS(335), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_arguments_repeat1,
  [1780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      aux_sym_funcargs_repeat1,
  [1793] = 4,
    ACTIONS(254), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(348), 1,
      aux_sym__triple_quoted_string_token1,
    STATE(64), 1,
      aux_sym__triple_quoted_string_repeat1,
  [1806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_block,
  [1816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_funcargs,
  [1826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_block,
  [1836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
  [1846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_identifier,
    STATE(78), 1,
      sym_funcarg,
  [1872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_block,
  [1890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym_identifier,
  [1897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
  [1904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
  [1911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
  [1918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_identifier,
  [1925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACE,
  [1932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_EQ,
  [1939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
  [1946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
  [1953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 33,
  [SMALL_STATE(8)] = 65,
  [SMALL_STATE(9)] = 97,
  [SMALL_STATE(10)] = 129,
  [SMALL_STATE(11)] = 161,
  [SMALL_STATE(12)] = 193,
  [SMALL_STATE(13)] = 225,
  [SMALL_STATE(14)] = 257,
  [SMALL_STATE(15)] = 289,
  [SMALL_STATE(16)] = 321,
  [SMALL_STATE(17)] = 353,
  [SMALL_STATE(18)] = 385,
  [SMALL_STATE(19)] = 417,
  [SMALL_STATE(20)] = 449,
  [SMALL_STATE(21)] = 481,
  [SMALL_STATE(22)] = 513,
  [SMALL_STATE(23)] = 550,
  [SMALL_STATE(24)] = 587,
  [SMALL_STATE(25)] = 624,
  [SMALL_STATE(26)] = 657,
  [SMALL_STATE(27)] = 694,
  [SMALL_STATE(28)] = 731,
  [SMALL_STATE(29)] = 759,
  [SMALL_STATE(30)] = 807,
  [SMALL_STATE(31)] = 835,
  [SMALL_STATE(32)] = 863,
  [SMALL_STATE(33)] = 891,
  [SMALL_STATE(34)] = 919,
  [SMALL_STATE(35)] = 947,
  [SMALL_STATE(36)] = 975,
  [SMALL_STATE(37)] = 1003,
  [SMALL_STATE(38)] = 1031,
  [SMALL_STATE(39)] = 1059,
  [SMALL_STATE(40)] = 1101,
  [SMALL_STATE(41)] = 1143,
  [SMALL_STATE(42)] = 1182,
  [SMALL_STATE(43)] = 1221,
  [SMALL_STATE(44)] = 1260,
  [SMALL_STATE(45)] = 1299,
  [SMALL_STATE(46)] = 1338,
  [SMALL_STATE(47)] = 1377,
  [SMALL_STATE(48)] = 1416,
  [SMALL_STATE(49)] = 1452,
  [SMALL_STATE(50)] = 1469,
  [SMALL_STATE(51)] = 1486,
  [SMALL_STATE(52)] = 1503,
  [SMALL_STATE(53)] = 1520,
  [SMALL_STATE(54)] = 1537,
  [SMALL_STATE(55)] = 1553,
  [SMALL_STATE(56)] = 1569,
  [SMALL_STATE(57)] = 1585,
  [SMALL_STATE(58)] = 1601,
  [SMALL_STATE(59)] = 1617,
  [SMALL_STATE(60)] = 1626,
  [SMALL_STATE(61)] = 1639,
  [SMALL_STATE(62)] = 1652,
  [SMALL_STATE(63)] = 1665,
  [SMALL_STATE(64)] = 1678,
  [SMALL_STATE(65)] = 1691,
  [SMALL_STATE(66)] = 1704,
  [SMALL_STATE(67)] = 1717,
  [SMALL_STATE(68)] = 1730,
  [SMALL_STATE(69)] = 1743,
  [SMALL_STATE(70)] = 1756,
  [SMALL_STATE(71)] = 1767,
  [SMALL_STATE(72)] = 1780,
  [SMALL_STATE(73)] = 1793,
  [SMALL_STATE(74)] = 1806,
  [SMALL_STATE(75)] = 1816,
  [SMALL_STATE(76)] = 1826,
  [SMALL_STATE(77)] = 1836,
  [SMALL_STATE(78)] = 1846,
  [SMALL_STATE(79)] = 1854,
  [SMALL_STATE(80)] = 1862,
  [SMALL_STATE(81)] = 1872,
  [SMALL_STATE(82)] = 1880,
  [SMALL_STATE(83)] = 1890,
  [SMALL_STATE(84)] = 1897,
  [SMALL_STATE(85)] = 1904,
  [SMALL_STATE(86)] = 1911,
  [SMALL_STATE(87)] = 1918,
  [SMALL_STATE(88)] = 1925,
  [SMALL_STATE(89)] = 1932,
  [SMALL_STATE(90)] = 1939,
  [SMALL_STATE(91)] = 1946,
  [SMALL_STATE(92)] = 1953,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 4),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__formatstring, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__formatstring, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quoted_string, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quoted_string, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quoted_string, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quoted_string, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quoted_string, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quoted_string, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quoted_string, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__formatstring, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__formatstring, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quoted_string, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quoted_string, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quoted_string, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quoted_string, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_divert_statement, 3, .production_id = 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_divert_statement, 3, .production_id = 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 3, .production_id = 5),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 3, .production_id = 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emit_statement, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emit_statement, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_statement, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yield_statement, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 7),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 7),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 4),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initblock, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_initblock, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finiblock, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finiblock, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emptyblock, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emptyblock, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__formatstring_repeat1, 2), SHIFT_REPEAT(40),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__formatstring_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__formatstring_repeat1, 2), SHIFT_REPEAT(49),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcarg, 3, .production_id = 10),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_argument, 3, .production_id = 9),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(54),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quoted_string_repeat1, 2), SHIFT_REPEAT(54),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, .production_id = 8),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__triple_quoted_string_repeat1, 2), SHIFT_REPEAT(62),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__triple_quoted_string_repeat1, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__triple_quoted_string_repeat1, 2), SHIFT_REPEAT(64),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_funcargs_repeat1, 2), SHIFT_REPEAT(80),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_funcargs_repeat1, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcarg, 1, .production_id = 6),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(48),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcargs, 4),
  [372] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_storm() {
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
