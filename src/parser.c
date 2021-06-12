#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  sym_comment = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACK_GT = 5,
  anon_sym_RBRACK = 6,
  anon_sym_LBRACK = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_COLON = 10,
  sym_underscore = 11,
  anon_sym_import = 12,
  sym_namespace_import = 13,
  anon_sym_from = 14,
  anon_sym_as = 15,
  anon_sym_let = 16,
  anon_sym_rec = 17,
  anon_sym_mut = 18,
  anon_sym_EQ = 19,
  sym_type = 20,
  sym_identifier = 21,
  sym_true = 22,
  sym_false = 23,
  sym_void = 24,
  sym_number = 25,
  anon_sym_DQUOTE = 26,
  aux_sym_string_token1 = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_char_token1 = 29,
  sym_escape_sequence = 30,
  sym_program = 31,
  sym_tuple_pattern = 32,
  sym_array_pattern = 33,
  sym_list_pattern = 34,
  sym_record_pattern = 35,
  sym_pattern_alias = 36,
  sym_construct_pattern = 37,
  sym_import_statement = 38,
  sym_import_clause = 39,
  sym_named_imports = 40,
  sym__from_clause = 41,
  sym__import_export_specifier = 42,
  sym_let_expr = 43,
  sym__value_binds = 44,
  sym_string = 45,
  sym_char = 46,
  aux_sym_program_repeat1 = 47,
  aux_sym_tuple_pattern_repeat1 = 48,
  aux_sym_record_pattern_repeat1 = 49,
  aux_sym_named_imports_repeat1 = 50,
  aux_sym__value_binds_repeat1 = 51,
  aux_sym_string_repeat1 = 52,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK_GT] = "[>",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK] = "[",
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
  [sym_record_pattern] = "record_pattern",
  [sym_pattern_alias] = "pattern_alias",
  [sym_construct_pattern] = "construct_pattern",
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

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK_GT] = anon_sym_LBRACK_GT,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
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
  [sym_record_pattern] = sym_record_pattern,
  [sym_pattern_alias] = sym_pattern_alias,
  [sym_construct_pattern] = sym_construct_pattern,
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

static const char *ts_field_names[] = {
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
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == '_') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(22);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(56)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == 'v') ADVANCE(90);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '`' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(96);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == 'v') ADVANCE(90);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '`' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(96);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == 'v') ADVANCE(90);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '`' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(96);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == 'v') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(96);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(111);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(67);
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
          (lookahead < '|' || '~' < lookahead)) ADVANCE(96);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(119);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == '{') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == '{') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == '{') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == '}') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '}') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '}') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == '_') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(22);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(56)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACK_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '>') ADVANCE(63);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_underscore);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_underscore);
      if (lookahead == '\\') ADVANCE(37);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_namespace_import);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == '\\') ADVANCE(37);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_mut);
      if (lookahead == '\\') ADVANCE(37);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\\') ADVANCE(36);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(89);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(77);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'd') ADVANCE(102);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(83);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(98);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(100);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(84);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(92);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(88);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(95);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 's') ADVANCE(87);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 't') ADVANCE(79);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(93);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(86);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(37);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '\\') ADVANCE(37);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '\\') ADVANCE(37);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_void);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_void);
      if (lookahead == '\\') ADVANCE(37);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(112);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(121);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
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
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK_GT] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
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
    [sym_program] = STATE(91),
    [sym_import_statement] = STATE(21),
    [sym_let_expr] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_rec,
    ACTIONS(23), 1,
      anon_sym_mut,
    ACTIONS(25), 1,
      sym_type,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(67), 1,
      sym__value_binds,
    ACTIONS(19), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(90), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [53] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_type,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_mut,
    STATE(65), 1,
      sym__value_binds,
    ACTIONS(19), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(90), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [103] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(37), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(55), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [150] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_type,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      sym__value_binds,
    ACTIONS(19), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(90), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [197] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_type,
    ACTIONS(27), 1,
      sym_number,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(65), 1,
      sym__value_binds,
    ACTIONS(19), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(90), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [244] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(45), 1,
      sym_number,
    ACTIONS(41), 4,
      sym_underscore,
      sym_true,
      sym_false,
      sym_void,
    STATE(51), 8,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_pattern_alias,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [291] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(51), 1,
      sym_number,
    ACTIONS(49), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(53), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [338] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_number,
    ACTIONS(53), 4,
      sym_underscore,
      sym_true,
      sym_false,
      sym_void,
    STATE(78), 8,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_pattern_alias,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [385] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(59), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(58), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [429] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_number,
    ACTIONS(63), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(89), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [473] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      sym_number,
    ACTIONS(67), 5,
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
  [517] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym_number,
    ACTIONS(71), 5,
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
  [561] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(75), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(63), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [605] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      sym_number,
    STATE(41), 2,
      sym_string,
      sym_char,
    ACTIONS(79), 4,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
  [628] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      sym_number,
    STATE(26), 2,
      sym_string,
      sym_char,
    ACTIONS(83), 4,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
  [651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_import,
      anon_sym_let,
      anon_sym_EQ,
  [665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_import,
      anon_sym_let,
      anon_sym_EQ,
  [679] = 2,
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
  [693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [707] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    STATE(22), 3,
      sym_import_statement,
      sym_let_expr,
      aux_sym_program_repeat1,
  [725] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      anon_sym_import,
    ACTIONS(104), 1,
      anon_sym_let,
    STATE(22), 3,
      sym_import_statement,
      sym_let_expr,
      aux_sym_program_repeat1,
  [743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [894] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      sym_namespace_import,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(74), 1,
      sym_import_clause,
    STATE(93), 1,
      sym_named_imports,
  [913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(144), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [939] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 1,
      anon_sym_COLON,
    STATE(47), 1,
      aux_sym_record_pattern_repeat1,
  [955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_tuple_pattern_repeat1,
    ACTIONS(157), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [979] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(48), 1,
      sym__import_export_specifier,
  [995] = 4,
    ACTIONS(167), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym_string_repeat1,
    ACTIONS(171), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1009] = 4,
    ACTIONS(167), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym_string_repeat1,
    ACTIONS(175), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1023] = 4,
    ACTIONS(167), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_string_repeat1,
    ACTIONS(180), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_tuple_pattern_repeat1,
  [1050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_record_pattern_repeat1,
  [1063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_named_imports_repeat1,
  [1076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_named_imports_repeat1,
  [1089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [1098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_record_pattern_repeat1,
  [1111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_tuple_pattern_repeat1,
  [1124] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_tuple_pattern_repeat1,
  [1137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_as,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_tuple_pattern_repeat1,
  [1161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_tuple_pattern_repeat1,
  [1174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_tuple_pattern_repeat1,
  [1187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_tuple_pattern_repeat1,
  [1200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym__import_export_specifier,
  [1213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [1222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_record_pattern_repeat1,
  [1235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [1244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      aux_sym_tuple_pattern_repeat1,
  [1257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(227), 1,
      sym_namespace_import,
    STATE(88), 1,
      sym_named_imports,
  [1270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [1279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_COLON,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [1299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym__import_export_specifier,
  [1312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_named_imports_repeat1,
  [1325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_from,
  [1360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_from,
    STATE(60), 1,
      sym__from_clause,
  [1370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(71), 1,
      sym__import_export_specifier,
  [1380] = 2,
    ACTIONS(167), 1,
      sym_comment,
    ACTIONS(250), 2,
      aux_sym_char_token1,
      sym_escape_sequence,
  [1388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_string,
  [1414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_from,
  [1421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_from,
  [1428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
  [1435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_from,
  [1442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_from,
  [1449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
  [1456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_identifier,
  [1463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_from,
  [1470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_from,
  [1477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_EQ,
  [1484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_EQ,
  [1491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
  [1498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_from,
  [1505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_from,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 103,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 197,
  [SMALL_STATE(7)] = 244,
  [SMALL_STATE(8)] = 291,
  [SMALL_STATE(9)] = 338,
  [SMALL_STATE(10)] = 385,
  [SMALL_STATE(11)] = 429,
  [SMALL_STATE(12)] = 473,
  [SMALL_STATE(13)] = 517,
  [SMALL_STATE(14)] = 561,
  [SMALL_STATE(15)] = 605,
  [SMALL_STATE(16)] = 628,
  [SMALL_STATE(17)] = 651,
  [SMALL_STATE(18)] = 665,
  [SMALL_STATE(19)] = 679,
  [SMALL_STATE(20)] = 693,
  [SMALL_STATE(21)] = 707,
  [SMALL_STATE(22)] = 725,
  [SMALL_STATE(23)] = 743,
  [SMALL_STATE(24)] = 754,
  [SMALL_STATE(25)] = 765,
  [SMALL_STATE(26)] = 776,
  [SMALL_STATE(27)] = 791,
  [SMALL_STATE(28)] = 806,
  [SMALL_STATE(29)] = 817,
  [SMALL_STATE(30)] = 828,
  [SMALL_STATE(31)] = 839,
  [SMALL_STATE(32)] = 850,
  [SMALL_STATE(33)] = 861,
  [SMALL_STATE(34)] = 872,
  [SMALL_STATE(35)] = 883,
  [SMALL_STATE(36)] = 894,
  [SMALL_STATE(37)] = 913,
  [SMALL_STATE(38)] = 928,
  [SMALL_STATE(39)] = 939,
  [SMALL_STATE(40)] = 955,
  [SMALL_STATE(41)] = 969,
  [SMALL_STATE(42)] = 979,
  [SMALL_STATE(43)] = 995,
  [SMALL_STATE(44)] = 1009,
  [SMALL_STATE(45)] = 1023,
  [SMALL_STATE(46)] = 1037,
  [SMALL_STATE(47)] = 1050,
  [SMALL_STATE(48)] = 1063,
  [SMALL_STATE(49)] = 1076,
  [SMALL_STATE(50)] = 1089,
  [SMALL_STATE(51)] = 1098,
  [SMALL_STATE(52)] = 1111,
  [SMALL_STATE(53)] = 1124,
  [SMALL_STATE(54)] = 1137,
  [SMALL_STATE(55)] = 1148,
  [SMALL_STATE(56)] = 1161,
  [SMALL_STATE(57)] = 1174,
  [SMALL_STATE(58)] = 1187,
  [SMALL_STATE(59)] = 1200,
  [SMALL_STATE(60)] = 1213,
  [SMALL_STATE(61)] = 1222,
  [SMALL_STATE(62)] = 1235,
  [SMALL_STATE(63)] = 1244,
  [SMALL_STATE(64)] = 1257,
  [SMALL_STATE(65)] = 1270,
  [SMALL_STATE(66)] = 1279,
  [SMALL_STATE(67)] = 1290,
  [SMALL_STATE(68)] = 1299,
  [SMALL_STATE(69)] = 1312,
  [SMALL_STATE(70)] = 1325,
  [SMALL_STATE(71)] = 1334,
  [SMALL_STATE(72)] = 1342,
  [SMALL_STATE(73)] = 1350,
  [SMALL_STATE(74)] = 1360,
  [SMALL_STATE(75)] = 1370,
  [SMALL_STATE(76)] = 1380,
  [SMALL_STATE(77)] = 1388,
  [SMALL_STATE(78)] = 1396,
  [SMALL_STATE(79)] = 1404,
  [SMALL_STATE(80)] = 1414,
  [SMALL_STATE(81)] = 1421,
  [SMALL_STATE(82)] = 1428,
  [SMALL_STATE(83)] = 1435,
  [SMALL_STATE(84)] = 1442,
  [SMALL_STATE(85)] = 1449,
  [SMALL_STATE(86)] = 1456,
  [SMALL_STATE(87)] = 1463,
  [SMALL_STATE(88)] = 1470,
  [SMALL_STATE(89)] = 1477,
  [SMALL_STATE(90)] = 1484,
  [SMALL_STATE(91)] = 1491,
  [SMALL_STATE(92)] = 1498,
  [SMALL_STATE(93)] = 1505,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_construct_pattern, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_pattern, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_construct_pattern, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_binds, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 2), SHIFT_REPEAT(11),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_pattern, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_construct_pattern, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_binds, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_pattern_repeat1, 2), SHIFT_REPEAT(13),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_pattern_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(44),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_clause, 2, .production_id = 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_export_specifier, 1, .production_id = 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_pattern_repeat1, 2), SHIFT_REPEAT(9),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_pattern_repeat1, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2), SHIFT_REPEAT(75),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2, .production_id = 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_alias, 3, .production_id = 6),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_export_specifier, 3, .production_id = 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 3, .production_id = 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 4, .production_id = 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 5, .production_id = 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [276] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
