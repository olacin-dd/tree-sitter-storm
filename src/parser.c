#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_DQUOTE = 1,
  aux_sym_double_quoted_string_token1 = 2,
  anon_sym_SQUOTE = 3,
  aux_sym_single_quoted_string_token1 = 4,
  aux_sym_identifier_token1 = 5,
  sym_dot = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_DOLLAR = 9,
  anon_sym_EQ = 10,
  anon_sym_LPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_RPAREN = 13,
  anon_sym_function = 14,
  sym_comment = 15,
  sym_try_set = 16,
  sym_program = 17,
  sym__statements = 18,
  sym_double_quoted_string = 19,
  sym_single_quoted_string = 20,
  sym_string = 21,
  sym_identifier = 22,
  sym__expression_statement = 23,
  sym__expression = 24,
  sym_block = 25,
  sym_assignment = 26,
  sym_deref = 27,
  sym_function_call = 28,
  sym__call_args = 29,
  sym__parameters = 30,
  sym_parameters = 31,
  sym_function_declaration = 32,
  aux_sym_program_repeat1 = 33,
  aux_sym_double_quoted_string_repeat1 = 34,
  aux_sym_single_quoted_string_repeat1 = 35,
  aux_sym__call_args_repeat1 = 36,
  aux_sym__parameters_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_dot] = "dot",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_function] = "function",
  [sym_comment] = "comment",
  [sym_try_set] = "try_set",
  [sym_program] = "program",
  [sym__statements] = "_statements",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_string] = "string",
  [sym_identifier] = "identifier",
  [sym__expression_statement] = "_expression_statement",
  [sym__expression] = "_expression",
  [sym_block] = "block",
  [sym_assignment] = "assignment",
  [sym_deref] = "deref",
  [sym_function_call] = "function_call",
  [sym__call_args] = "_call_args",
  [sym__parameters] = "_parameters",
  [sym_parameters] = "parameters",
  [sym_function_declaration] = "function_declaration",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym__call_args_repeat1] = "_call_args_repeat1",
  [aux_sym__parameters_repeat1] = "_parameters_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_dot] = sym_dot,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_function] = anon_sym_function,
  [sym_comment] = sym_comment,
  [sym_try_set] = sym_try_set,
  [sym_program] = sym_program,
  [sym__statements] = sym__statements,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_string] = sym_string,
  [sym_identifier] = sym_identifier,
  [sym__expression_statement] = sym__expression_statement,
  [sym__expression] = sym__expression,
  [sym_block] = sym_block,
  [sym_assignment] = sym_assignment,
  [sym_deref] = sym_deref,
  [sym_function_call] = sym_function_call,
  [sym__call_args] = sym__call_args,
  [sym__parameters] = sym__parameters,
  [sym_parameters] = sym_parameters,
  [sym_function_declaration] = sym_function_declaration,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym__call_args_repeat1] = aux_sym__call_args_repeat1,
  [aux_sym__parameters_repeat1] = aux_sym__parameters_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dot] = {
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
  [anon_sym_DOLLAR] = {
    .visible = true,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_try_set] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_deref] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym__call_args] = {
    .visible = false,
    .named = true,
  },
  [sym__parameters] = {
    .visible = false,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__call_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arguments = 1,
  field_body = 2,
  field_function = 3,
  field_left = 4,
  field_name = 5,
  field_parameters = 6,
  field_right = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_function] = "function",
  [field_left] = "left",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_arguments, 1},
    {field_function, 0},
  [3] =
    {field_left, 1},
    {field_right, 3},
  [5] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '?') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '/') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '/') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '/') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '/') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(10);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '/') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_try_set);
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
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_try_set] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(50),
    [sym__statements] = STATE(5),
    [sym_double_quoted_string] = STATE(11),
    [sym_single_quoted_string] = STATE(11),
    [sym_string] = STATE(10),
    [sym_identifier] = STATE(5),
    [sym__expression_statement] = STATE(5),
    [sym__expression] = STATE(5),
    [sym_assignment] = STATE(5),
    [sym_deref] = STATE(43),
    [sym_function_call] = STATE(5),
    [sym_function_declaration] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_function] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__statements] = STATE(2),
    [sym_double_quoted_string] = STATE(11),
    [sym_single_quoted_string] = STATE(11),
    [sym_string] = STATE(10),
    [sym_identifier] = STATE(2),
    [sym__expression_statement] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym_deref] = STATE(43),
    [sym_function_call] = STATE(2),
    [sym_function_declaration] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(22),
    [aux_sym_identifier_token1] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(17),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [anon_sym_function] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_string,
    STATE(43), 1,
      sym_deref,
    STATE(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(2), 8,
      sym__statements,
      sym_identifier,
      sym__expression_statement,
      sym__expression,
      sym_assignment,
      sym_function_call,
      sym_function_declaration,
      aux_sym_program_repeat1,
  [42] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_string,
    STATE(43), 1,
      sym_deref,
    STATE(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(3), 8,
      sym__statements,
      sym_identifier,
      sym__expression_statement,
      sym__expression,
      sym_assignment,
      sym_function_call,
      sym_function_declaration,
      aux_sym_program_repeat1,
  [84] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_string,
    STATE(43), 1,
      sym_deref,
    STATE(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(2), 8,
      sym__statements,
      sym_identifier,
      sym__expression_statement,
      sym__expression,
      sym_assignment,
      sym_function_call,
      sym_function_declaration,
      aux_sym_program_repeat1,
  [126] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(40), 1,
      anon_sym_DOLLAR,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_string,
    STATE(43), 1,
      sym_deref,
    STATE(47), 1,
      sym__parameters,
    STATE(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(29), 4,
      sym_identifier,
      sym__expression,
      sym_function_call,
      sym_function_declaration,
  [167] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(40), 1,
      anon_sym_DOLLAR,
    STATE(10), 1,
      sym_string,
    STATE(43), 1,
      sym_deref,
    STATE(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(40), 4,
      sym_identifier,
      sym__expression,
      sym_function_call,
      sym_function_declaration,
  [202] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(40), 1,
      anon_sym_DOLLAR,
    STATE(10), 1,
      sym_string,
    STATE(43), 1,
      sym_deref,
    STATE(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(22), 4,
      sym_identifier,
      sym__expression,
      sym_function_call,
      sym_function_declaration,
  [237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 2,
      aux_sym_identifier_token1,
      anon_sym_function,
    ACTIONS(44), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 2,
      aux_sym_identifier_token1,
      anon_sym_function,
    ACTIONS(48), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 2,
      aux_sym_identifier_token1,
      anon_sym_function,
    ACTIONS(52), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 2,
      aux_sym_identifier_token1,
      anon_sym_function,
    ACTIONS(56), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 2,
      aux_sym_identifier_token1,
      anon_sym_function,
    ACTIONS(60), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 2,
      aux_sym_identifier_token1,
      anon_sym_function,
    ACTIONS(64), 9,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 2,
      aux_sym_identifier_token1,
      anon_sym_function,
    ACTIONS(68), 7,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 2,
      aux_sym_identifier_token1,
      anon_sym_function,
    ACTIONS(72), 7,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 2,
      aux_sym_identifier_token1,
      anon_sym_function,
    ACTIONS(76), 7,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 2,
      aux_sym_identifier_token1,
      anon_sym_function,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 2,
      aux_sym_identifier_token1,
      anon_sym_function,
    ACTIONS(84), 7,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      aux_sym_identifier_token1,
      anon_sym_function,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 2,
      aux_sym_identifier_token1,
      anon_sym_function,
    ACTIONS(92), 7,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      aux_sym_identifier_token1,
      anon_sym_function,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
  [485] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      aux_sym_identifier_token1,
    STATE(10), 1,
      sym_string,
    STATE(42), 1,
      sym_identifier,
    STATE(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [508] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      aux_sym_identifier_token1,
    STATE(10), 1,
      sym_string,
    STATE(32), 1,
      sym_identifier,
    STATE(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [531] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      aux_sym_identifier_token1,
    STATE(10), 1,
      sym_string,
    STATE(46), 1,
      sym_identifier,
    STATE(11), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [554] = 4,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      aux_sym_single_quoted_string_token1,
    ACTIONS(107), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_single_quoted_string_repeat1,
  [567] = 4,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      aux_sym_double_quoted_string_token1,
    STATE(33), 1,
      aux_sym_double_quoted_string_repeat1,
  [580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym__call_args_repeat1,
  [593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym__parameters_repeat1,
  [606] = 4,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      aux_sym_single_quoted_string_token1,
    STATE(26), 1,
      aux_sym_single_quoted_string_repeat1,
  [619] = 4,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      aux_sym_double_quoted_string_token1,
    STATE(31), 1,
      aux_sym_double_quoted_string_repeat1,
  [632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 3,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [641] = 4,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      aux_sym_double_quoted_string_token1,
    STATE(31), 1,
      aux_sym_double_quoted_string_repeat1,
  [654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym__call_args_repeat1,
  [667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym__parameters_repeat1,
  [680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym__parameters_repeat1,
  [693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_DOLLAR,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_deref,
  [706] = 4,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      aux_sym_single_quoted_string_token1,
    STATE(30), 1,
      aux_sym_single_quoted_string_repeat1,
  [719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym__call_args_repeat1,
  [732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
  [750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_EQ,
  [760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym__call_args,
  [770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_DOLLAR,
    STATE(45), 1,
      sym_deref,
  [780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_parameters,
  [798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
  [805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
  [812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
  [819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 126,
  [SMALL_STATE(7)] = 167,
  [SMALL_STATE(8)] = 202,
  [SMALL_STATE(9)] = 237,
  [SMALL_STATE(10)] = 256,
  [SMALL_STATE(11)] = 275,
  [SMALL_STATE(12)] = 294,
  [SMALL_STATE(13)] = 313,
  [SMALL_STATE(14)] = 332,
  [SMALL_STATE(15)] = 351,
  [SMALL_STATE(16)] = 368,
  [SMALL_STATE(17)] = 385,
  [SMALL_STATE(18)] = 402,
  [SMALL_STATE(19)] = 419,
  [SMALL_STATE(20)] = 436,
  [SMALL_STATE(21)] = 453,
  [SMALL_STATE(22)] = 470,
  [SMALL_STATE(23)] = 485,
  [SMALL_STATE(24)] = 508,
  [SMALL_STATE(25)] = 531,
  [SMALL_STATE(26)] = 554,
  [SMALL_STATE(27)] = 567,
  [SMALL_STATE(28)] = 580,
  [SMALL_STATE(29)] = 593,
  [SMALL_STATE(30)] = 606,
  [SMALL_STATE(31)] = 619,
  [SMALL_STATE(32)] = 632,
  [SMALL_STATE(33)] = 641,
  [SMALL_STATE(34)] = 654,
  [SMALL_STATE(35)] = 667,
  [SMALL_STATE(36)] = 680,
  [SMALL_STATE(37)] = 693,
  [SMALL_STATE(38)] = 706,
  [SMALL_STATE(39)] = 719,
  [SMALL_STATE(40)] = 732,
  [SMALL_STATE(41)] = 740,
  [SMALL_STATE(42)] = 750,
  [SMALL_STATE(43)] = 760,
  [SMALL_STATE(44)] = 770,
  [SMALL_STATE(45)] = 780,
  [SMALL_STATE(46)] = 788,
  [SMALL_STATE(47)] = 798,
  [SMALL_STATE(48)] = 805,
  [SMALL_STATE(49)] = 812,
  [SMALL_STATE(50)] = 819,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_args, 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_args, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_args, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_args, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 4),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_args, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_args, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, .production_id = 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2), SHIFT_REPEAT(26),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2), SHIFT_REPEAT(31),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deref, 2, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2), SHIFT_REPEAT(7),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameters_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2), SHIFT_REPEAT(44),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__call_args_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
