%token LINE_NO STR_LITERAL NUM_LITERAL VAR_NAME FUN_NAME COMMENT ENDL END
%start program
%token PRINT DATA INPUT
%token EQ_OP SPACE COMMA DELIMITER

%%

/*--------------------------------------------------------*/
/*---------------BASIC STRUCTURE OF PROGRAM---------------*/
/*--------------------------------------------------------*/

program
        :lines end_line

lines
        :lines line
        |

end_line
        :LINE_NO END

line
        :LINE_NO stmt ENDL
        |

stmt
        :data_stmt
        |read_stmt
        |in_stmt
        |out_stmt
        |assign_stmt
        |iterative_stmt
        |fun_call_stmt
        |goto_stmt
        |comment_stmt

expr
        :ari_expr
        |rel_expr
        |log_expr

/*----------------------------------------*/
/*---------------STATEMENTS---------------*/
/*----------------------------------------*/

/*----------data_stmt----------*/

data_stmt
        :DATA values

values
        :values COMMA value
        |

value
        :STR_LITERAL
        |NUM_LITERAL
        |

/*----------in_stmt----------*/

in_stmt
        :INPUT variable_names

variable_names
        :variable_names COMMA SPACE VAR_NAME
        |

/*----------out_stmt----------*/

out_stmt
        :PRINT things

things
        :things DELIMITER thing
        |

thing
        :VAR_NAME
        |ari_expr
        |NUM_LITERAL
        |STR_LITERAL

/*----------assign_stmt----------*/

assign_stmt
        :VAR_NAME EQ_OP ari_expr
        |VAR_NAME EQ_OP STR_LITERAL

/*---------------------------------------*/
/*--------------EXPRESSIONS--------------*/
/*---------------------------------------*/

%%