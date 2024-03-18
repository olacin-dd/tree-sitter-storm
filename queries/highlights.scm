; (identifier) @variable
;
; ; Function definitions
; (function_declaration name: (identifier) @function)
;
; ; Function calls
; (function_call
;   function: (deref
;     name: (identifier) @function.call))
;
; ; Builtin functions
; ((function_call
;   function: (deref
;     name: (identifier) @function.builtin
;     (#match? @function.builtin "^\$lib"))))
[
  "not"
  "or"
  "and"
] @operator

[
  "init"
  "empty"
  "fini"
  "function"
  "return"
  "emit"
  "stop"
  "yield"
  "break"
  "continue"
  "for"
  "while"
  "switch"
  "else"
  "elif"
  "if"
  "try"
  "catch"
  "as"
  "reverse"
] @keyword

["(" ")" "{" "}"] @punctuation.bracket

(comment) @comment @spell
