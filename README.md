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

DATA_TYPE = ( "weapon" | "playerID" | "team" | "bombSiteID" | "round" );

TEAM_IDENTIFIER = ( "Atk" | "Def" );

WEAPON_IDENTIFIER = ( "Classic" | "Shorty" | "Frenzy" | "Ghost" | "Sheriff" | "Stinger" | "Spectre" | "Bucky" | "Judge" | "Bulldog" | "Guardian" | "Phantom" | "Vandal" | "Marshall" | "Operator" | "Ares" | "Odin" );

BOMB_SITE = ( "A" | "B" );

ROUND_WINNER = ( "Atacantes" | "Defensores" | "Empate" );

DIGIT | ROUND = ( "0" | "1" | "2" | "3" | "4" | "5" | "6" | "7" | "8" | "9" );

LETTER = ( "a" | "b" | "c" | "d" | "e" | "f" | "g" | "h" | "i" | "j" | "k" | "l" | "m" | "n" | "o" | "p" | "q" | "r" | "s" | "t" | "u" | "v" | "w" | "x" | "y" | "z" | "A" | "B" | "C" | "D" | "E" | "F" | "G" | "H" | "I" | "J" | "K" | "L" | "M" | "N" | "O" | "P" | "Q" | "R" | "S" | "T" | "U" | "V" | "W" | "X" | "Y" | "Z" );

ROUND_OUTCOME = ( "vitoria" | "derrota" | "empate" );
```
