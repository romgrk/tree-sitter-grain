#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 105
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  sym_comment = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACK_GT = 5,
  anon_sym_RBRACK = 6,
  anon_sym_LBRACK = 7,
  anon_sym_DOT_DOT_DOT = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_COLON = 11,
  sym_underscore = 12,
  anon_sym_import = 13,
  sym_namespace_import = 14,
  anon_sym_from = 15,
  anon_sym_as = 16,
  anon_sym_let = 17,
  anon_sym_rec = 18,
  anon_sym_mut = 19,
  anon_sym_EQ = 20,
  sym_type = 21,
  sym_identifier = 22,
  sym_true = 23,
  sym_false = 24,
  sym_void = 25,
  sym_number = 26,
  anon_sym_DQUOTE = 27,
  aux_sym_string_token1 = 28,
  anon_sym_SQUOTE = 29,
  aux_sym_char_token1 = 30,
  sym_escape_sequence = 31,
  sym_program = 32,
  sym_tuple_pattern = 33,
  sym_array_pattern = 34,
  sym_list_pattern = 35,
  sym_list_pattern_rest = 36,
  sym_record_pattern = 37,
  sym_pattern_alias = 38,
  sym_construct_pattern = 39,
  sym__identifier_or_underscore = 40,
  sym_import_statement = 41,
  sym_import_clause = 42,
  sym_named_imports = 43,
  sym__from_clause = 44,
  sym__import_export_specifier = 45,
  sym_let_expr = 46,
  sym__value_binds = 47,
  sym_string = 48,
  sym_char = 49,
  aux_sym_program_repeat1 = 50,
  aux_sym_tuple_pattern_repeat1 = 51,
  aux_sym_record_pattern_repeat1 = 52,
  aux_sym_named_imports_repeat1 = 53,
  aux_sym__value_binds_repeat1 = 54,
  aux_sym_string_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK_GT] = "[>",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK] = "[",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_underscore] = "underscore",
  [anon_sym_import] = "import",
  [sym_namespace_import] = "namespace_import",
  [anon_sym_from] = "from",
  [anon_sym_as] = "as",
  [anon_sym_let] = "let",
  [anon_sym_rec] = "rec",
  [anon_sym_mut] = "mut",
  [anon_sym_EQ] = "=",
  [sym_type] = "type",
  [sym_identifier] = "identifier",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_void] = "void",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_program] = "program",
  [sym_tuple_pattern] = "tuple_pattern",
  [sym_array_pattern] = "array_pattern",
  [sym_list_pattern] = "list_pattern",
  [sym_list_pattern_rest] = "list_pattern_rest",
  [sym_record_pattern] = "record_pattern",
  [sym_pattern_alias] = "pattern_alias",
  [sym_construct_pattern] = "construct_pattern",
  [sym__identifier_or_underscore] = "_identifier_or_underscore",
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
  [aux_sym_tuple_pattern_repeat1] = "tuple_pattern_repeat1",
  [aux_sym_record_pattern_repeat1] = "record_pattern_repeat1",
  [aux_sym_named_imports_repeat1] = "named_imports_repeat1",
  [aux_sym__value_binds_repeat1] = "_value_binds_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK_GT] = anon_sym_LBRACK_GT,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_underscore] = sym_underscore,
  [anon_sym_import] = anon_sym_import,
  [sym_namespace_import] = sym_namespace_import,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_rec] = anon_sym_rec,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_type] = sym_type,
  [sym_identifier] = sym_identifier,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_void] = sym_void,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_program] = sym_program,
  [sym_tuple_pattern] = sym_tuple_pattern,
  [sym_array_pattern] = sym_array_pattern,
  [sym_list_pattern] = sym_list_pattern,
  [sym_list_pattern_rest] = sym_list_pattern_rest,
  [sym_record_pattern] = sym_record_pattern,
  [sym_pattern_alias] = sym_pattern_alias,
  [sym_construct_pattern] = sym_construct_pattern,
  [sym__identifier_or_underscore] = sym__identifier_or_underscore,
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
  [aux_sym_tuple_pattern_repeat1] = aux_sym_tuple_pattern_repeat1,
  [aux_sym_record_pattern_repeat1] = aux_sym_record_pattern_repeat1,
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
  [anon_sym_LBRACK_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_underscore] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [sym_namespace_import] = {
    .visible = true,
    .named = true,
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
  [sym_type] = {
    .visible = true,
    .named = true,
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
  [sym_void] = {
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
  [sym_tuple_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_array_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_list_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_list_pattern_rest] = {
    .visible = true,
    .named = true,
  },
  [sym_record_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_construct_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier_or_underscore] = {
    .visible = false,
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
  [aux_sym_tuple_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_pattern_repeat1] = {
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
  field_key = 2,
  field_name = 3,
  field_source = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_key] = "key",
  [field_name] = "name",
  [field_source] = "source",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
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
  [7] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
      if (eof) ADVANCE(60);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'v') ADVANCE(25);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(59)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == '_') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == 'v') ADVANCE(94);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '`' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(100);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '_') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == 'v') ADVANCE(94);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '`' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(100);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '_') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == 'v') ADVANCE(94);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '`' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(100);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == 'v') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(100);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(115);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(100);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '_') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(12)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(100);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(123);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == '{') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == '{') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == '{') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == '}') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '}') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '}') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(117);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == 'v') ADVANCE(25);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(59)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACK_GT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '>') ADVANCE(66);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_underscore);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_underscore);
      if (lookahead == '\\') ADVANCE(40);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_namespace_import);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == '\\') ADVANCE(40);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_mut);
      if (lookahead == '\\') ADVANCE(40);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\\') ADVANCE(39);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(93);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(81);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'd') ADVANCE(106);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(102);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(104);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(87);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(88);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(96);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(92);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(98);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 's') ADVANCE(90);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 't') ADVANCE(83);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(89);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(97);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(40);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '\\') ADVANCE(40);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '\\') ADVANCE(40);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_void);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_void);
      if (lookahead == '\\') ADVANCE(40);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(121);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(125);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 3},
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
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
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
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK_GT] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_underscore] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [sym_namespace_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_rec] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_void] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(94),
    [sym_import_statement] = STATE(23),
    [sym_let_expr] = STATE(23),
    [aux_sym_program_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(15), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_type,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    STATE(102), 1,
      sym_list_pattern_rest,
    ACTIONS(25), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(70), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [56] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_rec,
    ACTIONS(39), 1,
      anon_sym_mut,
    ACTIONS(41), 1,
      sym_number,
    STATE(53), 1,
      sym__value_binds,
    ACTIONS(35), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(101), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [109] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      sym_number,
    STATE(100), 1,
      sym_list_pattern_rest,
    ACTIONS(43), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(74), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [159] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      sym_number,
    STATE(98), 1,
      sym_list_pattern_rest,
    ACTIONS(43), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(74), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [209] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(47), 1,
      anon_sym_mut,
    STATE(64), 1,
      sym__value_binds,
    ACTIONS(35), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(101), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [259] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_number,
    ACTIONS(49), 4,
      sym_underscore,
      sym_true,
      sym_false,
      sym_void,
    STATE(77), 8,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_pattern_alias,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [306] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_number,
    STATE(68), 1,
      sym__value_binds,
    ACTIONS(35), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(101), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [353] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      sym_number,
    ACTIONS(55), 4,
      sym_underscore,
      sym_true,
      sym_false,
      sym_void,
    STATE(66), 8,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_pattern_alias,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [400] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      sym_number,
    STATE(64), 1,
      sym__value_binds,
    ACTIONS(35), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(101), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [447] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    ACTIONS(65), 1,
      sym_number,
    ACTIONS(63), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(73), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [494] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(67), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(99), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [538] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(43), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(74), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [582] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym_number,
    ACTIONS(71), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(72), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [626] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(75), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(69), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [670] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(79), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(76), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [714] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      sym_number,
    STATE(46), 2,
      sym_string,
      sym_char,
    ACTIONS(83), 4,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
  [737] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      sym_number,
    STATE(25), 2,
      sym_string,
      sym_char,
    ACTIONS(87), 4,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
  [760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_import,
      anon_sym_let,
      anon_sym_EQ,
  [774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_import,
      anon_sym_let,
      anon_sym_EQ,
  [788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_import,
      anon_sym_let,
      anon_sym_EQ,
  [802] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      anon_sym_import,
    ACTIONS(102), 1,
      anon_sym_let,
    STATE(22), 3,
      sym_import_statement,
      sym_let_expr,
      aux_sym_program_repeat1,
  [820] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(22), 3,
      sym_import_statement,
      sym_let_expr,
      aux_sym_program_repeat1,
  [838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [1003] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      sym_namespace_import,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(79), 1,
      sym_import_clause,
    STATE(104), 1,
      sym_named_imports,
  [1022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [1033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [1044] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(152), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [1059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [1070] = 4,
    ACTIONS(156), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_string_repeat1,
    ACTIONS(160), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1084] = 4,
    ACTIONS(156), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_string_repeat1,
    ACTIONS(165), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1098] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(171), 1,
      anon_sym_COLON,
    STATE(65), 1,
      aux_sym_record_pattern_repeat1,
  [1114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [1124] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(60), 1,
      sym__import_export_specifier,
  [1140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_tuple_pattern_repeat1,
    ACTIONS(184), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1154] = 4,
    ACTIONS(156), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym_string_repeat1,
    ACTIONS(188), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [1177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_named_imports_repeat1,
  [1190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_named_imports_repeat1,
  [1203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [1212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_tuple_pattern_repeat1,
  [1225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_tuple_pattern_repeat1,
  [1238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym__import_export_specifier,
  [1251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_tuple_pattern_repeat1,
  [1264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_as,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_record_pattern_repeat1,
  [1288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_named_imports_repeat1,
  [1301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_tuple_pattern_repeat1,
  [1325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      sym_namespace_import,
    STATE(97), 1,
      sym_named_imports,
  [1338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [1347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_record_pattern_repeat1,
  [1360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_record_pattern_repeat1,
  [1373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [1382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [1391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_tuple_pattern_repeat1,
  [1404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_tuple_pattern_repeat1,
  [1417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(86), 1,
      sym__identifier_or_underscore,
    ACTIONS(246), 2,
      sym_underscore,
      sym_identifier,
  [1428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_tuple_pattern_repeat1,
  [1441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_tuple_pattern_repeat1,
  [1454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym__import_export_specifier,
  [1476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_from,
  [1502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_from,
    STATE(67), 1,
      sym__from_clause,
  [1512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(90), 1,
      sym_list_pattern_rest,
  [1530] = 2,
    ACTIONS(156), 1,
      sym_comment,
    ACTIONS(264), 2,
      aux_sym_char_token1,
      sym_escape_sequence,
  [1538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_string,
  [1548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(80), 1,
      sym__import_export_specifier,
  [1558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
  [1573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
  [1580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_from,
  [1587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_identifier,
  [1594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
  [1601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_from,
  [1608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_from,
  [1615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
  [1622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
  [1629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_from,
  [1636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_from,
  [1643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_from,
  [1650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
  [1657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_EQ,
  [1664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
  [1671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_EQ,
  [1678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
  [1685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_from,
  [1692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_from,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 109,
  [SMALL_STATE(5)] = 159,
  [SMALL_STATE(6)] = 209,
  [SMALL_STATE(7)] = 259,
  [SMALL_STATE(8)] = 306,
  [SMALL_STATE(9)] = 353,
  [SMALL_STATE(10)] = 400,
  [SMALL_STATE(11)] = 447,
  [SMALL_STATE(12)] = 494,
  [SMALL_STATE(13)] = 538,
  [SMALL_STATE(14)] = 582,
  [SMALL_STATE(15)] = 626,
  [SMALL_STATE(16)] = 670,
  [SMALL_STATE(17)] = 714,
  [SMALL_STATE(18)] = 737,
  [SMALL_STATE(19)] = 760,
  [SMALL_STATE(20)] = 774,
  [SMALL_STATE(21)] = 788,
  [SMALL_STATE(22)] = 802,
  [SMALL_STATE(23)] = 820,
  [SMALL_STATE(24)] = 838,
  [SMALL_STATE(25)] = 852,
  [SMALL_STATE(26)] = 867,
  [SMALL_STATE(27)] = 882,
  [SMALL_STATE(28)] = 893,
  [SMALL_STATE(29)] = 904,
  [SMALL_STATE(30)] = 915,
  [SMALL_STATE(31)] = 926,
  [SMALL_STATE(32)] = 937,
  [SMALL_STATE(33)] = 948,
  [SMALL_STATE(34)] = 959,
  [SMALL_STATE(35)] = 970,
  [SMALL_STATE(36)] = 981,
  [SMALL_STATE(37)] = 992,
  [SMALL_STATE(38)] = 1003,
  [SMALL_STATE(39)] = 1022,
  [SMALL_STATE(40)] = 1033,
  [SMALL_STATE(41)] = 1044,
  [SMALL_STATE(42)] = 1059,
  [SMALL_STATE(43)] = 1070,
  [SMALL_STATE(44)] = 1084,
  [SMALL_STATE(45)] = 1098,
  [SMALL_STATE(46)] = 1114,
  [SMALL_STATE(47)] = 1124,
  [SMALL_STATE(48)] = 1140,
  [SMALL_STATE(49)] = 1154,
  [SMALL_STATE(50)] = 1168,
  [SMALL_STATE(51)] = 1177,
  [SMALL_STATE(52)] = 1190,
  [SMALL_STATE(53)] = 1203,
  [SMALL_STATE(54)] = 1212,
  [SMALL_STATE(55)] = 1225,
  [SMALL_STATE(56)] = 1238,
  [SMALL_STATE(57)] = 1251,
  [SMALL_STATE(58)] = 1264,
  [SMALL_STATE(59)] = 1275,
  [SMALL_STATE(60)] = 1288,
  [SMALL_STATE(61)] = 1301,
  [SMALL_STATE(62)] = 1312,
  [SMALL_STATE(63)] = 1325,
  [SMALL_STATE(64)] = 1338,
  [SMALL_STATE(65)] = 1347,
  [SMALL_STATE(66)] = 1360,
  [SMALL_STATE(67)] = 1373,
  [SMALL_STATE(68)] = 1382,
  [SMALL_STATE(69)] = 1391,
  [SMALL_STATE(70)] = 1404,
  [SMALL_STATE(71)] = 1417,
  [SMALL_STATE(72)] = 1428,
  [SMALL_STATE(73)] = 1441,
  [SMALL_STATE(74)] = 1454,
  [SMALL_STATE(75)] = 1463,
  [SMALL_STATE(76)] = 1476,
  [SMALL_STATE(77)] = 1484,
  [SMALL_STATE(78)] = 1492,
  [SMALL_STATE(79)] = 1502,
  [SMALL_STATE(80)] = 1512,
  [SMALL_STATE(81)] = 1520,
  [SMALL_STATE(82)] = 1530,
  [SMALL_STATE(83)] = 1538,
  [SMALL_STATE(84)] = 1548,
  [SMALL_STATE(85)] = 1558,
  [SMALL_STATE(86)] = 1566,
  [SMALL_STATE(87)] = 1573,
  [SMALL_STATE(88)] = 1580,
  [SMALL_STATE(89)] = 1587,
  [SMALL_STATE(90)] = 1594,
  [SMALL_STATE(91)] = 1601,
  [SMALL_STATE(92)] = 1608,
  [SMALL_STATE(93)] = 1615,
  [SMALL_STATE(94)] = 1622,
  [SMALL_STATE(95)] = 1629,
  [SMALL_STATE(96)] = 1636,
  [SMALL_STATE(97)] = 1643,
  [SMALL_STATE(98)] = 1650,
  [SMALL_STATE(99)] = 1657,
  [SMALL_STATE(100)] = 1664,
  [SMALL_STATE(101)] = 1671,
  [SMALL_STATE(102)] = 1678,
  [SMALL_STATE(103)] = 1685,
  [SMALL_STATE(104)] = 1692,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_construct_pattern, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_binds, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 2), SHIFT_REPEAT(12),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_pattern, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_construct_pattern, 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_construct_pattern, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 6),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_binds, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_pattern, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(43),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_pattern_repeat1, 2), SHIFT_REPEAT(13),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_pattern_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_clause, 2, .production_id = 4),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2), SHIFT_REPEAT(84),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_export_specifier, 1, .production_id = 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_pattern_repeat1, 2), SHIFT_REPEAT(7),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_pattern_repeat1, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_alias, 3, .production_id = 6),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2, .production_id = 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_export_specifier, 3, .production_id = 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern_rest, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 4, .production_id = 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [282] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 5, .production_id = 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 3, .production_id = 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
