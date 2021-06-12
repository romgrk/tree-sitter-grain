#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_LPAREN = 1,
  anon_sym_COMMA = 2,
  anon_sym_RPAREN = 3,
  anon_sym_import = 4,
  sym_namespace_import = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_from = 8,
  anon_sym_as = 9,
  anon_sym_let = 10,
  anon_sym_rec = 11,
  anon_sym_mut = 12,
  anon_sym_EQ = 13,
  sym_identifier = 14,
  sym_true = 15,
  sym_false = 16,
  sym_number = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_string_token1 = 19,
  anon_sym_SQUOTE = 20,
  aux_sym_char_token1 = 21,
  sym_escape_sequence = 22,
  sym_program = 23,
  sym_pattern = 24,
  sym_import_statement = 25,
  sym_import_clause = 26,
  sym_named_imports = 27,
  sym__from_clause = 28,
  sym__import_export_specifier = 29,
  sym_let_expr = 30,
  sym__value_binds = 31,
  sym_string = 32,
  sym_char = 33,
  aux_sym_program_repeat1 = 34,
  aux_sym_pattern_repeat1 = 35,
  aux_sym_named_imports_repeat1 = 36,
  aux_sym__value_binds_repeat1 = 37,
  aux_sym_string_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_import] = "import",
  [sym_namespace_import] = "namespace_import",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_from] = "from",
  [anon_sym_as] = "as",
  [anon_sym_let] = "let",
  [anon_sym_rec] = "rec",
  [anon_sym_mut] = "mut",
  [anon_sym_EQ] = "=",
  [sym_identifier] = "identifier",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_program] = "program",
  [sym_pattern] = "pattern",
  [sym_import_statement] = "import_statement",
  [sym_import_clause] = "import_clause",
  [sym_named_imports] = "named_imports",
  [sym__from_clause] = "_from_clause",
  [sym__import_export_specifier] = "import_specifier",
  [sym_let_expr] = "let_expr",
  [sym__value_binds] = "_value_binds",
  [sym_string] = "string",
  [sym_char] = "char",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
  [aux_sym_named_imports_repeat1] = "named_imports_repeat1",
  [aux_sym__value_binds_repeat1] = "_value_binds_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_import] = anon_sym_import,
  [sym_namespace_import] = sym_namespace_import,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_rec] = anon_sym_rec,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_identifier] = sym_identifier,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_program] = sym_program,
  [sym_pattern] = sym_pattern,
  [sym_import_statement] = sym_import_statement,
  [sym_import_clause] = sym_import_clause,
  [sym_named_imports] = sym_named_imports,
  [sym__from_clause] = sym__from_clause,
  [sym__import_export_specifier] = sym__import_export_specifier,
  [sym_let_expr] = sym_let_expr,
  [sym__value_binds] = sym__value_binds,
  [sym_string] = sym_string,
  [sym_char] = sym_char,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_pattern_repeat1] = aux_sym_pattern_repeat1,
  [aux_sym_named_imports_repeat1] = aux_sym_named_imports_repeat1,
  [aux_sym__value_binds_repeat1] = aux_sym__value_binds_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_import] = {
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
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [aux_sym_char_token1] = {
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
  [sym_pattern] = {
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
  [sym_let_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__value_binds] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_imports_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__value_binds_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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
  return (c < '{'
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

static inline bool sym_identifier_character_set_3(int32_t c) {
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
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 6:
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(84);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '{') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == '{') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '}') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_namespace_import);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == '\\') ADVANCE(29);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_mut);
      if (lookahead == '\\') ADVANCE(29);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(64);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(55);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(72);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(74);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(60);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(66);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(68);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 's') ADVANCE(62);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 't') ADVANCE(57);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(61);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(67);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '\\') ADVANCE(29);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '\\') ADVANCE(29);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(70);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(83);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 6},
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
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [sym_namespace_import] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_rec] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(57),
    [sym_import_statement] = STATE(4),
    [sym_let_expr] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    STATE(12), 2,
      sym_string,
      sym_char,
    ACTIONS(9), 3,
      sym_identifier,
      sym_true,
      sym_false,
  [19] = 5,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    STATE(11), 2,
      sym_string,
      sym_char,
    ACTIONS(17), 3,
      sym_identifier,
      sym_true,
      sym_false,
  [38] = 4,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(6), 3,
      sym_import_statement,
      sym_let_expr,
      aux_sym_program_repeat1,
  [53] = 6,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_rec,
    ACTIONS(27), 1,
      anon_sym_mut,
    ACTIONS(29), 1,
      sym_identifier,
    STATE(22), 1,
      sym__value_binds,
    STATE(58), 1,
      sym_pattern,
  [72] = 4,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_import,
    ACTIONS(36), 1,
      anon_sym_let,
    STATE(6), 3,
      sym_import_statement,
      sym_let_expr,
      aux_sym_program_repeat1,
  [87] = 3,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [99] = 5,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(44), 1,
      anon_sym_mut,
    STATE(27), 1,
      sym__value_binds,
    STATE(58), 1,
      sym_pattern,
  [115] = 3,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [127] = 5,
    ACTIONS(50), 1,
      sym_namespace_import,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    ACTIONS(54), 1,
      sym_identifier,
    STATE(40), 1,
      sym_import_clause,
    STATE(64), 1,
      sym_named_imports,
  [143] = 3,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [155] = 1,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [162] = 4,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(29), 1,
      sym__import_export_specifier,
  [175] = 1,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [182] = 3,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      aux_sym_string_repeat1,
    ACTIONS(70), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [193] = 4,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(27), 1,
      sym__value_binds,
    STATE(58), 1,
      sym_pattern,
  [206] = 1,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [213] = 3,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      aux_sym_string_repeat1,
    ACTIONS(79), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [224] = 1,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [231] = 3,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      aux_sym_string_repeat1,
    ACTIONS(85), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [242] = 4,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(31), 1,
      sym__value_binds,
    STATE(58), 1,
      sym_pattern,
  [255] = 1,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [261] = 3,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_pattern_repeat1,
  [271] = 3,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym__import_export_specifier,
  [281] = 1,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [287] = 3,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_pattern_repeat1,
  [297] = 1,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [303] = 2,
    ACTIONS(103), 1,
      anon_sym_as,
    ACTIONS(101), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [311] = 3,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_named_imports_repeat1,
  [321] = 3,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym__import_export_specifier,
  [331] = 1,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [337] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_named_imports_repeat1,
  [347] = 3,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    ACTIONS(117), 1,
      sym_namespace_import,
    STATE(46), 1,
      sym_named_imports,
  [357] = 3,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(60), 1,
      sym_pattern,
  [367] = 1,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [373] = 3,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_pattern_repeat1,
  [383] = 3,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_named_imports_repeat1,
  [393] = 1,
    ACTIONS(124), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [398] = 2,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(44), 1,
      sym__import_export_specifier,
  [405] = 2,
    ACTIONS(131), 1,
      anon_sym_from,
    STATE(25), 1,
      sym__from_clause,
  [412] = 1,
    ACTIONS(133), 2,
      aux_sym_char_token1,
      sym_escape_sequence,
  [417] = 1,
    ACTIONS(135), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [422] = 2,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      anon_sym_from,
  [429] = 1,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [434] = 2,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
  [441] = 1,
    ACTIONS(143), 1,
      anon_sym_from,
  [445] = 1,
    ACTIONS(145), 1,
      anon_sym_from,
  [449] = 1,
    ACTIONS(147), 1,
      anon_sym_from,
  [453] = 1,
    ACTIONS(149), 1,
      anon_sym_from,
  [457] = 1,
    ACTIONS(145), 1,
      anon_sym_from,
  [461] = 1,
    ACTIONS(151), 1,
      anon_sym_EQ,
  [465] = 1,
    ACTIONS(153), 1,
      anon_sym_EQ,
  [469] = 1,
    ACTIONS(155), 1,
      sym_identifier,
  [473] = 1,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
  [477] = 1,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
  [481] = 1,
    ACTIONS(161), 1,
      anon_sym_from,
  [485] = 1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
  [489] = 1,
    ACTIONS(165), 1,
      anon_sym_EQ,
  [493] = 1,
    ACTIONS(167), 1,
      anon_sym_EQ,
  [497] = 1,
    ACTIONS(169), 1,
      anon_sym_EQ,
  [501] = 1,
    ACTIONS(171), 1,
      sym_identifier,
  [505] = 1,
    ACTIONS(173), 1,
      anon_sym_from,
  [509] = 1,
    ACTIONS(175), 1,
      sym_identifier,
  [513] = 1,
    ACTIONS(139), 1,
      anon_sym_from,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 99,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 127,
  [SMALL_STATE(11)] = 143,
  [SMALL_STATE(12)] = 155,
  [SMALL_STATE(13)] = 162,
  [SMALL_STATE(14)] = 175,
  [SMALL_STATE(15)] = 182,
  [SMALL_STATE(16)] = 193,
  [SMALL_STATE(17)] = 206,
  [SMALL_STATE(18)] = 213,
  [SMALL_STATE(19)] = 224,
  [SMALL_STATE(20)] = 231,
  [SMALL_STATE(21)] = 242,
  [SMALL_STATE(22)] = 255,
  [SMALL_STATE(23)] = 261,
  [SMALL_STATE(24)] = 271,
  [SMALL_STATE(25)] = 281,
  [SMALL_STATE(26)] = 287,
  [SMALL_STATE(27)] = 297,
  [SMALL_STATE(28)] = 303,
  [SMALL_STATE(29)] = 311,
  [SMALL_STATE(30)] = 321,
  [SMALL_STATE(31)] = 331,
  [SMALL_STATE(32)] = 337,
  [SMALL_STATE(33)] = 347,
  [SMALL_STATE(34)] = 357,
  [SMALL_STATE(35)] = 367,
  [SMALL_STATE(36)] = 373,
  [SMALL_STATE(37)] = 383,
  [SMALL_STATE(38)] = 393,
  [SMALL_STATE(39)] = 398,
  [SMALL_STATE(40)] = 405,
  [SMALL_STATE(41)] = 412,
  [SMALL_STATE(42)] = 417,
  [SMALL_STATE(43)] = 422,
  [SMALL_STATE(44)] = 429,
  [SMALL_STATE(45)] = 434,
  [SMALL_STATE(46)] = 441,
  [SMALL_STATE(47)] = 445,
  [SMALL_STATE(48)] = 449,
  [SMALL_STATE(49)] = 453,
  [SMALL_STATE(50)] = 457,
  [SMALL_STATE(51)] = 461,
  [SMALL_STATE(52)] = 465,
  [SMALL_STATE(53)] = 469,
  [SMALL_STATE(54)] = 473,
  [SMALL_STATE(55)] = 477,
  [SMALL_STATE(56)] = 481,
  [SMALL_STATE(57)] = 485,
  [SMALL_STATE(58)] = 489,
  [SMALL_STATE(59)] = 493,
  [SMALL_STATE(60)] = 497,
  [SMALL_STATE(61)] = 501,
  [SMALL_STATE(62)] = 505,
  [SMALL_STATE(63)] = 509,
  [SMALL_STATE(64)] = 513,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 2), SHIFT_REPEAT(34),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_binds, 4),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_binds, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(15),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_export_specifier, 1, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_clause, 2, .production_id = 4),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(53),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2), SHIFT_REPEAT(39),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_export_specifier, 3, .production_id = 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2, .production_id = 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 4, .production_id = 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 5, .production_id = 3),
  [163] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 3, .production_id = 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
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
