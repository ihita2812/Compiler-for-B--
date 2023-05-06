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
        int loopCounter=0;
        int LoopStatus[26];
        //function that returns the mapped index of a variable
        int VarIndex(char *str);
        //function that sets the type of a variable to the respective type.
        int TypeSet(int ind, int type);
        //function that checks whether variable called 'str' is of 'type'. [0 for ture, 1 for false]
        int TypeCheck(int ind, int type);
        FILE *yyin;
%}
%token LINE_NO STR_LITERAL LOGICAL_OP NUM_LITERAL FLOAT_LITERAL DIM_VAR OBRACE CBRACE VAR_NAME FUN_NAME ENDL RELATIONAL_OP
%token PRINT DATA INPUT LET GOTO GOSUB REM DIM IF THEN FOR TO STEP NEXT RETURN STOP END DEF TYPE
%token EQ_OP SPACE COMMA SEMICOLON //ADD_OP SUB_OP MUL_OP DIV_OP POW_OP
%left ADD_OP SUB_OP
%left MUL_OP DIV_OP
%right POW_OP

%%

/*--------------------------------------------------------*/
/*---------------BASIC STRUCTURE OF PROGRAM---------------*/
/*--------------------------------------------------------*/

program
        :lines line_number END
        {
                CurrentState = 6;
        }

lines
        :lines line
        |

line
        :line_number stmt ENDL

line_number
        :LINE_NO SPACE
        {       
                if ($1>LineNumber)
                {
                        LineNumber=$1;
                        $$=$1;
                }
                else
                {
                        CurrentState = 25;
                        yyerror("Error");
                }
                
        }
stmt
        :{ 
                CurrentState = 2; 
        }
        data_stmt              //written, complete, error checked               
        |{
                CurrentState = 3;
        }  
        fun_def_stmt           //written, complete
                 
        |{
                CurrentState=23;
        }
        dim_def_stmt           //written
                   
        |{
                CurrentState = 4;
        }
        var_def_stmt           //written, complete
                   
        |{
                CurrentState = 11;
        }
        in_stmt                //written
                       
        |{
                CurrentState = 12;
        }
        out_stmt               //written
                       
        |assign_stmt            //written
        |{
                CurrentState=18;
        }
        iterative_stmt         //written
        
        |{
                CurrentState=17;
        }
        control_stmt           //written
        
        |{
                CurrentState=13;
                GoSub++;
        }
        fun_call_stmt          //written
        |STOP
        |{
                CurrentState=14;
        }
        goto_stmt              //written
        |{
                CurrentState=16;
        }
        comment_stmt           //written
        |{
                if (GoSub < 1)
                {       
                        CurrentState=15;
                        yyerror("Error");
                }
                else GoSub--;
        }
        return_call_stmt
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
                $$ = $1;
                TypeSet($$, $2);
        }
        |DIM_VAR
        {       
                $$ = $1;
                TypeSet($$, 2);
        }

var2
        :TYPE
        {
                $$=$1;
        }
        |
        {
                $$=2;
        }

/*----------------------------------------*/
/*---------------STATEMENTS---------------*/
/*----------------------------------------*/

/*----------data_stmt----------*/

data_stmt 
        :DATA SPACE values

values
        :value after_value

after_value
        :comma_stmt values
        |
value
        :STR_LITERAL
        |NUM_LITERAL
        |FLOAT_LITERAL

/*----------var_def_stmt----------*/

var_def_stmt
        :LET SPACE assign_stmt


/*----------dim_def_stmt----------*/

dim_def_stmt
        :DIM SPACE DIM_VAR
        {
                TypeSet($3, '%');
        }

/*----------fun_def_stmt----------*/

fun_def_stmt
        :fun_def fun_body

fun_def
        :DEF SPACE FUN_NAME
        
fun_body
        :space_obrace var space_cbrace eq_stmt num_expr 
        |eq_stmt num_expr     

/*----------in_stmt----------*/

in_stmt
        :INPUT SPACE variable_names
        
variable_names
        :variable_names comma_stmt var
        |var

/*----------out_stmt----------*/

out_stmt
        :PRINT SPACE things
        

things
        :thing delimiter things
        |thing
        |

delimiter
        :comma_stmt
        |semicolon_stmt

thing
        :var
        {
                if (VarStatus[$1] == 0) {
                        //invalid variable
                        CurrentState = 25;
                        yyerror("error");
                }
        }
        |num_expr
        |NUM_LITERAL
        |FLOAT_LITERAL
        |STR_LITERAL

/*----------assign_stmt----------*/

eq_stmt
        :space_eqs EQ_OP space_eqs
comma_stmt
        :space_eqs COMMA space_eqs
semicolon_stmt
        :space_eqs SEMICOLON space_eqs

space_eqs
        :SPACE
        |

assign_stmt
        :var eq_stmt rhs
        {
                $$ = $1; //the value of assign_stmt becomes the index of the variable to which assignment occured
                if (TypeCheck($1, $3))
                {
                        yyerror("Error");
                } //int
        }

rhs
        :{
                CurrentState=10;
        }
        STR_LITERAL {$$=1;}
        |{
                CurrentState=9;
        }
        num_expr

/*----------fun_call_stmt----------*/

fun_call_stmt
        :GOSUB SPACE NUM_LITERAL
        

return_call_stmt
        :RETURN
        
/*----------goto_stmt----------*/

goto_stmt
        :GOTO SPACE NUM_LITERAL
        
/*----------comment_stmt----------*/

comment_stmt
        :REM
        

/*----------control_stmt----------*/

control_stmt
        :IF SPACE rel_expr SPACE THEN SPACE NUM_LITERAL
        

/*----------iterative_stmt----------*/

it1
        :SPACE STEP SPACE num_expr
        |

iterative_stmt
        :FOR SPACE assign_stmt SPACE TO SPACE num_expr it1
        {
                LoopStatus[loopCounter] = $3;loopCounter++;
        }
        
next_stmt
        :NEXT SPACE VAR_NAME
        {
           loopCounter--;
           if (LoopStatus[loopCounter] == $3) {
                //correct variable
           } else {
                CurrentState = 24;
                yyerror("error");
           }
        }

/*---------------------------------------*/
/*--------------EXPRESSIONS--------------*/
/*---------------------------------------*/

space_add: ADD_OP space_eqs
space_sub: SUB_OP space_eqs
space_mul: MUL_OP space_eqs
space_div: DIV_OP space_eqs
space_pow: POW_OP space_eqs
space_obrace: OBRACE space_eqs
space_cbrace: CBRACE space_eqs

num_expr
        :space_obrace num_expr space_cbrace
        |num_expr space_add num_expr
        |num_expr space_sub num_expr
        |num_expr space_mul num_expr
        |num_expr space_div num_expr
        |num_expr space_pow num_expr
        |SUB_OP num_expr
        |NUM_LITERAL
        |FLOAT_LITERAL
        |var
        

rel_expr
        :expr rel_op expr
rel_op
        :RELATIONAL_OP
        |EQ_OP
log_expr
        :expr LOGICAL_OP expr

 

%%

//function that sets the type of a variable to the respective type.
int TypeSet(int ind, int type) {
        VarStatus[ind] = type;
        return 0;
}

//function that checks whether variable called 'str' is of 'type'. [0 for ture, 1 for false]
int TypeCheck(int ind, int type)
{       

        if (type==36) {type=1;}
        if (type==37) {type=2;}
        if (type==33) {type=3;}
        if (type==35) {type=4;}

        if (VarStatus[ind]==0) return 1;
        if ((VarStatus[ind]==1) && (type!=1)) return 1;
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
                case 24: printf("Error in LINE %d: Variable in NEXT statement not matching FOR statement.\n",LineNumber);break;
                case 25: printf("Error after LINE %d: Line numbers must be ascending.\n",LineNumber); break;
                default: printf("Syntax error in line %d.\n",LineNumber);
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