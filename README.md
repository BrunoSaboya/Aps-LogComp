# vava-golang

---

Produzido por: Bruno Boldrim Saboya

---

# EBNF

```bash

PROGRAM = "You_want_to_play?_Let’s_play", BLOCK, "GEGE";

LOOP = "round", BOOLEAN_EXPRESSION, { ROUND_STATEMENT };

ROUND_STATEMENT = ( FUNCTION_CALL | VARIABLES_DECLARATION | OPERATIONS );

VARIABLES_DECLARATION = IDENTIFIER, "::", DATA_TYPE, "known_as", IDENTIFIER;

FUNCTIONS_DECLARATION = "IDENTIFIER(ARGUMENTS) {ROUND_STATEMENTS};"

ARGUMENT = IDENTIFIER | DIGIT | BOOLEAN | ANY;

CONDITIONAL = "if", "(" BOOLEAN_EXPRESSION, ")", "{", BLOCK, "},", [ "else", "{", BLOCK, "}," ];

BLOCK = "{", { STATEMENT, "," }, "}";

BOOLEAN_EXPRESSION = IDENTIFIER, ("==", | "!=", | ">", | "<", | ">=", | "<="), IDENTIFIER;

ARITHMETIC_EXPRESSION = EXPRESSION, ("+", | "-", | "*", | "/"), EXPRESSION;

IDENTIFIER = LETTER, { LETTER | DIGIT | "_" };

```
