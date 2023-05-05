%{
#include <stdio.h>
#include "y.tab.h"
int yyerror(const char* str);
extern YYSTYPE yylval;
%}
%%

","                          {return COMMA;}
[0-9]*                          {yylval = atoi(yytext); return NUM_LITERAL;}
[0-9]*\.[0-9]*                     {yylval = atoi(yytext); return FLOAT_LITERAL;}
\"[-+*/_a-zA-Z?%$!@`\t\s]+\" {yylval = *yytext; return STR_LITERAL;}
DATA                         {return DATA;}
" "                          {return SPACE;}
%%