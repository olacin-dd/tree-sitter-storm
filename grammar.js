module.exports = grammar({
  name: "storm",

  word: $ => $._identifier,

  rules: {
    _identifier: _ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: _ => token(choice(
      seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '*/',
      ),
    )),

    try_set: _ => "?=",

    or: _ => "or",
    and: _ => "and",

  }
})
