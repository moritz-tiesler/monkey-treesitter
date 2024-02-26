#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_let = 1,
  anon_sym_EQ = 2,
  anon_sym_DASH = 3,
  anon_sym_BANG = 4,
  anon_sym_STAR = 5,
  anon_sym_PLUS = 6,
  sym_number = 7,
  sym_boolean = 8,
  sym_identifier = 9,
  sym_source_file = 10,
  sym__statement = 11,
  sym_let_statement = 12,
  sym__expression = 13,
  sym_unary_expression = 14,
  sym_binary_expression = 15,
  aux_sym_source_file_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_let_statement] = "let_statement",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_let_statement] = sym_let_statement,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 't') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 't') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 2:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_boolean);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
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
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym__statement] = STATE(2),
    [sym_let_statement] = STATE(2),
    [sym__expression] = STATE(4),
    [sym_unary_expression] = STATE(4),
    [sym_binary_expression] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [sym_boolean] = ACTIONS(11),
    [sym_identifier] = ACTIONS(11),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym_let_statement] = STATE(3),
    [sym__expression] = STATE(4),
    [sym_unary_expression] = STATE(4),
    [sym_binary_expression] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [sym_boolean] = ACTIONS(11),
    [sym_identifier] = ACTIONS(11),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_let_statement] = STATE(3),
    [sym__expression] = STATE(4),
    [sym_unary_expression] = STATE(4),
    [sym_binary_expression] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(20),
    [anon_sym_BANG] = ACTIONS(20),
    [sym_number] = ACTIONS(23),
    [sym_boolean] = ACTIONS(26),
    [sym_identifier] = ACTIONS(26),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(35),
    [sym_number] = ACTIONS(29),
    [sym_boolean] = ACTIONS(31),
    [sym_identifier] = ACTIONS(31),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_let] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [sym_number] = ACTIONS(37),
    [sym_boolean] = ACTIONS(39),
    [sym_identifier] = ACTIONS(39),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_let] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_boolean] = ACTIONS(43),
    [sym_identifier] = ACTIONS(43),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_let] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_boolean] = ACTIONS(43),
    [sym_identifier] = ACTIONS(43),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_let] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_BANG] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(35),
    [sym_number] = ACTIONS(45),
    [sym_boolean] = ACTIONS(47),
    [sym_identifier] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(49), 1,
      sym_number,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(51), 2,
      sym_boolean,
      sym_identifier,
    STATE(5), 3,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [17] = 4,
    ACTIONS(53), 1,
      sym_number,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(55), 2,
      sym_boolean,
      sym_identifier,
    STATE(6), 3,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [34] = 4,
    ACTIONS(57), 1,
      sym_number,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(59), 2,
      sym_boolean,
      sym_identifier,
    STATE(7), 3,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [51] = 4,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(7), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(63), 2,
      sym_boolean,
      sym_identifier,
    STATE(8), 3,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
  [68] = 1,
    ACTIONS(65), 1,
      sym_identifier,
  [72] = 1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
  [76] = 1,
    ACTIONS(69), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 17,
  [SMALL_STATE(11)] = 34,
  [SMALL_STATE(12)] = 51,
  [SMALL_STATE(13)] = 68,
  [SMALL_STATE(14)] = 72,
  [SMALL_STATE(15)] = 76,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [67] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
