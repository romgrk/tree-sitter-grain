/*
 * grammar.js
 */

module.exports = grammar({
  name: 'grain',

  supertypes: $ => [
    // $.statement,
  ],

  inline: $ => [
    $.statement,
    $.expression,
  ],

  rules: {

    program: $ => repeat($.statement),

    statement: $ => choice(
      $.import_statement,
      $.let_expr,
    ),

    expression: $ => choice(
      $.identifier,
      $.true,
      $.false,
      $.number,
      $.string,
      $.char,
    ),

    //
    // Patterns
    //

    // TODO: complete this
    pattern: $ => choice(
      $.identifier,
      seq(
        '(',
        commaSep1($.identifier),
        ')',
      )
    ),

    // pattern :
    //   | pattern colon typ { Pat.constraint_ ~loc:(symbol_rloc dyp) $1 $3 }
    //   | UNDERSCORE { Pat.any ~loc:(symbol_rloc dyp) () }
    //   | const { Pat.constant ~loc:(symbol_rloc dyp) $1 }
    //   /* If the pattern uses an external ID, we know it's a constructor, not a variable */
    //   | ext_constructor { Pat.construct ~loc:(symbol_rloc dyp) $1 [] }
    //   | [ID | special_id | primitive] { Pat.var ~loc:(symbol_rloc dyp) (mkstr dyp $1) }
    //   | lparen tuple_patterns rparen { Pat.tuple ~loc:(symbol_rloc dyp) $2 }
    //   | lbrack rcaret patterns rbrack { Pat.array ~loc:(symbol_rloc dyp) $3 }
    //   | lbrack rcaret rbrack { Pat.array ~loc:(symbol_rloc dyp) [] }
    //   | lparen pattern rparen { $2 }
    //   | lbrace record_patterns rbrace { Pat.record ~loc:(symbol_rloc dyp) $2 }
    //   | type_id lparen patterns rparen { Pat.construct ~loc:(symbol_rloc dyp) $1 $3 }
    //   | type_id { Pat.construct ~loc:(symbol_rloc dyp) $1 [] }
    //   | lbrack patterns [comma ELLIPSIS any_or_var_pat {$3}]? rbrack { Pat.list ~loc:(symbol_rloc dyp) $2 $3 }
    //   | lbrack [ELLIPSIS any_or_var_pat {$2}]? rbrack { Pat.list ~loc:(symbol_rloc dyp) [] $2 }

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

    identifier: $ => {
      const alpha = /[^\x00-\x1F\s0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      const alphanumeric = /[^\x00-\x1F\s:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      return token(seq(alpha, repeat(alphanumeric)))
    },

    true: $ => 'true',
    false: $ => 'false',

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

  }
})

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
