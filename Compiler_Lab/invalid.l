%{
#include <stdio.h>
%}

%%
[0-9][a-zA-Z0-9_]* {
    printf("Invalid Identifier: %s\n", yytext);
}

[a-zA-Z_][a-zA-Z0-9_]* {
    printf("Valid Identifier: %s\n", yytext);
}

[ \t\n]+ ;
. ;

%%

int yywrap()
{
    return 1;
}

int main()
{
    yylex();
    return 0;
}