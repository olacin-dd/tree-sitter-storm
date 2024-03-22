(variable) @variable

(string) @string
(integer) @number
(float) @number.float

(argument) @variable.parameter
; Function definitions
; (function_declaration name: (identifier) @function)

; ; Function calls
(function_call
    name: (variable) @function.call)
;
; ; Builtin functions
(function_call 
  name: (attribute_reference 
    object: (variable) @highlight
    attribute: (identifier) @function.builtin
    )
  (#eq? @highlight "$lib")
)

; [
;   "not"
;   "or"
;   "and"
; ] @operator

; [
;   "init"
;   "empty"
;   "fini"
;   "function"
;   "return"
;   "emit"
;   "stop"
;   "yield"
;   "break"
;   "continue"
;   "for"
;   "while"
;   "switch"
;   "else"
;   "elif"
;   "if"
;   "try"
;   "catch"
;   "as"
;   "reverse"
; ] @keyword

; ["(" ")" "{" "}" "[" "]"] @punctuation.bracket

(comment) @comment @spell
