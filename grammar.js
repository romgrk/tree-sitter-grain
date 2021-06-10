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
  ],

  rules: {

    program: $ => repeat($.statement),

    statement: $ => choice(
      $.import_statement,
    ),

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
    // Primitives
    //

    identifier: $ => {
      const alpha = /[^\x00-\x1F\s0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      const alphanumeric = /[^\x00-\x1F\s:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      return token(seq(alpha, repeat(alphanumeric)))
    },

    string: $ => choice(
      seq(
        '"',
        repeat(choice(
          token.immediate(prec(1, /[^"\\]+/)),
          $.escape_sequence
        )),
        '"'
      ),
      seq(
        "'",
        repeat(choice(
          token.immediate(prec(1, /[^'\\]+/)),
          $.escape_sequence
        )),
        "'"
      )
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
