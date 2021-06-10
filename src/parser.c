#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_import = 1,
  anon_sym_COMMA = 2,
  sym_namespace_import = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_from = 6,
  anon_sym_as = 7,
  sym_identifier = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_string_token1 = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_string_token2 = 12,
  sym_escape_sequence = 13,
  sym_program = 14,
  sym_import_statement = 15,
  sym_import_clause = 16,
  sym_named_imports = 17,
  sym__from_clause = 18,
  sym__import_export_specifier = 19,
  sym_string = 20,
  aux_sym_program_repeat1 = 21,
  aux_sym_named_imports_repeat1 = 22,
  aux_sym_string_repeat1 = 23,
  aux_sym_string_repeat2 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_COMMA] = ",",
  [sym_namespace_import] = "namespace_import",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_from] = "from",
  [anon_sym_as] = "as",
  [sym_identifier] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_escape_sequence] = "escape_sequence",
  [sym_program] = "program",
  [sym_import_statement] = "import_statement",
  [sym_import_clause] = "import_clause",
  [sym_named_imports] = "named_imports",
  [sym__from_clause] = "_from_clause",
  [sym__import_export_specifier] = "import_specifier",
  [sym_string] = "string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_named_imports_repeat1] = "named_imports_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_namespace_import] = sym_namespace_import,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_as] = anon_sym_as,
  [sym_identifier] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_program] = sym_program,
  [sym_import_statement] = sym_import_statement,
  [sym_import_clause] = sym_import_clause,
  [sym_named_imports] = sym_named_imports,
  [sym__from_clause] = sym__from_clause,
  [sym__import_export_specifier] = sym__import_export_specifier,
  [sym_string] = sym_string,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_named_imports_repeat1] = aux_sym_named_imports_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_namespace_import] = {
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
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_named_imports] = {
    .visible = true,
    .named = true,
  },
  [sym__from_clause] = {
    .visible = false,
    .named = true,
  },
  [sym__import_export_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_imports_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_name = 2,
  field_source = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_name] = "name",
  [field_source] = "source",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_source, 2, .inherited = true},
  [2] =
    {field_alias, 1, .inherited = true},
    {field_name, 1, .inherited = true},
  [4] =
    {field_source, 1},
  [5] =
    {field_alias, 2},
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < '|'
    ? (c < '%'
      ? (c < 0
        ? c == 0
        : c <= '#')
      : (c <= '@' || (c < '`'
        ? (c >= '[' && c <= '^')
        : c <= '`')))
    : (c <= '~' || (c < 8288
      ? (c < 8203
        ? c == 160
        : c <= 8203)
      : (c <= 8288 || c == 65279))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < '`'
    ? (c < '%'
      ? (c < 0
        ? c == 0
        : c <= '#')
      : (c <= '/' || (c < '['
        ? (c >= ':' && c <= '@')
        : c <= '^')))
    : (c <= '`' || (c < 8203
      ? (c < 160
        ? (c >= '{' && c <= '~')
        : c <= 160)
      : (c <= 8203 || (c < 65279
        ? c == 8288
        : c <= 65279)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(45);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == '{') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '}') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_namespace_import);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(14);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
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
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_namespace_import] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(33),
    [sym_import_statement] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      sym_namespace_import,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(25), 1,
      sym_import_clause,
    STATE(39), 1,
      sym_named_imports,
  [16] = 3,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    STATE(4), 1,
      aux_sym_string_repeat2,
    ACTIONS(15), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [27] = 3,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(4), 1,
      aux_sym_string_repeat2,
    ACTIONS(19), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [38] = 3,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(10), 2,
      sym_import_statement,
      aux_sym_program_repeat1,
  [49] = 3,
    ACTIONS(24), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      aux_sym_string_repeat1,
    ACTIONS(26), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [60] = 4,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(13), 1,
      sym__import_export_specifier,
  [73] = 3,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(3), 1,
      aux_sym_string_repeat2,
    ACTIONS(37), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [84] = 3,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      aux_sym_string_repeat1,
    ACTIONS(39), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [95] = 3,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_import,
    STATE(10), 2,
      sym_import_statement,
      aux_sym_program_repeat1,
  [106] = 3,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      aux_sym_string_repeat1,
    ACTIONS(46), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [117] = 3,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_named_imports_repeat1,
  [127] = 3,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_named_imports_repeat1,
  [137] = 3,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      sym_namespace_import,
    STATE(31), 1,
      sym_named_imports,
  [147] = 3,
    ACTIONS(58), 1,
      anon_sym_DQUOTE,
    ACTIONS(60), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      sym_string,
  [157] = 2,
    ACTIONS(64), 1,
      anon_sym_as,
    ACTIONS(62), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [165] = 3,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym__import_export_specifier,
  [175] = 3,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym__import_export_specifier,
  [185] = 3,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_named_imports_repeat1,
  [195] = 1,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [200] = 2,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_from,
  [207] = 2,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(28), 1,
      sym__import_export_specifier,
  [214] = 1,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [219] = 1,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [224] = 2,
    ACTIONS(85), 1,
      anon_sym_from,
    STATE(20), 1,
      sym__from_clause,
  [231] = 1,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [236] = 1,
    ACTIONS(89), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [241] = 1,
    ACTIONS(91), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [246] = 1,
    ACTIONS(93), 1,
      anon_sym_from,
  [250] = 1,
    ACTIONS(95), 1,
      anon_sym_from,
  [254] = 1,
    ACTIONS(97), 1,
      anon_sym_from,
  [258] = 1,
    ACTIONS(95), 1,
      anon_sym_from,
  [262] = 1,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
  [266] = 1,
    ACTIONS(101), 1,
      sym_identifier,
  [270] = 1,
    ACTIONS(103), 1,
      anon_sym_from,
  [274] = 1,
    ACTIONS(105), 1,
      anon_sym_from,
  [278] = 1,
    ACTIONS(107), 1,
      anon_sym_from,
  [282] = 1,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
  [286] = 1,
    ACTIONS(79), 1,
      anon_sym_from,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 27,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 49,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 73,
  [SMALL_STATE(9)] = 84,
  [SMALL_STATE(10)] = 95,
  [SMALL_STATE(11)] = 106,
  [SMALL_STATE(12)] = 117,
  [SMALL_STATE(13)] = 127,
  [SMALL_STATE(14)] = 137,
  [SMALL_STATE(15)] = 147,
  [SMALL_STATE(16)] = 157,
  [SMALL_STATE(17)] = 165,
  [SMALL_STATE(18)] = 175,
  [SMALL_STATE(19)] = 185,
  [SMALL_STATE(20)] = 195,
  [SMALL_STATE(21)] = 200,
  [SMALL_STATE(22)] = 207,
  [SMALL_STATE(23)] = 214,
  [SMALL_STATE(24)] = 219,
  [SMALL_STATE(25)] = 224,
  [SMALL_STATE(26)] = 231,
  [SMALL_STATE(27)] = 236,
  [SMALL_STATE(28)] = 241,
  [SMALL_STATE(29)] = 246,
  [SMALL_STATE(30)] = 250,
  [SMALL_STATE(31)] = 254,
  [SMALL_STATE(32)] = 258,
  [SMALL_STATE(33)] = 262,
  [SMALL_STATE(34)] = 266,
  [SMALL_STATE(35)] = 270,
  [SMALL_STATE(36)] = 274,
  [SMALL_STATE(37)] = 278,
  [SMALL_STATE(38)] = 282,
  [SMALL_STATE(39)] = 286,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_export_specifier, 1, .production_id = 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2), SHIFT_REPEAT(22),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_clause, 2, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_export_specifier, 3, .production_id = 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2, .production_id = 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 3, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 4, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 3),
  [99] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 5, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_grain(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
