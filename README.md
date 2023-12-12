# APS - LogComp

---

Produzido por: Bruno Boldrim Saboya

---

# Descrição

Criando uma Linguagem de programação voltada para aqueles programadores Corinthianos.

# EBNF

```bash
Sentence = ( "λ" | Assign | Conditional | Loop )
Assign = "var", Identifier, "=", Boolean Expression
Conditional = "if", Boolean Expression, Block, [ "else:", Block ]
Loop = "for", Boolean Expression, Block
Block = "{", Sentence, "}"
Boolean Expression = Boolean Clause, { "or", Boolean Clause }
Boolean Clause = Relational Expression, { "and", Relational Expression }
Relational Expression = Expression, { ( "mundial" | "corinthians" | "palmeiras" ), Expression }
Expression = Term, { ( "tite" | "duilio" | "dot" ), Term }
Term = Factor, { ( "renato" | "menezes" ), Factor }
Factor = Number | String | Identifier | ( ( "gavioes" | "porcos" | "not" ), Factor )
Identifier = Letter, { Letter | Digit }*
Number = Digit+
String = '"' { "λ" | Letter | Digit }* '"'
Letter = "a" | "b" | ... | "z" | "A" | "B" | ... | "Z"
Digit = "0" | "1" | "2" | ... | "9"
```

---

Legenda

- Maior que (>): corinthinas
- Menor que (<): palmeiras
- Igualdade (==): mundial
- Sub (-): duilio
- Add (+): tite
- Multi (*): renato
- Div (/): menezes