#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_let = 1,
  anon_sym_EQ = 2,
  anon_sym_SEMI = 3,
  anon_sym_STAR = 4,
  anon_sym_PLUS = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_fn = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_COMMA = 11,
  anon_sym_return = 12,
  anon_sym_DASH = 13,
  anon_sym_BANG = 14,
  sym_number = 15,
  sym_boolean = 16,
  sym_identifier = 17,
  sym_source_file = 18,
  sym__statement = 19,
  sym_let_statement = 20,
  sym__expression_statement = 21,
  sym__expression = 22,
  sym_binary_expression = 23,
  sym__grouped_expression = 24,
  sym_function = 25,
  sym_parameters = 26,
  aux_sym__parameter_list = 27,
  aux_sym__statement_list = 28,
  sym_block = 29,
  sym__parameter = 30,
  sym_return_statement = 31,
  sym_function_call = 32,
  sym_arguments = 33,
  aux_sym__argument_list = 34,
  sym__argument = 35,
  sym_unary_expression = 36,
  aux_sym_source_file_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_fn] = "fn",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_return] = "return",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_let_statement] = "let_statement",
  [sym__expression_statement] = "_expression_statement",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__grouped_expression] = "_grouped_expression",
  [sym_function] = "function",
  [sym_parameters] = "parameters",
  [aux_sym__parameter_list] = "_parameter_list",
  [aux_sym__statement_list] = "_statement_list",
  [sym_block] = "block",
  [sym__parameter] = "_parameter",
  [sym_return_statement] = "return_statement",
  [sym_function_call] = "function_call",
  [sym_arguments] = "arguments",
  [aux_sym__argument_list] = "_argument_list",
  [sym__argument] = "_argument",
  [sym_unary_expression] = "unary_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_let_statement] = sym_let_statement,
  [sym__expression_statement] = sym__expression_statement,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym__grouped_expression] = sym__grouped_expression,
  [sym_function] = sym_function,
  [sym_parameters] = sym_parameters,
  [aux_sym__parameter_list] = aux_sym__parameter_list,
  [aux_sym__statement_list] = aux_sym__statement_list,
  [sym_block] = sym_block,
  [sym__parameter] = sym__parameter,
  [sym_return_statement] = sym_return_statement,
  [sym_function_call] = sym_function_call,
  [sym_arguments] = sym_arguments,
  [aux_sym__argument_list] = aux_sym__argument_list,
  [sym__argument] = sym__argument,
  [sym_unary_expression] = sym_unary_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [anon_sym_fn] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_let_statement] = {
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
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__grouped_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__parameter_list] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_list] = {
    .visible = false,
    .named = false,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__argument_list] = {
    .visible = false,
    .named = false,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [16] = 11,
  [17] = 17,
  [18] = 18,
  [19] = 10,
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
  [32] = 30,
  [33] = 31,
  [34] = 29,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 38,
  [39] = 38,
  [40] = 40,
  [41] = 41,
  [42] = 40,
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
  [55] = 50,
  [56] = 53,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(10);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '}') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(10);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 't') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(10);
      if (lookahead == ',') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_return);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_boolean);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
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
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym__statement] = STATE(6),
    [sym_let_statement] = STATE(6),
    [sym__expression_statement] = STATE(6),
    [sym__expression] = STATE(37),
    [sym_binary_expression] = STATE(37),
    [sym__grouped_expression] = STATE(37),
    [sym_function] = STATE(37),
    [sym_return_statement] = STATE(6),
    [sym_function_call] = STATE(37),
    [sym_unary_expression] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_fn] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_boolean] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
  },
  [2] = {
    [sym__statement] = STATE(4),
    [sym_let_statement] = STATE(4),
    [sym__expression_statement] = STATE(4),
    [sym__expression] = STATE(36),
    [sym_binary_expression] = STATE(36),
    [sym__grouped_expression] = STATE(36),
    [sym_function] = STATE(36),
    [aux_sym__statement_list] = STATE(4),
    [sym_return_statement] = STATE(4),
    [sym_function_call] = STATE(36),
    [sym_unary_expression] = STATE(36),
    [anon_sym_let] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_fn] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(13),
    [sym_number] = ACTIONS(25),
    [sym_boolean] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_let_statement] = STATE(3),
    [sym__expression_statement] = STATE(3),
    [sym__expression] = STATE(37),
    [sym_binary_expression] = STATE(37),
    [sym__grouped_expression] = STATE(37),
    [sym_function] = STATE(37),
    [sym_return_statement] = STATE(3),
    [sym_function_call] = STATE(37),
    [sym_unary_expression] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(34),
    [anon_sym_fn] = ACTIONS(37),
    [anon_sym_return] = ACTIONS(40),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_BANG] = ACTIONS(43),
    [sym_number] = ACTIONS(46),
    [sym_boolean] = ACTIONS(49),
    [sym_identifier] = ACTIONS(49),
  },
  [4] = {
    [sym__statement] = STATE(5),
    [sym_let_statement] = STATE(5),
    [sym__expression_statement] = STATE(5),
    [sym__expression] = STATE(36),
    [sym_binary_expression] = STATE(36),
    [sym__grouped_expression] = STATE(36),
    [sym_function] = STATE(36),
    [aux_sym__statement_list] = STATE(5),
    [sym_return_statement] = STATE(5),
    [sym_function_call] = STATE(36),
    [sym_unary_expression] = STATE(36),
    [anon_sym_let] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_fn] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(52),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(13),
    [sym_number] = ACTIONS(25),
    [sym_boolean] = ACTIONS(27),
    [sym_identifier] = ACTIONS(27),
  },
  [5] = {
    [sym__statement] = STATE(5),
    [sym_let_statement] = STATE(5),
    [sym__expression_statement] = STATE(5),
    [sym__expression] = STATE(36),
    [sym_binary_expression] = STATE(36),
    [sym__grouped_expression] = STATE(36),
    [sym_function] = STATE(36),
    [aux_sym__statement_list] = STATE(5),
    [sym_return_statement] = STATE(5),
    [sym_function_call] = STATE(36),
    [sym_unary_expression] = STATE(36),
    [anon_sym_let] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_fn] = ACTIONS(60),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_return] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(68),
    [sym_number] = ACTIONS(71),
    [sym_boolean] = ACTIONS(74),
    [sym_identifier] = ACTIONS(74),
  },
  [6] = {
    [sym__statement] = STATE(3),
    [sym_let_statement] = STATE(3),
    [sym__expression_statement] = STATE(3),
    [sym__expression] = STATE(37),
    [sym_binary_expression] = STATE(37),
    [sym__grouped_expression] = STATE(37),
    [sym_function] = STATE(37),
    [sym_return_statement] = STATE(3),
    [sym_function_call] = STATE(37),
    [sym_unary_expression] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_fn] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_boolean] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(83), 2,
      sym_boolean,
      sym_identifier,
    STATE(8), 2,
      aux_sym__argument_list,
      sym__argument,
    STATE(28), 6,
      sym__expression,
      sym_binary_expression,
      sym__grouped_expression,
      sym_function,
      sym_function_call,
      sym_unary_expression,
  [33] = 8,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(83), 2,
      sym_boolean,
      sym_identifier,
    STATE(9), 2,
      aux_sym__argument_list,
      sym__argument,
    STATE(28), 6,
      sym__expression,
      sym_binary_expression,
      sym__grouped_expression,
      sym_function,
      sym_function_call,
      sym_unary_expression,
  [66] = 8,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 1,
      anon_sym_fn,
    ACTIONS(98), 1,
      sym_number,
    ACTIONS(95), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(101), 2,
      sym_boolean,
      sym_identifier,
    STATE(9), 2,
      aux_sym__argument_list,
      sym__argument,
    STATE(28), 6,
      sym__expression,
      sym_binary_expression,
      sym__grouped_expression,
      sym_function,
      sym_function_call,
      sym_unary_expression,
  [99] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(104), 1,
      sym_number,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(106), 2,
      sym_boolean,
      sym_identifier,
    STATE(40), 6,
      sym__expression,
      sym_binary_expression,
      sym__grouped_expression,
      sym_function,
      sym_function_call,
      sym_unary_expression,
  [125] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(108), 1,
      sym_number,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(110), 2,
      sym_boolean,
      sym_identifier,
    STATE(39), 6,
      sym__expression,
      sym_binary_expression,
      sym__grouped_expression,
      sym_function,
      sym_function_call,
      sym_unary_expression,
  [151] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(114), 2,
      sym_boolean,
      sym_identifier,
    STATE(15), 6,
      sym__expression,
      sym_binary_expression,
      sym__grouped_expression,
      sym_function,
      sym_function_call,
      sym_unary_expression,
  [177] = 5,
    ACTIONS(118), 1,
      anon_sym_STAR,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_arguments,
    ACTIONS(122), 3,
      anon_sym_fn,
      sym_boolean,
      sym_identifier,
    ACTIONS(116), 7,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
  [201] = 4,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_arguments,
    ACTIONS(122), 3,
      anon_sym_fn,
      sym_boolean,
      sym_identifier,
    ACTIONS(116), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
  [223] = 4,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_arguments,
    ACTIONS(126), 3,
      anon_sym_fn,
      sym_boolean,
      sym_identifier,
    ACTIONS(124), 8,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
  [245] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(128), 1,
      sym_number,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(130), 2,
      sym_boolean,
      sym_identifier,
    STATE(38), 6,
      sym__expression,
      sym_binary_expression,
      sym__grouped_expression,
      sym_function,
      sym_function_call,
      sym_unary_expression,
  [271] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(132), 1,
      sym_number,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(134), 2,
      sym_boolean,
      sym_identifier,
    STATE(14), 6,
      sym__expression,
      sym_binary_expression,
      sym__grouped_expression,
      sym_function,
      sym_function_call,
      sym_unary_expression,
  [297] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(136), 1,
      sym_number,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(138), 2,
      sym_boolean,
      sym_identifier,
    STATE(13), 6,
      sym__expression,
      sym_binary_expression,
      sym__grouped_expression,
      sym_function,
      sym_function_call,
      sym_unary_expression,
  [323] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(140), 1,
      sym_number,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(142), 2,
      sym_boolean,
      sym_identifier,
    STATE(42), 6,
      sym__expression,
      sym_binary_expression,
      sym__grouped_expression,
      sym_function,
      sym_function_call,
      sym_unary_expression,
  [349] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(144), 1,
      sym_number,
    ACTIONS(13), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(146), 2,
      sym_boolean,
      sym_identifier,
    STATE(41), 6,
      sym__expression,
      sym_binary_expression,
      sym__grouped_expression,
      sym_function,
      sym_function_call,
      sym_unary_expression,
  [375] = 2,
    ACTIONS(150), 3,
      anon_sym_fn,
      sym_boolean,
      sym_identifier,
    ACTIONS(148), 9,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
  [392] = 2,
    ACTIONS(154), 3,
      anon_sym_fn,
      sym_boolean,
      sym_identifier,
    ACTIONS(152), 9,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
  [409] = 2,
    ACTIONS(158), 3,
      anon_sym_fn,
      sym_boolean,
      sym_identifier,
    ACTIONS(156), 9,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
  [426] = 2,
    ACTIONS(162), 3,
      anon_sym_fn,
      sym_boolean,
      sym_identifier,
    ACTIONS(160), 9,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
  [443] = 2,
    ACTIONS(166), 3,
      anon_sym_fn,
      sym_boolean,
      sym_identifier,
    ACTIONS(164), 9,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
  [460] = 2,
    ACTIONS(170), 3,
      anon_sym_fn,
      sym_boolean,
      sym_identifier,
    ACTIONS(168), 9,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
  [477] = 2,
    ACTIONS(174), 3,
      anon_sym_fn,
      sym_boolean,
      sym_identifier,
    ACTIONS(172), 9,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
  [494] = 7,
    ACTIONS(118), 1,
      anon_sym_STAR,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_PLUS,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      sym_arguments,
    ACTIONS(180), 3,
      anon_sym_fn,
      sym_boolean,
      sym_identifier,
    ACTIONS(178), 4,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
  [521] = 2,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
    ACTIONS(186), 5,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_return,
      sym_boolean,
      sym_identifier,
  [536] = 2,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
    ACTIONS(190), 5,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_return,
      sym_boolean,
      sym_identifier,
  [551] = 2,
    ACTIONS(192), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
    ACTIONS(194), 5,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_return,
      sym_boolean,
      sym_identifier,
  [566] = 2,
    ACTIONS(188), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
    ACTIONS(190), 5,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_return,
      sym_boolean,
      sym_identifier,
  [581] = 2,
    ACTIONS(192), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
    ACTIONS(194), 5,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_return,
      sym_boolean,
      sym_identifier,
  [596] = 2,
    ACTIONS(184), 5,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
    ACTIONS(186), 5,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_return,
      sym_boolean,
      sym_identifier,
  [611] = 2,
    ACTIONS(198), 3,
      anon_sym_fn,
      sym_boolean,
      sym_identifier,
    ACTIONS(196), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
  [624] = 5,
    ACTIONS(118), 1,
      anon_sym_STAR,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_PLUS,
    ACTIONS(200), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym_arguments,
  [640] = 5,
    ACTIONS(118), 1,
      anon_sym_STAR,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_PLUS,
    ACTIONS(202), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym_arguments,
  [656] = 5,
    ACTIONS(118), 1,
      anon_sym_STAR,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_PLUS,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym_arguments,
  [672] = 5,
    ACTIONS(118), 1,
      anon_sym_STAR,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_PLUS,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym_arguments,
  [688] = 5,
    ACTIONS(118), 1,
      anon_sym_STAR,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_PLUS,
    ACTIONS(208), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym_arguments,
  [704] = 5,
    ACTIONS(118), 1,
      anon_sym_STAR,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_PLUS,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_arguments,
  [720] = 5,
    ACTIONS(118), 1,
      anon_sym_STAR,
    ACTIONS(120), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_PLUS,
    ACTIONS(212), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym_arguments,
  [736] = 3,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    ACTIONS(216), 1,
      sym_identifier,
    STATE(43), 2,
      aux_sym__parameter_list,
      sym__parameter,
  [747] = 3,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    ACTIONS(221), 1,
      sym_identifier,
    STATE(45), 2,
      aux_sym__parameter_list,
      sym__parameter,
  [758] = 3,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(43), 2,
      aux_sym__parameter_list,
      sym__parameter,
  [769] = 2,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(225), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [777] = 1,
    ACTIONS(229), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [782] = 2,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
  [789] = 2,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_parameters,
  [796] = 1,
    ACTIONS(235), 1,
      anon_sym_EQ,
  [800] = 1,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
  [804] = 1,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
  [808] = 1,
    ACTIONS(241), 1,
      sym_identifier,
  [812] = 1,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
  [816] = 1,
    ACTIONS(245), 1,
      anon_sym_EQ,
  [820] = 1,
    ACTIONS(247), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 33,
  [SMALL_STATE(9)] = 66,
  [SMALL_STATE(10)] = 99,
  [SMALL_STATE(11)] = 125,
  [SMALL_STATE(12)] = 151,
  [SMALL_STATE(13)] = 177,
  [SMALL_STATE(14)] = 201,
  [SMALL_STATE(15)] = 223,
  [SMALL_STATE(16)] = 245,
  [SMALL_STATE(17)] = 271,
  [SMALL_STATE(18)] = 297,
  [SMALL_STATE(19)] = 323,
  [SMALL_STATE(20)] = 349,
  [SMALL_STATE(21)] = 375,
  [SMALL_STATE(22)] = 392,
  [SMALL_STATE(23)] = 409,
  [SMALL_STATE(24)] = 426,
  [SMALL_STATE(25)] = 443,
  [SMALL_STATE(26)] = 460,
  [SMALL_STATE(27)] = 477,
  [SMALL_STATE(28)] = 494,
  [SMALL_STATE(29)] = 521,
  [SMALL_STATE(30)] = 536,
  [SMALL_STATE(31)] = 551,
  [SMALL_STATE(32)] = 566,
  [SMALL_STATE(33)] = 581,
  [SMALL_STATE(34)] = 596,
  [SMALL_STATE(35)] = 611,
  [SMALL_STATE(36)] = 624,
  [SMALL_STATE(37)] = 640,
  [SMALL_STATE(38)] = 656,
  [SMALL_STATE(39)] = 672,
  [SMALL_STATE(40)] = 688,
  [SMALL_STATE(41)] = 704,
  [SMALL_STATE(42)] = 720,
  [SMALL_STATE(43)] = 736,
  [SMALL_STATE(44)] = 747,
  [SMALL_STATE(45)] = 758,
  [SMALL_STATE(46)] = 769,
  [SMALL_STATE(47)] = 777,
  [SMALL_STATE(48)] = 782,
  [SMALL_STATE(49)] = 789,
  [SMALL_STATE(50)] = 796,
  [SMALL_STATE(51)] = 800,
  [SMALL_STATE(52)] = 804,
  [SMALL_STATE(53)] = 808,
  [SMALL_STATE(54)] = 812,
  [SMALL_STATE(55)] = 816,
  [SMALL_STATE(56)] = 820,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list, 2), SHIFT_REPEAT(56),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list, 2), SHIFT_REPEAT(20),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list, 2), SHIFT_REPEAT(49),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list, 2), SHIFT_REPEAT(19),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list, 2), SHIFT_REPEAT(12),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list, 2), SHIFT_REPEAT(36),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list, 2), SHIFT_REPEAT(36),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__argument_list, 2), SHIFT_REPEAT(20),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__argument_list, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__argument_list, 2), SHIFT_REPEAT(49),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__argument_list, 2), SHIFT_REPEAT(12),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__argument_list, 2), SHIFT_REPEAT(28),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__argument_list, 2), SHIFT_REPEAT(28),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__grouped_expression, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__grouped_expression, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 5),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 5),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__parameter_list, 2), SHIFT_REPEAT(46),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [243] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_monkeylang(void) {
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
