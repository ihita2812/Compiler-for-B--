# Compiler-for-BMM
BMM (or B--) is a toy programming language based on BASIC.
This is complete scanner and parser for BMM.

errors:
1. ascending order of line number
2. var valid/exists?  [DEF IF PRINT]
3. var conversion type?
4. LET A(X,3) = X*Y – 1 isme X int check
5. type check in assignment stmt
6. return valid or not?
7. can declare and define in: 
    LET FOR DIM INPUT

8. next var check + valid check

conflicts: 27 shift/reduce, 7 reduce/reduce

conflicts: 28 shift/reduce, 7 reduce/reduce

conflicts: 28 shift/reduce, 6 reduce/reduce

conflicts: 27 shift/reduce, 6 reduce/reduce

things to fix:
1. line number - not updating at correct time :(        //done
2. ascending order of line number
3. NEXT - variable should be the same                   //done
4. RETURN - GOSUB should be called                      //done
5. GOTO/GOSUB - valid line number
6. GOSUB Control change                                 

conflicts: 27 shift/reduce, 5 reduce/reduce

Check all examples as given in the file.