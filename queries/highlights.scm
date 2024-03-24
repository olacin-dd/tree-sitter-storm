(variable) @variable

; Global variables
(variable
   name: (identifier) @variable.builtin
  (#any-of? @variable.builtin
    "lib"
    "node"
    "path"
    "tag"
    "rows"
))

(string) @string
(integer) @number
(float) @number.float

; Function definitions
(function_definition
  name: (identifier) @function)

; ; Function calls
(function_call
  name: (variable) @function.call)

(argument) @variable.parameter

; Builtin functions
; (function_call 
;   name: (attribute_reference 
;     object: (variable) @module
;     attribute: (identifier) @function.call
;     )
;   (#eq? @module "$lib")
; )
(function_call
  name: (selector_expression
    attribute: (identifier) @function.method
  )
)

; Operators

[
  "$"
] @operator

; Keywords

[
 "function"
] @keyword.function

[
  "return"
] @keyword.return

; Loop-related keywords

[
  "break"
  "continue"
] @keyword.repeat

; ["(" ")" "{" "}" "[" "]"] @punctuation.bracket

(comment) @comment @spell
