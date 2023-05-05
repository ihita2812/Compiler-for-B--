# Compiler-for-BMM
BMM (or B--) is a toy programming language based on BASIC.
This is complete scanner and parser for BMM.

errors:
1. ascending order of line number
2. var valid/exists?
3. var conversion type?
4. LET A(X,3) = X*Y – 1 isme X int check
5. type check in assignment stmt
6. return valid or not?
7. can declare and define in: 
    LET FOR DIM INPUT

8. next var check + valid check

State 4 conflicts: 1 shift/reduce
State 100 conflicts: 5 shift/reduce
State 123 conflicts: 10 shift/reduce
State 124 conflicts: 5 shift/reduce
State 125 conflicts: 5 shift/reduce
State 126 conflicts: 5 shift/reduce
State 127 conflicts: 5 shift/reduce
State 128 conflicts: 5 shift/reduce
State 129 conflicts: 10 shift/reduce
