%{
        #include <stdio.h>
        #include <string.h>
        void yyerror(const char *str);
        int yylex(void);
        int yywrap(void);
        int CurrentState=0;
        int LineNumber= 0;
        int GoSub = 0;
        int VarStatus[286];
        //function that returns the mapped index of a variable
        int VarIndex(char *str);
        //function that sets the type of a variable to the respective type.
        int TypeSet(int ind, char str1);
        //function that checks whether variable called 'str' is of 'type'. [0 for ture, 1 for false]
        int TypeCheck(int ind, int type);
        FILE *yyin;
%}
%token LINE_NO STR_LITERAL LOGICAL_OP NUM_LITERAL FLOAT_LITERAL DIM_VAR OBRACE CBRACE VAR_NAME FUN_NAME ENDL RELATIONAL_OP
%token PRINT DATA INPUT LET GOTO GOSUB REM DIM IF THEN FOR TO STEP NEXT RETURN STOP END DEF TYPE
%token EQ_OP SPACE COMMA SEMICOLON
%left '+' '-'
%left '*' '/'
%right '^'

%%

/*--------------------------------------------------------*/
/*---------------BASIC STRUCTURE OF PROGRAM---------------*/
/*--------------------------------------------------------*/

program
        :lines 
        {
                CurrentState = 6;
                printf("identified program\n");
        }

lines
        :line lines
        {
                CurrentState = 7;
                printf("identified lines\n");
        }
        |line
        |end_line
        
end_line
        :LINE_NO SPACE END
        {
                CurrentState = 5;
                LineNumber = $1;
                printf("identified endline\n");
        }

line
        :LINE_NO SPACE stmt
        {
                LineNumber = $1;
                CurrentState = 8;
                printf("%d\n",$1);
                printf("identified line\n");
        }

stmt
        :data_stmt              //written, complete, error checked
        |fun_def_stmt           //written, complete
        |dim_def_stmt           //written
        |var_def_stmt           //written, complete
        |in_stmt                //written
        |out_stmt               //written
        |assign_stmt            //written
        |iterative_stmt         //written
        |control_stmt           //written
        |fun_call_stmt          //written
        |STOP ENDL
        |goto_stmt              //written
        |comment_stmt           //written
        |return_call_stmt
        |next_stmt

expr
        :num_expr
        |rel_expr
        |log_expr
        |NUM_LITERAL
        |FLOAT_LITERAL
        |STR_LITERAL
        |var

var
        :VAR_NAME var2
        {
                printf("%d : %d\n", $1,$2);
                $$ = $1;
                TypeSet($$, $2);
                printf("%d is type ",VarStatus[$1]);
                {printf("wazoo\n");}
        }
        |DIM_VAR
        {       
                $$ = $1;
                TypeSet($$, '%');
                {printf("wazoo2\n");}
        }

var2
        :TYPE
        {
                $$=$1;
        }
        |
        {
                $$='%'; {printf("erased\n");}
        }

/*----------------------------------------*/
/*---------------STATEMENTS---------------*/
/*----------------------------------------*/

/*----------data_stmt----------*/

data_stmt 
        :{ CurrentState = 2; } 
        DATA SPACE values ENDL

values
        :value COMMA SPACE values 
        |value

value
        :STR_LITERAL
        |NUM_LITERAL
        |FLOAT_LITERAL

/*----------var_def_stmt----------*/

var_def_stmt
        :{
                printf("hello i let'd\n");
                CurrentState = 4;
        }
        LET SPACE assign_stmt ENDL
        {printf("hello i let'd\n");}
        

/*----------dim_def_stmt----------*/

dim_def_stmt
        :{
                CurrentState=23;
        }
        DIM SPACE DIM_VAR ENDL
        {
                TypeSet($3, '%');
        }

/*----------fun_def_stmt----------*/

fun_def_stmt
        :{
                CurrentState = 3;
                
        }
        DEF SPACE FUN_NAME eq_stmt num_expr ENDL
        |{
                CurrentState = 3;
        }
        DEF SPACE FUN_NAME OBRACE var CBRACE eq_stmt num_expr ENDL
        

/*----------in_stmt----------*/

in_stmt
        :{
                CurrentState = 11;
        }
        INPUT SPACE variable_names ENDL
        
variable_names
        :variable_names COMMA SPACE var
        |var

/*----------out_stmt----------*/

out_stmt
        :{
                CurrentState = 12;
        }
        PRINT SPACE things ENDL
        

things
        :thing delimiter things
        |thing
        |

delimiter
        :COMMA
        |SEMICOLON

thing
        :var
        |num_expr
        |NUM_LITERAL
        |FLOAT_LITERAL
        |STR_LITERAL

/*----------assign_stmt----------*/



eq_stmt
        :{printf("wow\n");}space_eqs EQ_OP space_eqs {printf("collpasinf eq tmt\n");}
space_eqs
        :SPACE
        |

assign_stmt
        :{
                printf("assignning atm 5\n");
                CurrentState=20;
        }
        var eq_stmt NUM_LITERAL
        {
                printf("hello\n");
                if (TypeCheck($1, 2))
                {
                        yyerror("Error");
                } //int
        }
        |{
                printf("assignning atm 1\n");
                CurrentState=9;
        }
        var eq_stmt num_expr
        {
                if (TypeCheck($1, 2))
                {
                        yyerror("Error");
                } //int
        }
        |{
                printf("assignning atm 2\n");
                CurrentState=10;
        }
        var eq_stmt STR_LITERAL
        {       
                if (TypeCheck($1, 1))
                {
                        yyerror("Error");
                } //string
        }
        |{
                printf("assignning atm 3\n");
                CurrentState=12;
        }
        var eq_stmt var 
        {
                if (VarStatus[$3]==0)
                {
                        yyerror("Error");
                } //invalid variable assigned
                else if (VarStatus[$3]==VarStatus[$1])
                {
                        //no error
                }
                else if ((VarStatus[$3]==2) || (VarStatus[$3]==3) || (VarStatus[$3]==4) )
                {       
                        if ((VarStatus[$1]==2) || (VarStatus[$1]==3) || (VarStatus[$1]==4))
                        {
                                //no error.
                        }
                        else
                        {
                                printf("assignning atm 4\n");
                                CurrentState = 22;
                                yyerror("Error");
                        }
                } //invalid variable assigned
        }
        |{
                printf("assignning atm 6\n");
                CurrentState=20;
        }
        var eq_stmt FLOAT_LITERAL
        {
                if (TypeCheck($1, 2) || TypeCheck($1, 3) || TypeCheck($1, 4))
                {
                        yyerror("Error");
                } //float
        }

/*----------fun_call_stmt----------*/

fun_call_stmt
        :{
                CurrentState=13;
                GoSub = 1;
        }
        GOSUB SPACE NUM_LITERAL ENDL
        

return_call_stmt
        :{
                if (GoSub != 1)
                {       
                        CurrentState=15;
                        yyerror("Error");
                }
                else GoSub=0;
        }
        RETURN ENDL
        
/*----------goto_stmt----------*/

goto_stmt
        :{
                CurrentState=14;
        }
        GOTO SPACE NUM_LITERAL ENDL
        
/*----------comment_stmt----------*/

comment_stmt
        :{
                CurrentState=16;
        }
        REM ENDL
        

/*----------control_stmt----------*/

control_stmt
        :{
                CurrentState=17;
        }
        IF SPACE rel_expr THEN NUM_LITERAL ENDL
        

/*----------iterative_stmt----------*/

iterative_stmt
        :{
                CurrentState=18;
        }
        FOR SPACE assign_stmt SPACE TO SPACE num_expr SPACE STEP SPACE num_expr ENDL
        
        |{
                CurrentState=19;
        }
        FOR SPACE assign_stmt SPACE TO SPACE num_expr ENDL
        

next_stmt
        :NEXT VAR_NAME ENDL
        {
                
        }

/*---------------------------------------*/
/*--------------EXPRESSIONS--------------*/
/*---------------------------------------*/

num_expr
        :expr '+' expr
        |expr '-' expr
        |expr '*' expr
        |expr '/' expr
        |expr '^' expr
        |'-' expr
        |OBRACE expr CBRACE

rel_expr
        :expr rel_op expr
rel_op
        :RELATIONAL_OP
        |'<'
        |'>'
        |EQ_OP

log_expr
        :expr LOGICAL_OP expr

%%



//function that sets the type of a variable to the respective type.
int TypeSet(int ind, char str1) {
        int type=0;
        switch (str1)
        {
                case '$': type=1; break; //string
                case '%': type=2; break; //int
                case '!': type=3; break; //single precision
                case '#': type=4; break; //double precision
        }
        VarStatus[ind] = type;
        return 0;
}

//function that checks whether variable called 'str' is of 'type'. [0 for ture, 1 for false]
int TypeCheck(int ind, int type)
{       
        
        /* if (VarStatus[ind] == type)
        {
                return 0;
        }
        else return 1; */

        if (VarStatus[ind]==0) {return 1;}
        if ((VarStatus[ind]==1) && (type!=1)) {return 1;}
        else return 0;
        
}
void yyerror(const char* str)
{
        switch (CurrentState)
        {
                case 1: printf("Error in LINE %d: LOWERCASE VALUES NOT PERMITTED.\n",LineNumber);break;
                case 2: printf("Error in LINE %d: DATA Statement must be in the form: DATA value1, value2, ..., valueN\n",LineNumber);break;
                case 3: printf("Error in LINE %d: DEF expected FNX and assignment.\n",LineNumber);break;
                case 4: printf("Error in LINE %d: LET expected assignment statement.\n",LineNumber);break;
                case 5: printf("Error in LINE %d: END expected.\n",LineNumber);break;
                case 6: printf("Syntax error: END expected.\n");break;
                case 7: printf("Syntax error: Line expected.\n");break;
                case 8: printf("Syntax error: Expected <line number><statement><\\n>\n");break;
                case 9: printf("Error in LINE %d: Cannot assign number to incompatible variable.\n", LineNumber);break;
                case 10: printf("Error in LINE %d: Cannot assign string to incompatible variable.\n", LineNumber);break;
                case 11: printf("Error in LINE %d: INPUT Statement must be in the form: INPUT value1, value2, ..., valueN\n",LineNumber);break;
                case 12: printf("Error in LINE %d: PRINT Statement must be in the form: PRINT value1, value2, ..., valueN\n",LineNumber);break;
                case 13: printf("Error in LINE %d: GOSUB expected Line Number.\n",LineNumber);break;
                case 14: printf("Error in LINE %d: GOTO expected Line Number.\n",LineNumber);break;
                case 15: printf("Error in LINE %d: Fatal, RETURN called without corresponding GOSUB.\n",LineNumber); break;
                case 16: printf("Error in LINE %d: Expected all capitals comment.\n",LineNumber);break;
                case 17: printf("Error in LINE %d: Expected IF <Relational Comparison> THEN LINE_NUMBER\n",LineNumber); break;
                case 18: printf("Error in LINE %d: Expected FOR <Assignment> TO <Arithmetic Expression> [STEP <Arithmetic Expression>].",LineNumber);break;
                case 19: printf("Error in LINE %d: Expected FOR <Assignment> TO <Arithmetic Expression>\n",LineNumber);break;
                case 20: printf("Error in LINE %d: Assigned Number to string variable.\n", LineNumber); break;
                case 21: printf("Error in LINE %d: Undeclared identifier used.\n", LineNumber); break;
                case 22: printf("Error in LINE %d: Incompatible identifier assigned to variable.\n", LineNumber); break;
                case 23: printf("Error in LINE %d: Expected DIM var1(number), etc.\n",LineNumber);break;
                default: printf("Syntax error %d.\n",LineNumber);
        }
}
int yywrap(void)
{
    return 1;
}
int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);
    printf("Parsing Complete.\n");
    return 0;
}