%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
int CurrentState;
int LineNumber;
//function that fprintf(out," s the mapped index of a variable 
int VarIndex(char *str);
int SymToType(char* str);
void yyerror(char* str);
FILE *yyin;
FILE *out;
%}
var_name        [A-Z][0-9]?
digit           [0-9]

%option noyywrap

%%

","                          {fprintf(out,"  COMMA");}
";"                          {fprintf(out,"  SEMICOLON");}
" "                          {fprintf(out,"  SPACE");}
^[0-9][0-9]*                         {fprintf(out,"  LINE_NO");}
[0-9]*                          {fprintf(out,"  NUM_LITERAL");}
[0-9]*\.[0-9]*                     {fprintf(out,"  FLOAT_LITERAL");}
\"[^a-z\n]+\" {fprintf (out,"  STR_LITERAL");}
[A-Z][0-9]?\(({var_name}|{digit}+)(,({var_name}|{digit}+))?\)    {fprintf(out,"  DIM_VAR");}
[A-Z][0-9]?                  {fprintf(out,"  VAR_NAME");}
[$#!%]                       {fprintf(out,"  TYPE");}
FN[A-Z]                      {fprintf(out,"  FUN_NAME");}                         
"\n"                         {fprintf(out,"  ENDL\n");}
"("                          {fprintf(out,"  OBRACE");}
")"                          {fprintf(out,"  CBRACE");}
"-"                             {fprintf(out,"  SUB_OP");}
"+"                             {fprintf(out,"  ADD_OP");}
"*"                             {fprintf(out,"  MUL_OP");}
"/"                             {fprintf(out,"  DIV_OP");}
"^"                             {fprintf(out,"  POW_OP");}
"="                            {fprintf(out,"  EQ_OP");}
"<"                             {fprintf(out,"  RELATIONAL_OP");}
">"                             {fprintf(out,"  RELATIONAL_OP");}
"<>"                         {fprintf(out,"  RELATIONAL_OP");}
"<="                         {fprintf(out,"  RELATIONAL_OP");}
">="                         {fprintf(out,"  RELATIONAL_OP");}
"NOT"                          {fprintf(out,"  LOGICAL_OP");}
"AND"                          {fprintf(out,"  LOGICAL_OP");}
"OR"                           {fprintf(out,"  LOGICAL_OP");} 
"XOR"                          {fprintf(out,"  LOGICAL_OP");}
"DATA"                         {fprintf(out,"  DATA");}
"INPUT"                        {fprintf(out,"  INPUT");}
"LET"                          {fprintf(out,"  LET");}
"PRINT"                        {fprintf(out,"  PRINT");}
"GOTO"                         {fprintf(out,"  GOTO");}
"GOSUB"                        {fprintf(out,"  GOSUB");}
REM[^a-z\n]*                   {fprintf(out,"  REM");}
"DEF"                          {fprintf(out,"  DEF");}
"DIM"                          {fprintf(out,"  DIM");}
"IF"                           {fprintf(out,"  IF");}
"THEN"                         {fprintf(out,"  THEN");}
"FOR"                          {fprintf(out,"  FOR");}
"TO"                           {fprintf(out,"  TO");}
"STEP"                         {fprintf(out,"  STEP");}
"NEXT"                         {fprintf(out,"  NEXT");}
"STOP"                         {fprintf(out,"  STOP");}
"END"                          {fprintf(out,"  END");}
[a-z]                        {CurrentState = 1; yyerror("Error");}

%%


//function that fprintf(out," s the mapped index of a variable
int VarIndex(char *str)
{
        int index=0;
        int len = strlen(str);
        if (len==1) {
                index = str[0]-'A';
        } else {
                index = 26*str[1] + 26 + str[0]-'A';
        }
        printf("%d is index\n",index);
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
    out= fopen("TokenFile.txt", "w");
    yyin = fopen(argv[1], "r");
    yylex();
    fclose(yyin);
    fclose(out);
    return 0;
}
