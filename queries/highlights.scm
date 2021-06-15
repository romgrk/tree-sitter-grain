; Types
;------

((identifier) @type
  (#match? @type "^[A-Z]"))

; Variables
;----------

(identifier) @variable

; Attributes
;----------

(attribute) @function.special

; Literals
;---------

[
  (true)
  (false)
  (void)
] @constant.builtin

(comment) @comment

[
  (string)
  (char)
] @string

(number) @number

; Tokens
;-------

; [
;   ";"
;   "?."
;   "."
;   ","
; ] @punctuation.delimiter

[
;   "-"
;   "--"
;   "-="
;   "+"
;   "++"
;   "+="
;   "*"
;   "*="
;   "**"
;   "**="
;   "/"
;   "/="
;   "%"
;   "%="
;   "<"
;   "<="
;   "<<"
;   "<<="
  "="
;   "=="
;   "==="
;   "!"
;   "!="
;   "!=="
  "=>"
;   ">"
;   ">="
;   ">>"
;   ">>="
;   ">>>"
;   ">>>="
;   "~"
;   "^"
;   "&"
;   "|"
;   "^="
;   "&="
;   "|="
;   "&&"
;   "||"
;   "??"
;   "&&="
;   "||="
;   "??="
] @operator

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
]  @punctuation.bracket

[
 "import"
 "export"
 "from"
 "let"
 "rec"
 "mut"
] @keyword
