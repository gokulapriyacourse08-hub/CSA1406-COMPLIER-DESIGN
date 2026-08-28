%{
#include <stdio.h>
%}

%%
[0-9]+    { printf("Integer Constant: %s\n", yytext); }
.|\n      ;
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