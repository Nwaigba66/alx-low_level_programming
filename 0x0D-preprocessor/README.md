TOPIC: C - Preprocessor

*What are macros and how to use them
In computer programming, a macro is a set of instructions that are executed by the compiler or interpreter
to perform a specific task. 

*Macros are commonly used to automate repetitive tasks or to define complex
functions that would be difficult or time-consuming to write manually.

*How to use:
There are two types of macros:

text macros and function macros.
Text macros are used to substitute text in the code with a predefined sequence of characters.
For example, if you frequently use the same block of code in multiple places,
you can define a macro that will automatically insert the code in the correct location.

*Function macros, on the other hand, are used to define a function-like structure that can be called with arguments.
When the macro is called, the arguments are substituted into the macro code to produce the final output.

*For this project, the follwing files and functions will be used:

0-object_like_macro.h - a header file that defines a macro named SIZE as an abbreviation for the token 1024

1-pi.h - a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

2-main.c - a program that prints the name of the file it was compiled from, followed by a new line.

3-function_like_macro.h - a function-like macro ABS(x) that computes the absolute value of a number x.

4-sum.h - a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
