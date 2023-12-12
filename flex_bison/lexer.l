%{
#include "parser.tab.h"
%}

%%

int                           { return T_INTEGER_TYPE; }
string                        { return T_STRING_TYPE; }
var                           { return T_VAR; }
=                             { return T_ASSIGN; }
if                            { return T_IF; }
else                          { return T_ELSE; }
for                           { return T_LOOP; }
or                            { return T_OR; }
and                           { return T_AND; }
dot                           { return T_DOT}
mundial                       { return T_MUNDIAL; }
corinthinas                   { return T_CORINTHIANS; }
palmeiras                     { return T_PALMEIRAS; }
tite                          { return T_TITE; }
dulio                         { return T_DUILIO; }
renato                        { return T_RENATO; }
menezes                       { return T_MENEZES; }
not                           { return T_NOT; }

True                          { return T_TRUE; }
False                         { return T_FALSE; }

[a-zA-Z_][a-zA-Z_0-9]*        { return T_IDENTIFIER; }

\"([^\\\"]|\\(.|\n)|[@#$%^&*()_+{}[\]|:;'<>,.?/!~-])*\" { return T_STRING; }

[0-9]+                        { return T_NUMBER; }

.                             { return T_NEW_SENTENCE; }

\n                            { /* handle new lines */ }

[ \t\r]+                      { /* ignore extra whitespace */ }

%%