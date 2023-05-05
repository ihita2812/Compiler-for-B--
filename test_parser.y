%{
        #include <stdio.h>
        #include <string.h>
        void yyerror(const char *str);
        int yylex(void);
        int yywrap(void);
        int CurrentState=0;
        int LineNumber= 0;
%}
%token DATA COMMA STR_LITERAL NUM_LITERAL FLOAT_LITERAL SPACE

%%

data_stmt
        :DATA SPACE values
        {
                CurrentState = 2;
                printf("Current state = 2");
        }
values
        :value COMMA SPACE values
        |value
        |

value
        :STR_LITERAL
        |NUM_LITERAL
        |FLOAT_LITERAL

%%

void yyerror(const char *str)
{
        switch (CurrentState)
        {
                case 1: printf("Error in LINE %d: LOWERCASE VALUES NOT PERMITTED.\n",LineNumber);
                case 2: printf("Error in LINE %d: DATA Statement must be in the form: DATA value1, value2, ..., valueN\n",LineNumber);
                //case 3: printf("Error in LINE %d: DEF ");
                default: printf("Syntax Error.");
        }
    fprintf(stderr,"error: %s\n",str);
}
int yywrap(void)
{
    return 1;
}
int main(void)
{
    yyparse();
}