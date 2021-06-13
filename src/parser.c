#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 149
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_COLON = 1,
  anon_sym_PLUS = 2,
  anon_sym_DASH = 3,
  anon_sym_STAR = 4,
  anon_sym_SLASH = 5,
  anon_sym_PERCENT = 6,
  anon_sym_is = 7,
  anon_sym_isnt = 8,
  anon_sym_EQ_EQ = 9,
  anon_sym_BANG_EQ = 10,
  anon_sym_CARET = 11,
  anon_sym_LT = 12,
  anon_sym_LT_LT = 13,
  anon_sym_GT = 14,
  anon_sym_GT_GT = 15,
  anon_sym_GT_GT_GT = 16,
  anon_sym_LT_EQ = 17,
  anon_sym_GT_EQ = 18,
  anon_sym_AMP = 19,
  anon_sym_AMP_AMP = 20,
  anon_sym_PIPE = 21,
  anon_sym_PIPE_PIPE = 22,
  anon_sym_PLUS_PLUS = 23,
  anon_sym_LPAREN = 24,
  anon_sym_COMMA = 25,
  anon_sym_RPAREN = 26,
  anon_sym_LBRACK_GT = 27,
  anon_sym_RBRACK = 28,
  anon_sym_LBRACK = 29,
  anon_sym_DOT_DOT_DOT = 30,
  anon_sym_LBRACE = 31,
  anon_sym_RBRACE = 32,
  sym_underscore = 33,
  anon_sym_import = 34,
  anon_sym_from = 35,
  anon_sym_as = 36,
  anon_sym_let = 37,
  anon_sym_rec = 38,
  anon_sym_mut = 39,
  anon_sym_EQ = 40,
  sym_type = 41,
  sym_identifier = 42,
  sym_true = 43,
  sym_false = 44,
  sym_void = 45,
  sym_number = 46,
  anon_sym_DQUOTE = 47,
  aux_sym_string_token1 = 48,
  anon_sym_SQUOTE = 49,
  aux_sym_char_token1 = 50,
  sym_escape_sequence = 51,
  sym_comment = 52,
  anon_sym_EQ_GT = 53,
  sym_program = 54,
  sym_block_or_expression = 55,
  sym__binop_expr = 56,
  sym_binary_expr = 57,
  sym__non_assign_expr = 58,
  sym__simple_expr = 59,
  sym_tuple_pattern = 60,
  sym_array_pattern = 61,
  sym_list_pattern = 62,
  sym_list_pattern_rest = 63,
  sym_record_pattern = 64,
  sym_pattern_alias = 65,
  sym_construct_pattern = 66,
  sym__identifier_or_underscore = 67,
  sym_import_statement = 68,
  sym_import_clause = 69,
  sym_namespace_import = 70,
  sym_named_imports = 71,
  sym__from_clause = 72,
  sym__import_export_specifier = 73,
  sym_let_expr = 74,
  sym__value_binds = 75,
  sym_string = 76,
  sym_char = 77,
  sym_lambda_expr = 78,
  sym__lambda_args = 79,
  aux_sym_program_repeat1 = 80,
  aux_sym_tuple_pattern_repeat1 = 81,
  aux_sym_record_pattern_repeat1 = 82,
  aux_sym_named_imports_repeat1 = 83,
  aux_sym__value_binds_repeat1 = 84,
  aux_sym_string_repeat1 = 85,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_is] = "is",
  [anon_sym_isnt] = "isnt",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_CARET] = "^",
  [anon_sym_LT] = "<",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT] = ">",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP] = "&",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK_GT] = "[>",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK] = "[",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_underscore] = "underscore",
  [anon_sym_import] = "import",
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
  [sym_comment] = "comment",
  [anon_sym_EQ_GT] = "=>",
  [sym_program] = "program",
  [sym_block_or_expression] = "block_or_expression",
  [sym__binop_expr] = "_binop_expr",
  [sym_binary_expr] = "binary_expr",
  [sym__non_assign_expr] = "_non_assign_expr",
  [sym__simple_expr] = "_simple_expr",
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
  [sym_namespace_import] = "namespace_import",
  [sym_named_imports] = "named_imports",
  [sym__from_clause] = "_from_clause",
  [sym__import_export_specifier] = "import_specifier",
  [sym_let_expr] = "let_expr",
  [sym__value_binds] = "_value_binds",
  [sym_string] = "string",
  [sym_char] = "char",
  [sym_lambda_expr] = "lambda_expr",
  [sym__lambda_args] = "_lambda_args",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_tuple_pattern_repeat1] = "tuple_pattern_repeat1",
  [aux_sym_record_pattern_repeat1] = "record_pattern_repeat1",
  [aux_sym_named_imports_repeat1] = "named_imports_repeat1",
  [aux_sym__value_binds_repeat1] = "_value_binds_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_isnt] = anon_sym_isnt,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK_GT] = anon_sym_LBRACK_GT,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_underscore] = sym_underscore,
  [anon_sym_import] = anon_sym_import,
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
  [sym_comment] = sym_comment,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [sym_program] = sym_program,
  [sym_block_or_expression] = sym_block_or_expression,
  [sym__binop_expr] = sym__binop_expr,
  [sym_binary_expr] = sym_binary_expr,
  [sym__non_assign_expr] = sym__non_assign_expr,
  [sym__simple_expr] = sym__simple_expr,
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
  [sym_namespace_import] = sym_namespace_import,
  [sym_named_imports] = sym_named_imports,
  [sym__from_clause] = sym__from_clause,
  [sym__import_export_specifier] = sym__import_export_specifier,
  [sym_let_expr] = sym_let_expr,
  [sym__value_binds] = sym__value_binds,
  [sym_string] = sym_string,
  [sym_char] = sym_char,
  [sym_lambda_expr] = sym_lambda_expr,
  [sym__lambda_args] = sym__lambda_args,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isnt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
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
  [sym_underscore] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_import] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_block_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__binop_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__non_assign_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_expr] = {
    .visible = false,
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
  [sym_namespace_import] = {
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
  [sym_lambda_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__lambda_args] = {
    .visible = false,
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
  field_left = 3,
  field_name = 4,
  field_operator = 5,
  field_right = 6,
  field_source = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_key] = "key",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
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
  [7] = {.index = 9, .length = 3},
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
  [9] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
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
      if (eof) ADVANCE(65);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '&') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(93);
      if (lookahead == '^') ADVANCE(76);
      if (lookahead == '_') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'v') ADVANCE(27);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead == '|') ADVANCE(86);
      if (lookahead == '}') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(62)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(111);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(93);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(120);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead == '}') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '`' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(126);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(120);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '`' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(126);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(120);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '`' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(126);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'v') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(126);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(141);
      if (lookahead != 0) ADVANCE(142);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead == '}') ADVANCE(97);
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
          (lookahead < '|' || '~' < lookahead)) ADVANCE(126);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(154);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(95);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '_') ADVANCE(99);
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
          (lookahead < '{' || '~' < lookahead)) ADVANCE(126);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(149);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(155);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == '{') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == '{') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == '{') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == '}') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '}') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '}') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 62:
      if (eof) ADVANCE(65);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '&') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == ']') ADVANCE(93);
      if (lookahead == '^') ADVANCE(76);
      if (lookahead == '_') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'v') ADVANCE(27);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead == '|') ADVANCE(86);
      if (lookahead == '}') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(62)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(111);
      END_STATE();
    case 63:
      if (eof) ADVANCE(65);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '&') ADVANCE(84);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == ']') ADVANCE(93);
      if (lookahead == '^') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == '|') ADVANCE(86);
      if (lookahead == '}') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(63)
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '&') ADVANCE(84);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '^') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == '|') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(64)
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(88);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(154);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_isnt);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACK_GT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '>') ADVANCE(92);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_underscore);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_underscore);
      if (lookahead == '\\') ADVANCE(43);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == '\\') ADVANCE(43);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_mut);
      if (lookahead == '\\') ADVANCE(43);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(155);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\\') ADVANCE(42);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'a') ADVANCE(119);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'c') ADVANCE(105);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(132);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(128);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(130);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(113);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(114);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(122);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(118);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(124);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 's') ADVANCE(116);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 't') ADVANCE(107);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(115);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(123);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(43);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '\\') ADVANCE(43);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '\\') ADVANCE(43);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_void);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_void);
      if (lookahead == '\\') ADVANCE(43);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(142);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(139);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\n') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 63},
  [3] = {.lex_state = 63},
  [4] = {.lex_state = 63},
  [5] = {.lex_state = 64},
  [6] = {.lex_state = 64},
  [7] = {.lex_state = 64},
  [8] = {.lex_state = 64},
  [9] = {.lex_state = 64},
  [10] = {.lex_state = 64},
  [11] = {.lex_state = 64},
  [12] = {.lex_state = 64},
  [13] = {.lex_state = 64},
  [14] = {.lex_state = 64},
  [15] = {.lex_state = 64},
  [16] = {.lex_state = 64},
  [17] = {.lex_state = 64},
  [18] = {.lex_state = 64},
  [19] = {.lex_state = 64},
  [20] = {.lex_state = 64},
  [21] = {.lex_state = 64},
  [22] = {.lex_state = 64},
  [23] = {.lex_state = 64},
  [24] = {.lex_state = 64},
  [25] = {.lex_state = 64},
  [26] = {.lex_state = 64},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 64},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 64},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 64},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 64},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 64},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_isnt] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK_GT] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_underscore] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(130),
    [sym_import_statement] = STATE(59),
    [sym_let_expr] = STATE(59),
    [aux_sym_program_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 9,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(11), 22,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_import,
      anon_sym_let,
  [39] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 9,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(15), 22,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_import,
      anon_sym_let,
  [78] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 9,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(19), 22,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_import,
      anon_sym_let,
  [117] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      anon_sym_EQ_GT,
    STATE(74), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
    ACTIONS(28), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(26), 15,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
  [162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_EQ_GT,
    ACTIONS(28), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(26), 19,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [200] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_is,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(61), 1,
      anon_sym_AMP,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(59), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
    ACTIONS(49), 3,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_EQ_GT,
    ACTIONS(74), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(71), 19,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [308] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
    ACTIONS(28), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(26), 15,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
  [350] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_EQ_GT,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
    ACTIONS(28), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(26), 15,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
  [390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON,
    ACTIONS(82), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(80), 18,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(84), 19,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [462] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(59), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(82), 3,
      anon_sym_is,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(80), 10,
      ts_builtin_sym_end,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
    ACTIONS(28), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(26), 15,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
  [552] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(82), 7,
      anon_sym_PLUS,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(80), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [593] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_is,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(61), 1,
      anon_sym_AMP,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(59), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(49), 3,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(71), 19,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(90), 19,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS_PLUS,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [728] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_is,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(61), 1,
      anon_sym_AMP,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(67), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(59), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(49), 3,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [793] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_is,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(61), 1,
      anon_sym_AMP,
    ACTIONS(63), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(59), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(49), 3,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [856] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_is,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(61), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      anon_sym_PIPE,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(59), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(49), 3,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(80), 6,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [917] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_is,
    ACTIONS(51), 1,
      anon_sym_CARET,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(61), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(59), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(49), 3,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(80), 6,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [978] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_is,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(59), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(82), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(49), 3,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [1035] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(82), 6,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(80), 14,
      ts_builtin_sym_end,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [1080] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(82), 5,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(80), 12,
      ts_builtin_sym_end,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [1129] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_COLON,
    ACTIONS(39), 1,
      anon_sym_PLUS,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    ACTIONS(47), 1,
      anon_sym_is,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(61), 1,
      anon_sym_AMP,
    ACTIONS(82), 1,
      anon_sym_PIPE,
    ACTIONS(41), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(43), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(59), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(49), 3,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_let,
  [1188] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(114), 1,
      sym_number,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    STATE(129), 1,
      sym_list_pattern_rest,
    ACTIONS(110), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(100), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1244] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      anon_sym_rec,
    ACTIONS(124), 1,
      anon_sym_mut,
    ACTIONS(126), 1,
      sym_number,
    STATE(87), 1,
      sym__value_binds,
    ACTIONS(120), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(143), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1297] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    ACTIONS(134), 1,
      sym_number,
    ACTIONS(132), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(98), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1347] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      sym_number,
    STATE(141), 1,
      sym_list_pattern_rest,
    ACTIONS(136), 5,
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
  [1397] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      sym_number,
    STATE(140), 1,
      sym_list_pattern_rest,
    ACTIONS(136), 5,
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
  [1447] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      sym_number,
    ACTIONS(140), 1,
      anon_sym_mut,
    STATE(101), 1,
      sym__value_binds,
    ACTIONS(120), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(143), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1497] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(144), 1,
      sym_identifier,
    ACTIONS(146), 1,
      sym_number,
    ACTIONS(142), 4,
      sym_underscore,
      sym_true,
      sym_false,
      sym_void,
    STATE(118), 8,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_pattern_alias,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1544] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      sym_number,
    STATE(101), 1,
      sym__value_binds,
    ACTIONS(120), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(143), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1591] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(152), 1,
      sym_number,
    ACTIONS(148), 4,
      sym_underscore,
      sym_true,
      sym_false,
      sym_void,
    STATE(85), 8,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_pattern_alias,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1638] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    ACTIONS(158), 1,
      sym_number,
    ACTIONS(156), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(96), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1685] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      sym_number,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(136), 5,
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
  [1732] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      sym_number,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(136), 5,
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
  [1779] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      sym_number,
    STATE(104), 1,
      sym__value_binds,
    ACTIONS(120), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(143), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1826] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym_number,
    ACTIONS(164), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(95), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1870] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      sym_number,
    ACTIONS(136), 5,
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
  [1914] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(170), 1,
      sym_number,
    ACTIONS(168), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(103), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1958] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(174), 1,
      sym_number,
    ACTIONS(172), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(122), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [2002] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      sym_type,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(178), 1,
      sym_number,
    ACTIONS(176), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(120), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [2046] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(186), 1,
      sym_number,
    STATE(18), 1,
      sym_block_or_expression,
    STATE(124), 1,
      sym__lambda_args,
    STATE(17), 2,
      sym_string,
      sym_char,
    ACTIONS(184), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(19), 5,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_lambda_expr,
  [2087] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(192), 1,
      sym_number,
    STATE(124), 1,
      sym__lambda_args,
    ACTIONS(190), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(26), 7,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_string,
      sym_char,
      sym_lambda_expr,
  [2123] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(196), 1,
      sym_number,
    STATE(124), 1,
      sym__lambda_args,
    ACTIONS(194), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(13), 7,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_string,
      sym_char,
      sym_lambda_expr,
  [2159] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(202), 1,
      sym_number,
    STATE(124), 1,
      sym__lambda_args,
    STATE(9), 2,
      sym_string,
      sym_char,
    ACTIONS(200), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(7), 5,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_lambda_expr,
  [2197] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(208), 1,
      sym_number,
    STATE(124), 1,
      sym__lambda_args,
    STATE(14), 2,
      sym_string,
      sym_char,
    ACTIONS(206), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(16), 5,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_lambda_expr,
  [2235] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym_number,
    STATE(124), 1,
      sym__lambda_args,
    ACTIONS(210), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(20), 7,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_string,
      sym_char,
      sym_lambda_expr,
  [2271] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(216), 1,
      sym_number,
    STATE(124), 1,
      sym__lambda_args,
    ACTIONS(214), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(21), 7,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_string,
      sym_char,
      sym_lambda_expr,
  [2307] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(220), 1,
      sym_number,
    STATE(124), 1,
      sym__lambda_args,
    ACTIONS(218), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(15), 7,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_string,
      sym_char,
      sym_lambda_expr,
  [2343] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym_number,
    STATE(124), 1,
      sym__lambda_args,
    ACTIONS(222), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(11), 7,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_string,
      sym_char,
      sym_lambda_expr,
  [2379] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(228), 1,
      sym_number,
    STATE(124), 1,
      sym__lambda_args,
    ACTIONS(226), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(22), 7,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_string,
      sym_char,
      sym_lambda_expr,
  [2415] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_number,
    STATE(124), 1,
      sym__lambda_args,
    ACTIONS(230), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(23), 7,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_string,
      sym_char,
      sym_lambda_expr,
  [2451] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(236), 1,
      sym_number,
    STATE(124), 1,
      sym__lambda_args,
    ACTIONS(234), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(24), 7,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_string,
      sym_char,
      sym_lambda_expr,
  [2487] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(240), 1,
      sym_number,
    STATE(124), 1,
      sym__lambda_args,
    ACTIONS(238), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(25), 7,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_string,
      sym_char,
      sym_lambda_expr,
  [2523] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_STAR,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(116), 1,
      sym_import_clause,
    STATE(144), 2,
      sym_namespace_import,
      sym_named_imports,
  [2543] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(61), 3,
      sym_import_statement,
      sym_let_expr,
      aux_sym_program_repeat1,
  [2561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2575] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      anon_sym_import,
    ACTIONS(259), 1,
      anon_sym_let,
    STATE(61), 3,
      sym_import_statement,
      sym_let_expr,
      aux_sym_program_repeat1,
  [2593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(280), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [2707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(289), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [2744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2777] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_COLON,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      aux_sym_record_pattern_repeat1,
  [2793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_tuple_pattern_repeat1,
    ACTIONS(306), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2807] = 4,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_string_repeat1,
    ACTIONS(310), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [2821] = 4,
    ACTIONS(313), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      aux_sym_string_repeat1,
    ACTIONS(317), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [2835] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(90), 1,
      sym__import_export_specifier,
  [2851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_STAR,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    STATE(135), 2,
      sym_namespace_import,
      sym_named_imports,
  [2865] = 4,
    ACTIONS(313), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      aux_sym_string_repeat1,
    ACTIONS(327), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [2879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      aux_sym_record_pattern_repeat1,
  [2892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [2901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [2910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      sym__import_export_specifier,
  [2923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_as,
    ACTIONS(335), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      aux_sym_named_imports_repeat1,
  [2947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [2956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_COLON,
    ACTIONS(345), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_named_imports_repeat1,
  [2980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym_record_pattern_repeat1,
  [2993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_tuple_pattern_repeat1,
  [3006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      aux_sym_tuple_pattern_repeat1,
  [3019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(134), 1,
      sym__identifier_or_underscore,
    ACTIONS(361), 2,
      sym_underscore,
      sym_identifier,
  [3030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_tuple_pattern_repeat1,
  [3043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_tuple_pattern_repeat1,
  [3065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [3074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      sym__import_export_specifier,
  [3087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_tuple_pattern_repeat1,
  [3100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_let,
  [3109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_tuple_pattern_repeat1,
  [3122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      aux_sym_record_pattern_repeat1,
  [3135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_tuple_pattern_repeat1,
  [3148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_named_imports_repeat1,
  [3161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_tuple_pattern_repeat1,
  [3174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_tuple_pattern_repeat1,
  [3187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_tuple_pattern_repeat1,
  [3200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym_identifier,
    STATE(114), 1,
      sym__import_export_specifier,
  [3210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(403), 1,
      anon_sym_from,
  [3236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_from,
    STATE(91), 1,
      sym__from_clause,
  [3246] = 2,
    ACTIONS(313), 1,
      sym_comment,
    ACTIONS(407), 2,
      aux_sym_char_token1,
      sym_escape_sequence,
  [3254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_string,
  [3272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(146), 1,
      sym_list_pattern_rest,
  [3290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_EQ,
  [3297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_from,
  [3304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_EQ_GT,
  [3311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_identifier,
  [3318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_from,
  [3325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_SQUOTE,
  [3332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_type,
  [3339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
  [3346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      ts_builtin_sym_end,
  [3353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_from,
  [3360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_EQ_GT,
  [3367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
  [3374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_RBRACK,
  [3381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_from,
  [3388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_EQ_GT,
  [3395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_from,
  [3402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_from,
  [3409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
  [3416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_RBRACK,
  [3423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_RBRACK,
  [3430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_EQ_GT,
  [3437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_EQ,
  [3444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_from,
  [3451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_EQ_GT,
  [3458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
  [3465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_from,
  [3472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_from,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 162,
  [SMALL_STATE(7)] = 200,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 308,
  [SMALL_STATE(10)] = 350,
  [SMALL_STATE(11)] = 390,
  [SMALL_STATE(12)] = 427,
  [SMALL_STATE(13)] = 462,
  [SMALL_STATE(14)] = 515,
  [SMALL_STATE(15)] = 552,
  [SMALL_STATE(16)] = 593,
  [SMALL_STATE(17)] = 658,
  [SMALL_STATE(18)] = 693,
  [SMALL_STATE(19)] = 728,
  [SMALL_STATE(20)] = 793,
  [SMALL_STATE(21)] = 856,
  [SMALL_STATE(22)] = 917,
  [SMALL_STATE(23)] = 978,
  [SMALL_STATE(24)] = 1035,
  [SMALL_STATE(25)] = 1080,
  [SMALL_STATE(26)] = 1129,
  [SMALL_STATE(27)] = 1188,
  [SMALL_STATE(28)] = 1244,
  [SMALL_STATE(29)] = 1297,
  [SMALL_STATE(30)] = 1347,
  [SMALL_STATE(31)] = 1397,
  [SMALL_STATE(32)] = 1447,
  [SMALL_STATE(33)] = 1497,
  [SMALL_STATE(34)] = 1544,
  [SMALL_STATE(35)] = 1591,
  [SMALL_STATE(36)] = 1638,
  [SMALL_STATE(37)] = 1685,
  [SMALL_STATE(38)] = 1732,
  [SMALL_STATE(39)] = 1779,
  [SMALL_STATE(40)] = 1826,
  [SMALL_STATE(41)] = 1870,
  [SMALL_STATE(42)] = 1914,
  [SMALL_STATE(43)] = 1958,
  [SMALL_STATE(44)] = 2002,
  [SMALL_STATE(45)] = 2046,
  [SMALL_STATE(46)] = 2087,
  [SMALL_STATE(47)] = 2123,
  [SMALL_STATE(48)] = 2159,
  [SMALL_STATE(49)] = 2197,
  [SMALL_STATE(50)] = 2235,
  [SMALL_STATE(51)] = 2271,
  [SMALL_STATE(52)] = 2307,
  [SMALL_STATE(53)] = 2343,
  [SMALL_STATE(54)] = 2379,
  [SMALL_STATE(55)] = 2415,
  [SMALL_STATE(56)] = 2451,
  [SMALL_STATE(57)] = 2487,
  [SMALL_STATE(58)] = 2523,
  [SMALL_STATE(59)] = 2543,
  [SMALL_STATE(60)] = 2561,
  [SMALL_STATE(61)] = 2575,
  [SMALL_STATE(62)] = 2593,
  [SMALL_STATE(63)] = 2604,
  [SMALL_STATE(64)] = 2615,
  [SMALL_STATE(65)] = 2626,
  [SMALL_STATE(66)] = 2637,
  [SMALL_STATE(67)] = 2648,
  [SMALL_STATE(68)] = 2659,
  [SMALL_STATE(69)] = 2670,
  [SMALL_STATE(70)] = 2681,
  [SMALL_STATE(71)] = 2692,
  [SMALL_STATE(72)] = 2707,
  [SMALL_STATE(73)] = 2718,
  [SMALL_STATE(74)] = 2729,
  [SMALL_STATE(75)] = 2744,
  [SMALL_STATE(76)] = 2755,
  [SMALL_STATE(77)] = 2766,
  [SMALL_STATE(78)] = 2777,
  [SMALL_STATE(79)] = 2793,
  [SMALL_STATE(80)] = 2807,
  [SMALL_STATE(81)] = 2821,
  [SMALL_STATE(82)] = 2835,
  [SMALL_STATE(83)] = 2851,
  [SMALL_STATE(84)] = 2865,
  [SMALL_STATE(85)] = 2879,
  [SMALL_STATE(86)] = 2892,
  [SMALL_STATE(87)] = 2901,
  [SMALL_STATE(88)] = 2910,
  [SMALL_STATE(89)] = 2923,
  [SMALL_STATE(90)] = 2934,
  [SMALL_STATE(91)] = 2947,
  [SMALL_STATE(92)] = 2956,
  [SMALL_STATE(93)] = 2967,
  [SMALL_STATE(94)] = 2980,
  [SMALL_STATE(95)] = 2993,
  [SMALL_STATE(96)] = 3006,
  [SMALL_STATE(97)] = 3019,
  [SMALL_STATE(98)] = 3030,
  [SMALL_STATE(99)] = 3043,
  [SMALL_STATE(100)] = 3052,
  [SMALL_STATE(101)] = 3065,
  [SMALL_STATE(102)] = 3074,
  [SMALL_STATE(103)] = 3087,
  [SMALL_STATE(104)] = 3100,
  [SMALL_STATE(105)] = 3109,
  [SMALL_STATE(106)] = 3122,
  [SMALL_STATE(107)] = 3135,
  [SMALL_STATE(108)] = 3148,
  [SMALL_STATE(109)] = 3161,
  [SMALL_STATE(110)] = 3174,
  [SMALL_STATE(111)] = 3187,
  [SMALL_STATE(112)] = 3200,
  [SMALL_STATE(113)] = 3210,
  [SMALL_STATE(114)] = 3218,
  [SMALL_STATE(115)] = 3226,
  [SMALL_STATE(116)] = 3236,
  [SMALL_STATE(117)] = 3246,
  [SMALL_STATE(118)] = 3254,
  [SMALL_STATE(119)] = 3262,
  [SMALL_STATE(120)] = 3272,
  [SMALL_STATE(121)] = 3280,
  [SMALL_STATE(122)] = 3290,
  [SMALL_STATE(123)] = 3297,
  [SMALL_STATE(124)] = 3304,
  [SMALL_STATE(125)] = 3311,
  [SMALL_STATE(126)] = 3318,
  [SMALL_STATE(127)] = 3325,
  [SMALL_STATE(128)] = 3332,
  [SMALL_STATE(129)] = 3339,
  [SMALL_STATE(130)] = 3346,
  [SMALL_STATE(131)] = 3353,
  [SMALL_STATE(132)] = 3360,
  [SMALL_STATE(133)] = 3367,
  [SMALL_STATE(134)] = 3374,
  [SMALL_STATE(135)] = 3381,
  [SMALL_STATE(136)] = 3388,
  [SMALL_STATE(137)] = 3395,
  [SMALL_STATE(138)] = 3402,
  [SMALL_STATE(139)] = 3409,
  [SMALL_STATE(140)] = 3416,
  [SMALL_STATE(141)] = 3423,
  [SMALL_STATE(142)] = 3430,
  [SMALL_STATE(143)] = 3437,
  [SMALL_STATE(144)] = 3444,
  [SMALL_STATE(145)] = 3451,
  [SMALL_STATE(146)] = 3458,
  [SMALL_STATE(147)] = 3465,
  [SMALL_STATE(148)] = 3472,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__simple_expr, 1), REDUCE(sym__value_binds, 3),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expr, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expr, 1),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__simple_expr, 1), SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_binds, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_block_or_expression, 1), REDUCE(sym__simple_expr, 1),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block_or_expression, 1), REDUCE(sym__simple_expr, 1),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__simple_expr, 1), REDUCE(aux_sym__value_binds_repeat1, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 7),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 7),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binop_expr, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binop_expr, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expr, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expr, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_or_expression, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_construct_pattern, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(58),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_pattern, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_construct_pattern, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_pattern, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 5),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_construct_pattern, 5),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 2),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 2), SHIFT_REPEAT(43),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_binds, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 6),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_pattern_repeat1, 2), SHIFT_REPEAT(41),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_pattern_repeat1, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(80),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_clause, 2, .production_id = 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_export_specifier, 1, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_pattern_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2), SHIFT_REPEAT(112),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_pattern_repeat1, 2), SHIFT_REPEAT(33),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_export_specifier, 3, .production_id = 5),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2, .production_id = 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_alias, 3, .production_id = 6),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 3, .production_id = 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [423] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 5, .production_id = 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lambda_args, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern_rest, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lambda_args, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 4, .production_id = 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lambda_args, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lambda_args, 5),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_import, 1),
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
