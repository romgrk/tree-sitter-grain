; Variables
;----------

(identifier) @variable

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
;   "=>"
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
 "from"
 "let"
 "rec"
 "mut"
] @keyword
