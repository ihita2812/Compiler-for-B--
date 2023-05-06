===================
# Compiler-for-BMM
===================
BMM (or B--) is a toy programming language based on BASIC.
This is complete scanner and parser for BMM.

======
README
======

-----------
# CREATORS
-----------

Ihita Sinha, 2021CSB1095
Niti Shyamsukha, 2021CSB1118

-----------
# CONTENTS
-----------

1. BMM_Scanner.l : Scanner for BMM using flex
2. BMM_Parser.y : Parser for BMM using bison
3. CorrectSample.bmm : Correct sample code written in BMM
4. IncorrectSample.bmm : Incorrect sample code writen in BMM
5. README

---------------
# HOW TO BUILD
---------------

To build the compiler for BMM, run the following commands:
$ lex BMM_Scanner.l
$ bison -d BMM_Parser.y
$ gcc lex.yy.c y.tab.c -o bb

---------------
# HOW TO RUN
---------------

To run the compiler for BMM, run the following commands:
$ bb test_file.bmm
Here, the test file can be any of the two provided in this directory. (CorrectSample.bmm and IncorrectSample.bmm)

-------------------
# SUPPORTED ERRORS
-------------------

Errors are shown in the format:
"Error in LINE <number> : <error>"

Here, <error> is one of the following:

1. Lowercase values not permitted
2. DATA Statement must be in the form. DATA value1, value2, ..., valueN
3. DEF expected FNX and assignment.
4. LET expected assignment statement.
5. END expected
6. END expected.
7. Line expected.
8. Expected <line number><statement><\n>
9. Cannot assign number to incompatible variable.
10. Cannot assign string to incompatible variable.
11. INPUT Statement must be in the form. INPUT value1, value2, ..., valueN
12. PRINT Statement must be in the form. PRINT value1, value2, ..., valueN
13. GOSUB expected Line Number.
14. GOTO expected Line Number.
15. Fatal, RETURN called without corresponding GOSUB.
16. Expected all capitals comment.
17. Expected IF <Relational Comparison> THEN LINE_NUMBER
18. Expected FOR <Assignment> TO <Arithmetic Expression> [STEP <Arithmetic Expression>].
19. Expected FOR <Assignment> TO <Arithmetic Expression>
20. Assigned Number to string variable.
21. Undeclared identifier used.
22. Incompatible identifier assigned to variable.
23. Expected DIM var1(number), etc.
24. Variable in NEXT statement not matching FOR statement.
25. Line numbers must be ascending.
26. [default] Syntax error in line <LineNumber>