ALX C - Function pointers

*General

*What are function pointers and how to use them.
Function pointers are variables that store the address of a function. 
They allow you to pass functions as arguments to other functions, to assign functions to variables, and to call functions indirectly.

*What does a function pointer exactly hold
A function pointer holds the memory address of a function.
In other words, it points to the location in memory where the function code is stored.
When you call a function through a function pointer, the CPU jumps to that memory address and starts executing the code of the function.

*Where does a function pointer point to in the virtual memory?
The exact location where a function pointer points to in virtual memory is system-dependent 
and can vary based on factors such as the operating system, the architecture of the system, and the application itself.

*For this project the file and their functions are:
File Descriptions

0-print_name.c - function that prints a name

1-array_iterator.c - function that executes a function given as a parameter on each element of an array

2-int_index.c - function that searches for an integer

3 - program that performs simple operations

3-calc.h file contains all the function prototypes and data structures used by this program.
3-op_functions.c contains the functions for each arithmetic operation
3-get_op_func.c contains the function that selects the correct function to perform the operation asked by the user
3-main.c contains main function only
