/*
 * grammar.js
 */

module.exports = grammar({
  name: 'grain',

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],

  supertypes: $ => [
    // $.statement,
  ],

  inline: $ => [
    $.statement,
    $.expression,
    $.pattern,
    $.primitive,
  ],

  conflicts: $ => [
    [$._value_binds,        $.binary_expr],
    [$.block_or_expression, $._binop_expr],
    [$._value_binds,        $._binop_expr],
    [$.block_or_expression, $._simple_expr],
    [$._value_binds,        $._simple_expr],
  ],

  rules: {

    program: $ => repeat($.statement),

    statement: $ => choice(
      $.import_statement,
      $.let_expr,
    ),

    expression: $ => choice(
      $._binop_expr,
      // FIXME: remove below when parser complete
      $.identifier,
      $.primitive,
    ),

    block_or_expression: $ => choice(
      $.expression,
      // TODO: block
    ),

    _binop_expr: $ => choice(
      $.binary_expr,
      prec.left(140, seq($._binop_expr, ':', $.type)),
      prec.left(0,   $.lambda_expr),
      prec.left(140, $._non_assign_expr),
      // prec.left(0, $._one_sided_if_expr),
      // prec.left(0, $._assign_expr),
    ),

    binary_expr: $ => choice(
      ...[
        ['+',    110],
        ['-',    110],
        ['*',    120],
        ['/',    120],
        ['%',    120],
        ['is',   80],
        ['isnt', 80],
        ['==',   80],
        ['!=',   80],
        ['^',    60],
        ['<',    90],
        ['<<',   100],
        ['>',    90],
        ['>>',   100],
        ['>>>',  100],
        ['<=',   90],
        ['>=',   90],
        ['&',    70],
        ['&&',   40],
        ['|',    50],
        ['||',   30],
        ['++',   110],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $._binop_expr),
          field('operator', operator),
          field('right', $._binop_expr)
        ))
      ),
    ),

    _non_assign_expr: $ => choice(
      $._simple_expr,
    ),

    _simple_expr: $ => choice(
      $.primitive,
      $.identifier,
    ),

    // simple_expr :
    //   | const { Exp.constant ~loc:(symbol_rloc dyp) $1 }
    //   | lparen tuple_exprs rparen { Exp.tuple ~loc:(symbol_rloc dyp) $2 }
    //   | lbrace record_exprs rbrace { Exp.record ~loc:(symbol_rloc dyp) $2 }
    //   | id_expr { $1 }

    // binop_expr :
    //   | binop_expr(<=p110) plus_op eols?      binop_expr(<p110) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p110
    //   | binop_expr(<=p110) dash_op eols?      binop_expr(<p110) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p110
    //   | binop_expr(<=p120) star_op eols?      binop_expr(<p120) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p120
    //   | binop_expr(<=p120) slash_op eols?     binop_expr(<p120) { no_rational_literal $1 $4; Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p120
    //   | binop_expr(<=p120) percent_op eols?   binop_expr(<p120) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p120
    //   | binop_expr(<=p80) is_op eols?        binop_expr(<p80) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p80
    //   | binop_expr(<=p80) isnt_op eols?      binop_expr(<p80) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p80
    //   | binop_expr(<=p80) eqeq_op eols?      binop_expr(<p80) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p80
    //   | binop_expr(<=p80) noteq_op eols?     binop_expr(<p80) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p80
    //   | binop_expr(<=p60) caret_op eols?     binop_expr(<p60) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p60
    //   | binop_expr(<=p90) lcaret_op eols?    binop_expr(<p90) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p90
    //   | binop_expr(<=p100) llcaret_op eols?   binop_expr(<p100) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p100
    //   | binop_expr(<=p90) rcaret_op eols?    binop_expr(<p90) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p90
    //   | binop_expr(<=p100) rrcaret_op eols?   binop_expr(<p100) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p100
    //   | binop_expr(<=p90) rrrcaret_op eols?  binop_expr(<p100) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p100
    //   | binop_expr(<=p90) lesseq_op eols?    binop_expr(<p90) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p90
    //   | binop_expr(<=p90) greatereq_op eols? binop_expr(<p90) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p90
    //   | binop_expr(<=p70) amp_op eols?       binop_expr(<p70) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p70
    //   | binop_expr(<=p40) ampamp_op eols?    binop_expr(<p40) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p40
    //   | binop_expr(<=p50) pipe_op eols?      binop_expr(<p50) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p50
    //   | binop_expr(<=p30) pipepipe_op eols?  binop_expr(<p30) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p30
    //   | binop_expr(<=p110) plusplus_op eols?  binop_expr(<p110) { Exp.apply ~loc:(symbol_rloc dyp) (mkid_expr dyp [$2]) [$1; $4] } p110
    //   | binop_expr colon typ { Exp.constraint_ ~loc:(symbol_rloc dyp) $1 $3 } p140
    //   | lam_expr { $1 } p0
    //   | non_assign_expr { $1 } p140
    //   | one_sided_if_expr { $1 } p10
    //   | assign_expr { $1 } p10

    //
    // Patterns
    //

    // TODO: complete this
    pattern: $ => choice(
      $.underscore,
      $.identifier,
      $.primitive,
      $.tuple_pattern,
      $.array_pattern,
      $.list_pattern,
      $.record_pattern,
      $.construct_pattern,
    ),

    tuple_pattern: $ => seq(
      '(',
      commaSep1($.pattern),
      ')',
    ),

    array_pattern: $ => seq(
      '[>',
      commaSep($.pattern),
      ']',
    ),

    list_pattern: $ => seq(
      '[',
      choice(
        seq(commaSep($.pattern), optional(seq(',', $.list_pattern_rest))),
        optional($.list_pattern_rest),
      ),
      ']',
    ),

    list_pattern_rest: $ => seq('...', $._identifier_or_underscore),

    record_pattern: $ => seq(
      '{',
      commaSep1(choice(
        $.pattern_alias,
        $.pattern,
      )),
      '}',
    ),

    pattern_alias: $ => seq(
      field('key', $.identifier),
      ':',
      field('value', $.pattern),
    ),

    construct_pattern: $ => seq(
      $.type,
      optional(seq(
        '(',
        commaSep1($.pattern),
        ')',
      )),
    ),

    underscore: $ => token('_'),
    _identifier_or_underscore: $ => choice($.identifier, $.underscore),

    //
    // Import declarations
    //

    import_statement: $ => seq(
      'import',
      $.import_clause,
      $._from_clause,
    ),

    import_clause: $ => choice(
      $.namespace_import,
      $.named_imports,
      seq(
        $.identifier,
        optional(seq(
          ',',
          choice(
            $.namespace_import,
            $.named_imports
          )
        ))
      )
    ),

    namespace_import: $ => token('*'),

    named_imports: $ => seq(
      '{',
      commaSep(alias($._import_export_specifier, $.import_specifier)),
      optional(','),
      '}'
    ),

    _from_clause: $ => seq(
      'from', field('source', $.string)
    ),

    _import_export_specifier: $ => seq(
      field('name', $.identifier),
      optional(seq(
        'as',
        field('alias', $.identifier)
      ))
    ),

    //
    // Assignments
    //

    let_expr: $ => seq(
      'let',
      optional('rec'),
      optional('mut'),
      $._value_binds,
    ),

    _value_binds: $ => commaSep1(
      seq(
        $.pattern,
        '=',
        $.expression,
      )
    ),

    //
    // Primitives
    //

    primitive: $ => choice(
      $.true,
      $.false,
      $.void,
      $.number,
      $.string,
      $.char,
    ),

    type: $ => {
      const alpha = /[A-Z]/
      const alphanumeric = /[^\x00-\x1F\s:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      return token(seq(alpha, repeat(alphanumeric)))
    },

    identifier: $ => {
      const alpha = /[^\x00-\x1F\s0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      const alphanumeric = /[^\x00-\x1F\s:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      return token(seq(alpha, repeat(alphanumeric)))
    },

    true: $ => 'true',
    false: $ => 'false',
    void: $ => 'void',

    number: $ => {
      const decimal_digits = /\d+/

      const decimal_literal = choice(
        seq(decimal_digits),
        seq(decimal_digits, '.', optional(decimal_digits)),
      )

      const bigint_literal = seq(decimal_digits, 'n')

      return token(choice(
        decimal_literal,
        bigint_literal,
      ))
    },

    string: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^"\\]+/)),
        $.escape_sequence
      )),
      '"'
    ),

    char: $ => seq(
      "'",
      choice(
        token.immediate(prec(1, /[^'\\]+/)),
        $.escape_sequence
      ),
      "'"
    ),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xu0-7]/,
        /[0-7]{1,3}/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u{[0-9a-fA-F]+}/
      )
    )),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),

    //
    // Lambdas
    //

    lambda_expr: $ => seq(
      choice($._lambda_args, $.identifier),
      '=>',
      $.block_or_expression,
    ),

    _lambda_args: $ => seq(
      '(',
      commaSep($.pattern),
      optional(','),
      ')',
    ),
  }
})

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
