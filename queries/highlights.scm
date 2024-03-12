(identifier) @variable

; Function definitions
(function_declaration name: (identifier) @function)

; Function calls
(function_call
  function: (deref
    name: (identifier) @function.call))

; Builtin functions
((function_call
  function: (deref
    name: (identifier) @function.builtin
    (#match? @function.builtin "^\$lib"))))

[
 "function"
] @keyword

["(" ")" "{" "}"] @punctuation.bracket

(comment) @comment @spell
