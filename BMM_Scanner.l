%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
int yyerror(const char* str);
extern YYSTYPE yylval;
int CurrentState;
int LineNumber;
//function that returns the mapped index of a variable
int VarIndex(char *str);
int SymToType(char* str);
%}

%%

[a-z]                        {CurrentState = 1; yyerror("Error");}
","                          {return COMMA;}
";"                          {return SEMICOLON;}
" "                          {return SPACE;}
^[0-9]*                         {yylval=atoi(yytext); return LINE_NO;}
[0-9]*                          {yylval = atoi(yytext); return NUM_LITERAL;}
[0-9]*\.[0-9]*                     {yylval = atoi(yytext); return FLOAT_LITERAL;}
\"[-+*/_A-Z?%$!@`]+\" {return STR_LITERAL;}
[A-Z][0-9]?\([0-9]+(,[0-9]+)?\)    {yylval = VarIndex(yytext);return DIM_VAR;}
[A-Z][0-9]?                  {yylval = VarIndex(yytext);return VAR_NAME;}
[$#!%]                       {yylval = SymToType(yytext);return TYPE;}
FN[A-Z]                      {return FUN_NAME;}                         
"\n"                         {return ENDL;}
"("                          {return OBRACE;}
")"                          {return CBRACE;}
[-+*/^<>]                    {return *yytext;}
"="                            {return EQ_OP;}
"<>"                         {return RELATIONAL_OP;}
"<="                         {return RELATIONAL_OP;}
">="                         {return RELATIONAL_OP;}
NOT                          {return LOGICAL_OP;}
AND                          {return LOGICAL_OP;}
OR                           {return LOGICAL_OP;} 
XOR                          {return LOGICAL_OP;}
DATA                         {return DATA;}
INPUT                        {return INPUT;}
LET                          {return LET;}
PRINT                        {return PRINT;}
GOTO                         {return GOTO;}
GOSUB                        {return GOSUB;}
REM[^a-z\n]*                 {return REM;}
DEF                          {return DEF;}
DIM                          {return DIM;}
IF                           {return IF;}
THEN                         {return THEN;}
FOR                          {return FOR;}
TO                           {return TO;}
STEP                         {return STEP;}
NEXT                         {return NEXT;}
RETURN                       {return RETURN;}
STOP                         {return STOP;}
END                          {return END;}

%%


//function that returns the mapped index of a variable
int VarIndex(char *str)
{
        int index=0;
        int len = strlen(str);
        if (len==1) {
                index = str-'A';
        } else {
                index = 26*str[1] + 26 + str[0]-'A';
        }
        return index;
}

int SymToType(char *str) {
    if (!strcmp(str,"$")) {return 1;}
    else if (!strcmp(str,"%")) {return 2;}
    else if (!strcmp(str,"#")) {return 4;}
    //else if (!strcmp(str,"!")) {return 3;}
    else return 3;
}