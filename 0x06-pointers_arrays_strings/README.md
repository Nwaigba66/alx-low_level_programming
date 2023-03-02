C - More pointers, arrays and strings

What are the differences between pointers and arrays?

* Data types: An array is a collection of elements of the same data type, whereas a pointer is a variable that holds a memory address.

Memory allocation: When an array is declared, memory is allocated for all its elements at once.
 A pointer, on the other hand, does not have a pre-allocated memory space.
 It holds an address of a memory location where the data is stored.
Size: The size of an array is fixed and determined at compile-time,
 whereas the size of a pointer is determined at runtime and can change during the program execution.

*Access: Accessing elements in an array is done using indexing, while accessing elements through a pointer is done using pointer arithmetic.

*Functionality: Arrays can be used to store and manipulate data, while pointers are often used for dynamic memory allocation,
 passing arguments to functions by reference, and creating complex data structures such as linked lists and trees.

*Syntax: The syntax for declaring an array is different from declaring a pointer. 
An array is declared using square brackets ([]), while a pointer is declared using an asterisk (*) before the variable name.

Below are example of Functions:

 File 0-strcat.c is a function that concatenates two strings.

File 1-strncat.c is a function that concatenates two strings that will use at most n bytes from src.

File 2-strncpy.c is a function that copies a string.

File 3-strcmp.c is a function that compares two strings.

File 4-rev_array.c a function that reverses the content of an array of integers.

File 5-string_toupper.c is a function that changes all lowercase letters of a string to uppercase.

File 6-cap_string.c is a function that capitalizes all words of a string.

File 7-leet.c is a function that encodes a string into 1337.

File 100-rot13.c is a function that encodes a string using rot13.

File _putchar.c is a function that replaces the standard library function putchar().

File main.h is the header file containing all the function prototypes.
