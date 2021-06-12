#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum {
  sym_comment = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_import = 5,
  sym_namespace_import = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_from = 9,
  anon_sym_as = 10,
  anon_sym_let = 11,
  anon_sym_rec = 12,
  anon_sym_mut = 13,
  anon_sym_EQ = 14,
  sym_identifier = 15,
  sym_true = 16,
  sym_false = 17,
  sym_number = 18,
  anon_sym_DQUOTE = 19,
  aux_sym_string_token1 = 20,
  anon_sym_SQUOTE = 21,
  aux_sym_char_token1 = 22,
  sym_escape_sequence = 23,
  sym_program = 24,
  sym_pattern = 25,
  sym_import_statement = 26,
  sym_import_clause = 27,
  sym_named_imports = 28,
  sym__from_clause = 29,
  sym__import_export_specifier = 30,
  sym_let_expr = 31,
  sym__value_binds = 32,
  sym_string = 33,
  sym_char = 34,
  aux_sym_program_repeat1 = 35,
  aux_sym_pattern_repeat1 = 36,
  aux_sym_named_imports_repeat1 = 37,
  aux_sym__value_binds_repeat1 = 38,
  aux_sym_string_repeat1 = 39,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
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

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
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
  [sym_comment] = {
    .visible = true,
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

static const char *ts_field_names[] = {
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

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(46);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(45)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(75);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(88);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(3)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(75);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(75);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(96);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(99);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == '{') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == '{') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == '}') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '}') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(45)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_namespace_import);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == '\\') ADVANCE(32);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_mut);
      if (lookahead == '\\') ADVANCE(32);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(69);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(60);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(77);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(79);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(65);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(71);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(73);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 's') ADVANCE(67);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 't') ADVANCE(62);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(66);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(72);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(32);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '\\') ADVANCE(32);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '\\') ADVANCE(32);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(75);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(98);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
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
  [41] = {.lex_state = 9},
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

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(12), 2,
      sym_string,
      sym_char,
    ACTIONS(11), 3,
      sym_identifier,
      sym_true,
      sym_false,
  [22] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_number,
    STATE(11), 2,
      sym_string,
      sym_char,
    ACTIONS(19), 3,
      sym_identifier,
      sym_true,
      sym_false,
  [44] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(6), 3,
      sym_import_statement,
      sym_let_expr,
      aux_sym_program_repeat1,
  [62] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_rec,
    ACTIONS(29), 1,
      anon_sym_mut,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(22), 1,
      sym__value_binds,
    STATE(58), 1,
      sym_pattern,
  [84] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_import,
    ACTIONS(38), 1,
      anon_sym_let,
    STATE(6), 3,
      sym_import_statement,
      sym_let_expr,
      aux_sym_program_repeat1,
  [102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [117] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(46), 1,
      anon_sym_mut,
    STATE(27), 1,
      sym__value_binds,
    STATE(58), 1,
      sym_pattern,
  [136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [151] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_namespace_import,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      sym_identifier,
    STATE(40), 1,
      sym_import_clause,
    STATE(64), 1,
      sym_named_imports,
  [170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [195] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(29), 1,
      sym__import_export_specifier,
  [211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [221] = 4,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      aux_sym_string_repeat1,
    ACTIONS(74), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [235] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(27), 1,
      sym__value_binds,
    STATE(58), 1,
      sym_pattern,
  [251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [261] = 4,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      aux_sym_string_repeat1,
    ACTIONS(83), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [285] = 4,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      aux_sym_string_repeat1,
    ACTIONS(89), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [299] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(31), 1,
      sym__value_binds,
    STATE(58), 1,
      sym_pattern,
  [315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_pattern_repeat1,
  [337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym__import_export_specifier,
  [350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_pattern_repeat1,
  [372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_as,
    ACTIONS(105), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_named_imports_repeat1,
  [405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym__import_export_specifier,
  [418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_named_imports_repeat1,
  [440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(121), 1,
      sym_namespace_import,
    STATE(46), 1,
      sym_named_imports,
  [453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(60), 1,
      sym_pattern,
  [466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_pattern_repeat1,
  [488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_named_imports_repeat1,
  [501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(44), 1,
      sym__import_export_specifier,
  [519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_from,
    STATE(25), 1,
      sym__from_clause,
  [529] = 2,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(137), 2,
      aux_sym_char_token1,
      sym_escape_sequence,
  [537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_from,
  [555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_string,
  [573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_from,
  [580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_from,
  [587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_from,
  [594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_from,
  [601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_from,
  [608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_EQ,
  [615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_EQ,
  [622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_identifier,
  [629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
  [636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
  [643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_from,
  [650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
  [657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_EQ,
  [664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_EQ,
  [671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_EQ,
  [678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_identifier,
  [685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_from,
  [692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_identifier,
  [699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_from,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 117,
  [SMALL_STATE(9)] = 136,
  [SMALL_STATE(10)] = 151,
  [SMALL_STATE(11)] = 170,
  [SMALL_STATE(12)] = 185,
  [SMALL_STATE(13)] = 195,
  [SMALL_STATE(14)] = 211,
  [SMALL_STATE(15)] = 221,
  [SMALL_STATE(16)] = 235,
  [SMALL_STATE(17)] = 251,
  [SMALL_STATE(18)] = 261,
  [SMALL_STATE(19)] = 275,
  [SMALL_STATE(20)] = 285,
  [SMALL_STATE(21)] = 299,
  [SMALL_STATE(22)] = 315,
  [SMALL_STATE(23)] = 324,
  [SMALL_STATE(24)] = 337,
  [SMALL_STATE(25)] = 350,
  [SMALL_STATE(26)] = 359,
  [SMALL_STATE(27)] = 372,
  [SMALL_STATE(28)] = 381,
  [SMALL_STATE(29)] = 392,
  [SMALL_STATE(30)] = 405,
  [SMALL_STATE(31)] = 418,
  [SMALL_STATE(32)] = 427,
  [SMALL_STATE(33)] = 440,
  [SMALL_STATE(34)] = 453,
  [SMALL_STATE(35)] = 466,
  [SMALL_STATE(36)] = 475,
  [SMALL_STATE(37)] = 488,
  [SMALL_STATE(38)] = 501,
  [SMALL_STATE(39)] = 509,
  [SMALL_STATE(40)] = 519,
  [SMALL_STATE(41)] = 529,
  [SMALL_STATE(42)] = 537,
  [SMALL_STATE(43)] = 545,
  [SMALL_STATE(44)] = 555,
  [SMALL_STATE(45)] = 563,
  [SMALL_STATE(46)] = 573,
  [SMALL_STATE(47)] = 580,
  [SMALL_STATE(48)] = 587,
  [SMALL_STATE(49)] = 594,
  [SMALL_STATE(50)] = 601,
  [SMALL_STATE(51)] = 608,
  [SMALL_STATE(52)] = 615,
  [SMALL_STATE(53)] = 622,
  [SMALL_STATE(54)] = 629,
  [SMALL_STATE(55)] = 636,
  [SMALL_STATE(56)] = 643,
  [SMALL_STATE(57)] = 650,
  [SMALL_STATE(58)] = 657,
  [SMALL_STATE(59)] = 664,
  [SMALL_STATE(60)] = 671,
  [SMALL_STATE(61)] = 678,
  [SMALL_STATE(62)] = 685,
  [SMALL_STATE(63)] = 692,
  [SMALL_STATE(64)] = 699,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 2), SHIFT_REPEAT(34),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_binds, 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_binds, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 4),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(15),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_export_specifier, 1, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_clause, 2, .production_id = 4),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(53),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2), SHIFT_REPEAT(39),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_export_specifier, 3, .production_id = 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2, .production_id = 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 4, .production_id = 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 5, .production_id = 3),
  [167] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 3, .production_id = 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_grain(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
