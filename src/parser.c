#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 168
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 9
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
  anon_sym_TODO = 34,
  anon_sym_foreign = 35,
  anon_sym_wasm = 36,
  anon_sym_as = 37,
  anon_sym_from = 38,
  anon_sym_import = 39,
  anon_sym_export = 40,
  anon_sym_let = 41,
  anon_sym_rec = 42,
  anon_sym_mut = 43,
  anon_sym_EQ = 44,
  sym_type = 45,
  sym_identifier = 46,
  sym_attribute = 47,
  sym_true = 48,
  sym_false = 49,
  sym_void = 50,
  sym_number = 51,
  anon_sym_DQUOTE = 52,
  aux_sym_string_token1 = 53,
  anon_sym_SQUOTE = 54,
  aux_sym_char_token1 = 55,
  sym_escape_sequence = 56,
  sym_comment = 57,
  anon_sym_EQ_GT = 58,
  sym_program = 59,
  sym_block_or_expression = 60,
  sym__binop_expr = 61,
  sym_binary_expr = 62,
  sym__non_assign_expr = 63,
  sym__simple_expr = 64,
  sym_tuple_pattern = 65,
  sym_array_pattern = 66,
  sym_list_pattern = 67,
  sym_list_pattern_rest = 68,
  sym_record_pattern = 69,
  sym_pattern_alias = 70,
  sym_construct_pattern = 71,
  sym__identifier_or_underscore = 72,
  sym_typing = 73,
  sym_foreign_statement = 74,
  sym_import_statement = 75,
  sym_import_clause = 76,
  sym_namespace_import = 77,
  sym_named_imports = 78,
  sym__from_clause = 79,
  sym__import_export_specifier = 80,
  sym_export_statement = 81,
  sym_let_expr = 82,
  sym__value_binds = 83,
  sym_string = 84,
  sym_char = 85,
  sym_lambda_expr = 86,
  sym__lambda_args = 87,
  aux_sym_program_repeat1 = 88,
  aux_sym_tuple_pattern_repeat1 = 89,
  aux_sym_record_pattern_repeat1 = 90,
  aux_sym_named_imports_repeat1 = 91,
  aux_sym__value_binds_repeat1 = 92,
  aux_sym_attributes_repeat1 = 93,
  aux_sym_string_repeat1 = 94,
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
  [anon_sym_TODO] = "TODO",
  [anon_sym_foreign] = "foreign",
  [anon_sym_wasm] = "wasm",
  [anon_sym_as] = "as",
  [anon_sym_from] = "from",
  [anon_sym_import] = "import",
  [anon_sym_export] = "export",
  [anon_sym_let] = "let",
  [anon_sym_rec] = "rec",
  [anon_sym_mut] = "mut",
  [anon_sym_EQ] = "=",
  [sym_type] = "type",
  [sym_identifier] = "identifier",
  [sym_attribute] = "attribute",
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
  [sym_typing] = "typing",
  [sym_foreign_statement] = "foreign_statement",
  [sym_import_statement] = "import_statement",
  [sym_import_clause] = "import_clause",
  [sym_namespace_import] = "namespace_import",
  [sym_named_imports] = "named_imports",
  [sym__from_clause] = "_from_clause",
  [sym__import_export_specifier] = "import_specifier",
  [sym_export_statement] = "export_statement",
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
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
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
  [anon_sym_TODO] = anon_sym_TODO,
  [anon_sym_foreign] = anon_sym_foreign,
  [anon_sym_wasm] = anon_sym_wasm,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_rec] = anon_sym_rec,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_type] = sym_type,
  [sym_identifier] = sym_identifier,
  [sym_attribute] = sym_attribute,
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
  [sym_typing] = sym_typing,
  [sym_foreign_statement] = sym_foreign_statement,
  [sym_import_statement] = sym_import_statement,
  [sym_import_clause] = sym_import_clause,
  [sym_namespace_import] = sym_namespace_import,
  [sym_named_imports] = sym_named_imports,
  [sym__from_clause] = sym__from_clause,
  [sym__import_export_specifier] = sym__import_export_specifier,
  [sym_export_statement] = sym_export_statement,
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
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
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
  [anon_sym_TODO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wasm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
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
  [sym_attribute] = {
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
  [sym_typing] = {
    .visible = true,
    .named = true,
  },
  [sym_foreign_statement] = {
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
  [sym_export_statement] = {
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
  [aux_sym_attributes_repeat1] = {
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

static inline bool sym_attribute_character_set_1(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(90);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '&') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(180);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(92);
      if (lookahead == ',') ADVANCE(115);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(18);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == ']') ADVANCE(118);
      if (lookahead == '^') ADVANCE(101);
      if (lookahead == '_') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'v') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(22);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(87)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '\'') ADVANCE(180);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == ',') ADVANCE(115);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == ']') ADVANCE(118);
      if (lookahead == '_') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == 'v') ADVANCE(154);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '`' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(162);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '\'') ADVANCE(180);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '_') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == 'v') ADVANCE(154);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '`' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(162);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '\'') ADVANCE(180);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '_') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == 'v') ADVANCE(154);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '`' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(162);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '\'') ADVANCE(180);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == 'v') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(162);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(178);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == '{') ADVANCE(121);
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
          (lookahead < '|' || '~' < lookahead)) ADVANCE(162);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(191);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ',') ADVANCE(115);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(162);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(120);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '_') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(13)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(162);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(186);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '>') ADVANCE(192);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(125);
      END_STATE();
    case 20:
      if (lookahead == '\\') ADVANCE(59);
      if (!sym_attribute_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(189);
      if (lookahead != 0) ADVANCE(187);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 63:
      if (lookahead == '{') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == '{') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 65:
      if (lookahead == '{') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 66:
      if (lookahead == '{') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 67:
      if (lookahead == '}') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '}') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == '}') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == '}') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 87:
      if (eof) ADVANCE(90);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '&') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(180);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(92);
      if (lookahead == ',') ADVANCE(115);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(18);
      if (lookahead == '[') ADVANCE(119);
      if (lookahead == ']') ADVANCE(118);
      if (lookahead == '^') ADVANCE(101);
      if (lookahead == '_') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'v') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(22);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(87)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 88:
      if (eof) ADVANCE(90);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '&') ADVANCE(109);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(92);
      if (lookahead == ',') ADVANCE(115);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == ']') ADVANCE(118);
      if (lookahead == '^') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(88)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 89:
      if (eof) ADVANCE(90);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(96);
      if (lookahead == '&') ADVANCE(109);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(92);
      if (lookahead == ',') ADVANCE(115);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '^') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(89)
      END_STATE();
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(113);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(191);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_isnt);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '>') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACK_GT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '>') ADVANCE(117);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_underscore);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_underscore);
      if (lookahead == '\\') ADVANCE(61);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\\') ADVANCE(61);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_wasm);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_rec);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_rec);
      if (lookahead == '\\') ADVANCE(61);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_mut);
      if (lookahead == '\\') ADVANCE(61);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '>') ADVANCE(192);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == '\\') ADVANCE(60);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'a') ADVANCE(152);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'c') ADVANCE(135);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(169);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(165);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(167);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(143);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(151);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'g') ADVANCE(153);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(144);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(149);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(158);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(127);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(150);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(157);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(160);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(148);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 's') ADVANCE(146);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 't') ADVANCE(137);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(145);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(159);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(61);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_attribute);
      if (lookahead == '\\') ADVANCE(59);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '\\') ADVANCE(61);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '\\') ADVANCE(61);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_void);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_void);
      if (lookahead == '\\') ADVANCE(61);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(179);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\n') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(184);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(186);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(187);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(188);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 88},
  [3] = {.lex_state = 88},
  [4] = {.lex_state = 88},
  [5] = {.lex_state = 89},
  [6] = {.lex_state = 89},
  [7] = {.lex_state = 89},
  [8] = {.lex_state = 89},
  [9] = {.lex_state = 89},
  [10] = {.lex_state = 89},
  [11] = {.lex_state = 89},
  [12] = {.lex_state = 89},
  [13] = {.lex_state = 89},
  [14] = {.lex_state = 89},
  [15] = {.lex_state = 89},
  [16] = {.lex_state = 89},
  [17] = {.lex_state = 89},
  [18] = {.lex_state = 89},
  [19] = {.lex_state = 89},
  [20] = {.lex_state = 89},
  [21] = {.lex_state = 89},
  [22] = {.lex_state = 89},
  [23] = {.lex_state = 89},
  [24] = {.lex_state = 89},
  [25] = {.lex_state = 89},
  [26] = {.lex_state = 89},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
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
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 88},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 89},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 89},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 89},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 89},
  [163] = {.lex_state = 89},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
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
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_foreign] = ACTIONS(1),
    [anon_sym_wasm] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_rec] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_attribute] = ACTIONS(1),
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
    [sym_program] = STATE(156),
    [sym_import_statement] = STATE(58),
    [sym_export_statement] = STATE(58),
    [sym_let_expr] = STATE(58),
    [aux_sym_program_repeat1] = STATE(58),
    [aux_sym_attributes_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [sym_attribute] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
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
    ACTIONS(15), 24,
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
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [41] = 3,
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
    ACTIONS(19), 24,
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
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [82] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 9,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_EQ,
    ACTIONS(23), 24,
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
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [123] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_COMMA,
    ACTIONS(37), 1,
      anon_sym_EQ_GT,
    STATE(62), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
    ACTIONS(32), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(30), 15,
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
  [170] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_is,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(65), 1,
      anon_sym_AMP,
    ACTIONS(67), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(63), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 3,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_EQ_GT,
    ACTIONS(32), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(30), 21,
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
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_EQ_GT,
    ACTIONS(78), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(75), 21,
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
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [322] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
    ACTIONS(32), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(30), 15,
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
  [366] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_EQ_GT,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
    ACTIONS(32), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(30), 15,
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
  [408] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(59), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(86), 5,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(84), 14,
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
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [459] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(63), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(86), 3,
      anon_sym_is,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(84), 12,
      ts_builtin_sym_end,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
    ACTIONS(32), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(30), 15,
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
  [553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(88), 21,
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
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [590] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(86), 7,
      anon_sym_PLUS,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(84), 18,
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
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(86), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(84), 20,
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
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(92), 21,
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
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [709] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_is,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(65), 1,
      anon_sym_AMP,
    ACTIONS(67), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(63), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 3,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 8,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(75), 21,
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
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [813] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_is,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(65), 1,
      anon_sym_AMP,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(63), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 3,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(84), 9,
      ts_builtin_sym_end,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [874] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_is,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(65), 1,
      anon_sym_AMP,
    ACTIONS(67), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(63), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 3,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [941] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(86), 6,
      anon_sym_is,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(84), 16,
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
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [988] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_is,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(63), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(86), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(53), 3,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(84), 9,
      ts_builtin_sym_end,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [1047] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_is,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(65), 1,
      anon_sym_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(63), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 3,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(84), 8,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [1110] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_is,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(65), 1,
      anon_sym_AMP,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(63), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 3,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(84), 8,
      ts_builtin_sym_end,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [1173] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(43), 1,
      anon_sym_PLUS,
    ACTIONS(49), 1,
      anon_sym_SLASH,
    ACTIONS(51), 1,
      anon_sym_is,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(65), 1,
      anon_sym_AMP,
    ACTIONS(67), 1,
      anon_sym_AMP_AMP,
    ACTIONS(69), 1,
      anon_sym_PIPE,
    ACTIONS(45), 2,
      anon_sym_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(63), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 3,
      anon_sym_isnt,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(84), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [1238] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(118), 1,
      sym_number,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    STATE(141), 1,
      sym_list_pattern_rest,
    ACTIONS(114), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(102), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1294] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      anon_sym_rec,
    ACTIONS(128), 1,
      anon_sym_mut,
    ACTIONS(130), 1,
      sym_number,
    STATE(68), 1,
      sym__value_binds,
    ACTIONS(124), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(158), 7,
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
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      sym_number,
    STATE(142), 1,
      sym_list_pattern_rest,
    ACTIONS(132), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(111), 7,
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
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      sym_number,
    ACTIONS(136), 1,
      anon_sym_mut,
    STATE(73), 1,
      sym__value_binds,
    ACTIONS(124), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(158), 7,
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
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      sym_number,
    STATE(145), 1,
      sym_list_pattern_rest,
    ACTIONS(132), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(111), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1497] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(144), 1,
      sym_number,
    ACTIONS(142), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(109), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1547] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      sym_number,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    ACTIONS(132), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(111), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1594] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
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
    STATE(134), 8,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_pattern_alias,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1641] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      sym_number,
    STATE(73), 1,
      sym__value_binds,
    ACTIONS(124), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(158), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1688] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(158), 1,
      sym_number,
    ACTIONS(154), 4,
      sym_underscore,
      sym_true,
      sym_false,
      sym_void,
    STATE(106), 8,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_pattern_alias,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1735] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    ACTIONS(164), 1,
      sym_number,
    ACTIONS(162), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(97), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1782] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      sym_number,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(132), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(111), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1829] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      sym_number,
    STATE(83), 1,
      sym__value_binds,
    ACTIONS(124), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(158), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1876] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      sym_number,
    ACTIONS(132), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(111), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [1920] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(170), 1,
      sym_number,
    ACTIONS(168), 5,
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
  [1964] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(174), 1,
      sym_number,
    ACTIONS(172), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(110), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [2008] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(178), 1,
      sym_number,
    ACTIONS(176), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(115), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [2052] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_LBRACK_GT,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      sym_type,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(182), 1,
      sym_number,
    ACTIONS(180), 5,
      sym_underscore,
      sym_identifier,
      sym_true,
      sym_false,
      sym_void,
    STATE(140), 7,
      sym_tuple_pattern,
      sym_array_pattern,
      sym_list_pattern,
      sym_record_pattern,
      sym_construct_pattern,
      sym_string,
      sym_char,
  [2096] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_number,
    STATE(17), 1,
      sym_block_or_expression,
    STATE(155), 1,
      sym__lambda_args,
    STATE(19), 2,
      sym_string,
      sym_char,
    ACTIONS(188), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(21), 5,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_lambda_expr,
  [2137] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(196), 1,
      sym_number,
    STATE(155), 1,
      sym__lambda_args,
    ACTIONS(194), 3,
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
  [2173] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(200), 1,
      sym_number,
    STATE(155), 1,
      sym__lambda_args,
    ACTIONS(198), 3,
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
  [2209] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym_number,
    STATE(155), 1,
      sym__lambda_args,
    STATE(9), 2,
      sym_string,
      sym_char,
    ACTIONS(204), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(6), 5,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_lambda_expr,
  [2247] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_number,
    STATE(155), 1,
      sym__lambda_args,
    ACTIONS(208), 3,
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
  [2283] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_number,
    STATE(155), 1,
      sym__lambda_args,
    ACTIONS(212), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(16), 7,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_string,
      sym_char,
      sym_lambda_expr,
  [2319] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      sym_identifier,
    ACTIONS(220), 1,
      sym_number,
    STATE(155), 1,
      sym__lambda_args,
    STATE(13), 2,
      sym_string,
      sym_char,
    ACTIONS(218), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(18), 5,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_lambda_expr,
  [2357] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym_number,
    STATE(155), 1,
      sym__lambda_args,
    ACTIONS(222), 3,
      sym_true,
      sym_false,
      sym_void,
    STATE(12), 7,
      sym__binop_expr,
      sym_binary_expr,
      sym__non_assign_expr,
      sym__simple_expr,
      sym_string,
      sym_char,
      sym_lambda_expr,
  [2393] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(228), 1,
      sym_number,
    STATE(155), 1,
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
  [2429] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_number,
    STATE(155), 1,
      sym__lambda_args,
    ACTIONS(230), 3,
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
  [2465] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(236), 1,
      sym_number,
    STATE(155), 1,
      sym__lambda_args,
    ACTIONS(234), 3,
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
  [2501] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(240), 1,
      sym_number,
    STATE(155), 1,
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
  [2537] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(244), 1,
      sym_number,
    STATE(155), 1,
      sym__lambda_args,
    ACTIONS(242), 3,
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
  [2573] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(13), 1,
      sym_attribute,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    STATE(100), 1,
      aux_sym_attributes_repeat1,
    STATE(59), 4,
      sym_import_statement,
      sym_export_statement,
      sym_let_expr,
      aux_sym_program_repeat1,
  [2601] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 1,
      anon_sym_import,
    ACTIONS(253), 1,
      anon_sym_export,
    ACTIONS(256), 1,
      anon_sym_let,
    ACTIONS(259), 1,
      sym_attribute,
    STATE(100), 1,
      aux_sym_attributes_repeat1,
    STATE(59), 4,
      sym_import_statement,
      sym_export_statement,
      sym_let_expr,
      aux_sym_program_repeat1,
  [2629] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    ACTIONS(266), 1,
      anon_sym_foreign,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(81), 1,
      sym_foreign_statement,
    STATE(131), 1,
      sym_import_clause,
    STATE(159), 2,
      sym_namespace_import,
      sym_named_imports,
  [2655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(270), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [2672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym__value_binds_repeat1,
    ACTIONS(275), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [2689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [2725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [2747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [2758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [2791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [2813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [2857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [2890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [2901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [2923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_let,
      sym_attribute,
  [2945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_EQ,
  [2967] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    ACTIONS(333), 1,
      sym_identifier,
    STATE(113), 1,
      sym__import_export_specifier,
  [2983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_tuple_pattern_repeat1,
    ACTIONS(338), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2997] = 4,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      sym_comment,
    STATE(90), 1,
      aux_sym_string_repeat1,
    ACTIONS(342), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [3011] = 4,
    ACTIONS(345), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    STATE(90), 1,
      aux_sym_string_repeat1,
    ACTIONS(349), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [3025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    STATE(149), 2,
      sym_namespace_import,
      sym_named_imports,
  [3039] = 4,
    ACTIONS(345), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      aux_sym_string_repeat1,
    ACTIONS(353), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [3053] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COLON,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      aux_sym_record_pattern_repeat1,
  [3069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(361), 1,
      anon_sym_foreign,
    STATE(65), 2,
      sym_foreign_statement,
      sym_let_expr,
  [3083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(153), 1,
      sym__identifier_or_underscore,
    ACTIONS(363), 2,
      sym_underscore,
      sym_identifier,
  [3094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      aux_sym_tuple_pattern_repeat1,
  [3107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym__import_export_specifier,
  [3120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym__import_export_specifier,
  [3133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_export,
    ACTIONS(375), 1,
      sym_attribute,
    STATE(119), 1,
      aux_sym_attributes_repeat1,
  [3146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_tuple_pattern_repeat1,
  [3159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      aux_sym_tuple_pattern_repeat1,
  [3172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COLON,
    ACTIONS(383), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      aux_sym_named_imports_repeat1,
  [3196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_record_pattern_repeat1,
  [3209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      aux_sym_record_pattern_repeat1,
  [3222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_as,
    ACTIONS(393), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      aux_sym_named_imports_repeat1,
  [3246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_tuple_pattern_repeat1,
  [3259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_tuple_pattern_repeat1,
  [3272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_tuple_pattern_repeat1,
  [3294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      aux_sym_named_imports_repeat1,
  [3307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_tuple_pattern_repeat1,
  [3320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_tuple_pattern_repeat1,
  [3333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_tuple_pattern_repeat1,
  [3346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      aux_sym_record_pattern_repeat1,
  [3359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    ACTIONS(423), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_tuple_pattern_repeat1,
  [3372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_export,
    ACTIONS(427), 1,
      sym_attribute,
    STATE(119), 1,
      aux_sym_attributes_repeat1,
  [3385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_let,
    STATE(80), 1,
      sym_let_expr,
  [3411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_string,
  [3421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_string,
  [3431] = 2,
    ACTIONS(345), 1,
      sym_comment,
    ACTIONS(434), 2,
      aux_sym_char_token1,
      sym_escape_sequence,
  [3439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym_identifier,
    STATE(121), 1,
      sym__import_export_specifier,
  [3457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_as,
      anon_sym_from,
  [3465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_as,
    ACTIONS(442), 1,
      anon_sym_from,
  [3475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_TODO,
    STATE(129), 1,
      sym_typing,
  [3485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_from,
    STATE(77), 1,
      sym__from_clause,
  [3495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(152), 1,
      sym_list_pattern_rest,
  [3505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      anon_sym_from,
  [3515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      sym_string,
  [3533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      sym_type,
  [3540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym_identifier,
  [3547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_from,
  [3554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_SQUOTE,
  [3561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_EQ,
  [3568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
  [3575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
  [3582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_from,
  [3589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_EQ_GT,
  [3596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
  [3603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_from,
  [3610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_identifier,
  [3617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_COLON,
  [3624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_from,
  [3631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_from,
  [3638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
  [3645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_RBRACK,
  [3652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
  [3659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym_identifier,
  [3666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_EQ_GT,
  [3673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
  [3680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_EQ_GT,
  [3687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_EQ,
  [3694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_from,
  [3701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_from,
  [3708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_from,
  [3715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_EQ_GT,
  [3722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_EQ_GT,
  [3729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_wasm,
  [3736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_from,
  [3743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
  [3750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_from,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 170,
  [SMALL_STATE(7)] = 242,
  [SMALL_STATE(8)] = 282,
  [SMALL_STATE(9)] = 322,
  [SMALL_STATE(10)] = 366,
  [SMALL_STATE(11)] = 408,
  [SMALL_STATE(12)] = 459,
  [SMALL_STATE(13)] = 514,
  [SMALL_STATE(14)] = 553,
  [SMALL_STATE(15)] = 590,
  [SMALL_STATE(16)] = 633,
  [SMALL_STATE(17)] = 672,
  [SMALL_STATE(18)] = 709,
  [SMALL_STATE(19)] = 776,
  [SMALL_STATE(20)] = 813,
  [SMALL_STATE(21)] = 874,
  [SMALL_STATE(22)] = 941,
  [SMALL_STATE(23)] = 988,
  [SMALL_STATE(24)] = 1047,
  [SMALL_STATE(25)] = 1110,
  [SMALL_STATE(26)] = 1173,
  [SMALL_STATE(27)] = 1238,
  [SMALL_STATE(28)] = 1294,
  [SMALL_STATE(29)] = 1347,
  [SMALL_STATE(30)] = 1397,
  [SMALL_STATE(31)] = 1447,
  [SMALL_STATE(32)] = 1497,
  [SMALL_STATE(33)] = 1547,
  [SMALL_STATE(34)] = 1594,
  [SMALL_STATE(35)] = 1641,
  [SMALL_STATE(36)] = 1688,
  [SMALL_STATE(37)] = 1735,
  [SMALL_STATE(38)] = 1782,
  [SMALL_STATE(39)] = 1829,
  [SMALL_STATE(40)] = 1876,
  [SMALL_STATE(41)] = 1920,
  [SMALL_STATE(42)] = 1964,
  [SMALL_STATE(43)] = 2008,
  [SMALL_STATE(44)] = 2052,
  [SMALL_STATE(45)] = 2096,
  [SMALL_STATE(46)] = 2137,
  [SMALL_STATE(47)] = 2173,
  [SMALL_STATE(48)] = 2209,
  [SMALL_STATE(49)] = 2247,
  [SMALL_STATE(50)] = 2283,
  [SMALL_STATE(51)] = 2319,
  [SMALL_STATE(52)] = 2357,
  [SMALL_STATE(53)] = 2393,
  [SMALL_STATE(54)] = 2429,
  [SMALL_STATE(55)] = 2465,
  [SMALL_STATE(56)] = 2501,
  [SMALL_STATE(57)] = 2537,
  [SMALL_STATE(58)] = 2573,
  [SMALL_STATE(59)] = 2601,
  [SMALL_STATE(60)] = 2629,
  [SMALL_STATE(61)] = 2655,
  [SMALL_STATE(62)] = 2672,
  [SMALL_STATE(63)] = 2689,
  [SMALL_STATE(64)] = 2703,
  [SMALL_STATE(65)] = 2714,
  [SMALL_STATE(66)] = 2725,
  [SMALL_STATE(67)] = 2736,
  [SMALL_STATE(68)] = 2747,
  [SMALL_STATE(69)] = 2758,
  [SMALL_STATE(70)] = 2769,
  [SMALL_STATE(71)] = 2780,
  [SMALL_STATE(72)] = 2791,
  [SMALL_STATE(73)] = 2802,
  [SMALL_STATE(74)] = 2813,
  [SMALL_STATE(75)] = 2824,
  [SMALL_STATE(76)] = 2835,
  [SMALL_STATE(77)] = 2846,
  [SMALL_STATE(78)] = 2857,
  [SMALL_STATE(79)] = 2868,
  [SMALL_STATE(80)] = 2879,
  [SMALL_STATE(81)] = 2890,
  [SMALL_STATE(82)] = 2901,
  [SMALL_STATE(83)] = 2912,
  [SMALL_STATE(84)] = 2923,
  [SMALL_STATE(85)] = 2934,
  [SMALL_STATE(86)] = 2945,
  [SMALL_STATE(87)] = 2956,
  [SMALL_STATE(88)] = 2967,
  [SMALL_STATE(89)] = 2983,
  [SMALL_STATE(90)] = 2997,
  [SMALL_STATE(91)] = 3011,
  [SMALL_STATE(92)] = 3025,
  [SMALL_STATE(93)] = 3039,
  [SMALL_STATE(94)] = 3053,
  [SMALL_STATE(95)] = 3069,
  [SMALL_STATE(96)] = 3083,
  [SMALL_STATE(97)] = 3094,
  [SMALL_STATE(98)] = 3107,
  [SMALL_STATE(99)] = 3120,
  [SMALL_STATE(100)] = 3133,
  [SMALL_STATE(101)] = 3146,
  [SMALL_STATE(102)] = 3159,
  [SMALL_STATE(103)] = 3172,
  [SMALL_STATE(104)] = 3183,
  [SMALL_STATE(105)] = 3196,
  [SMALL_STATE(106)] = 3209,
  [SMALL_STATE(107)] = 3222,
  [SMALL_STATE(108)] = 3233,
  [SMALL_STATE(109)] = 3246,
  [SMALL_STATE(110)] = 3259,
  [SMALL_STATE(111)] = 3272,
  [SMALL_STATE(112)] = 3281,
  [SMALL_STATE(113)] = 3294,
  [SMALL_STATE(114)] = 3307,
  [SMALL_STATE(115)] = 3320,
  [SMALL_STATE(116)] = 3333,
  [SMALL_STATE(117)] = 3346,
  [SMALL_STATE(118)] = 3359,
  [SMALL_STATE(119)] = 3372,
  [SMALL_STATE(120)] = 3385,
  [SMALL_STATE(121)] = 3393,
  [SMALL_STATE(122)] = 3401,
  [SMALL_STATE(123)] = 3411,
  [SMALL_STATE(124)] = 3421,
  [SMALL_STATE(125)] = 3431,
  [SMALL_STATE(126)] = 3439,
  [SMALL_STATE(127)] = 3447,
  [SMALL_STATE(128)] = 3457,
  [SMALL_STATE(129)] = 3465,
  [SMALL_STATE(130)] = 3475,
  [SMALL_STATE(131)] = 3485,
  [SMALL_STATE(132)] = 3495,
  [SMALL_STATE(133)] = 3505,
  [SMALL_STATE(134)] = 3515,
  [SMALL_STATE(135)] = 3523,
  [SMALL_STATE(136)] = 3533,
  [SMALL_STATE(137)] = 3540,
  [SMALL_STATE(138)] = 3547,
  [SMALL_STATE(139)] = 3554,
  [SMALL_STATE(140)] = 3561,
  [SMALL_STATE(141)] = 3568,
  [SMALL_STATE(142)] = 3575,
  [SMALL_STATE(143)] = 3582,
  [SMALL_STATE(144)] = 3589,
  [SMALL_STATE(145)] = 3596,
  [SMALL_STATE(146)] = 3603,
  [SMALL_STATE(147)] = 3610,
  [SMALL_STATE(148)] = 3617,
  [SMALL_STATE(149)] = 3624,
  [SMALL_STATE(150)] = 3631,
  [SMALL_STATE(151)] = 3638,
  [SMALL_STATE(152)] = 3645,
  [SMALL_STATE(153)] = 3652,
  [SMALL_STATE(154)] = 3659,
  [SMALL_STATE(155)] = 3666,
  [SMALL_STATE(156)] = 3673,
  [SMALL_STATE(157)] = 3680,
  [SMALL_STATE(158)] = 3687,
  [SMALL_STATE(159)] = 3694,
  [SMALL_STATE(160)] = 3701,
  [SMALL_STATE(161)] = 3708,
  [SMALL_STATE(162)] = 3715,
  [SMALL_STATE(163)] = 3722,
  [SMALL_STATE(164)] = 3729,
  [SMALL_STATE(165)] = 3736,
  [SMALL_STATE(166)] = 3743,
  [SMALL_STATE(167)] = 3750,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__simple_expr, 1), REDUCE(sym__value_binds, 3),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expr, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expr, 1),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__simple_expr, 1), SHIFT(44),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_binds, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_block_or_expression, 1), REDUCE(sym__simple_expr, 1),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block_or_expression, 1), REDUCE(sym__simple_expr, 1),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__simple_expr, 1), REDUCE(aux_sym__value_binds_repeat1, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 7),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 7),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binop_expr, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binop_expr, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expr, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expr, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_or_expression, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(60),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(95),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(100),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__value_binds_repeat1, 2), SHIFT_REPEAT(44),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value_binds, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_construct_pattern, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_construct_pattern, 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_construct_pattern, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_clause, 2, .production_id = 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_statement, 9),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_pattern, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_pattern, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, .production_id = 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 6),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 5),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_statement, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_expr, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_statement, 7),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_pattern, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_pattern, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_pattern_repeat1, 2), SHIFT_REPEAT(40),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_pattern_repeat1, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(90),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_pattern_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2), SHIFT_REPEAT(127),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_pattern_repeat1, 2), SHIFT_REPEAT(34),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_export_specifier, 1, .production_id = 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(119),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_alias, 3, .production_id = 6),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_imports_repeat1, 2, .production_id = 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_export_specifier, 3, .production_id = 5),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 3, .production_id = 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lambda_args, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 5, .production_id = 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_clause, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern_rest, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [486] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lambda_args, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_imports, 4, .production_id = 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lambda_args, 5),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lambda_args, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_import, 1),
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
