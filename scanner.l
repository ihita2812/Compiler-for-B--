%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
int CurrentState;
int LineNumber;
//function that returns the mapped index of a variable 
int VarIndex(char *str);
int SymToType(char* str);
void yyerror(char* str);
FILE *yyin;

%}

%option noyywrap

%%

","                          {printf("  COMMA");}
";"                          {printf("  SEMICOLON");}
" "                          {printf("  SPACE");}
^[0-9][0-9]*                         {printf("  LINE_NO");}
[0-9]*                          {printf("  NUM_LITERAL");}
[0-9]*\.[0-9]*                     {printf("  FLOAT_LITERAL");}
\"[^a-z\n]+\" {printf ("  STR_LITERAL");}
[A-Z][0-9]?\([0-9]+(,[0-9]+)?\)    {printf("  DIM_VAR");}
[A-Z][0-9]?                  {printf("  VAR_NAME");}
[$#!%]                       {printf("  TYPE");}
FN[A-Z]                      {printf("  FUN_NAME");}                         
"\n"                         {printf("  ENDL\n");}
"("                          {printf("  OBRACE");}
")"                          {printf("  CBRACE");}
[-+*/^<>]                    {printf(" : *yytext");}
"="                            {printf("  EQ_OP");}
"<>"                         {printf("  RELATIONAL_OP");}
"<="                         {printf("  RELATIONAL_OP");}
">="                         {printf("  RELATIONAL_OP");}
"NOT"                          {printf("  LOGICAL_OP");}
"AND"                          {printf("  LOGICAL_OP");}
"OR"                           {printf("  LOGICAL_OP");} 
"XOR"                          {printf("  LOGICAL_OP");}
"DATA"                         {printf("  DATA");}
"INPUT"                        {printf("  INPUT");}
"LET"                          {printf("  LET");}
"PRINT"                        {printf("  PRINT");}
"GOTO"                         {printf("  GOTO");}
"GOSUB"                        {printf("  GOSUB");}
REM[^a-z\n]*                   {printf("  REM");}
"DEF"                          {printf("  DEF");}
"DIM"                          {printf("  DIM");}
"IF"                           {printf("  IF");}
"THEN"                         {printf("  THEN");}
"FOR"                          {printf("  FOR");}
"TO"                           {printf("  TO");}
"STEP"                         {printf("  STEP");}
"NEXT"                         {printf("  NEXT");}
"RETURN"                       {printf("  RETURN");}
"STOP"                         {printf("  STOP");}
"END"                          {printf("  END");}
[a-z]                        {CurrentState = 1; yyerror("Error");}

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

void yyerror(char *str) {printf("err: %s\n", str);}

int main (int argc, char *argv[]){
    yyin = fopen(argv[1], "r");
    yylex();
    fclose(yyin);
    return 0;
}
