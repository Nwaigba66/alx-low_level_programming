ALX C - Bit manipulation

*How to manipulate bits and use bitwise operators?
Bitwise operators are used to perform operations on the individual bits of an integer type data in a computer.
Here's a brief overview of the bitwise operators in most programming languages:

*AND (&): Performs a bitwise AND operation between two integers,
producing a new integer where each bit is 1 if and only if both corresponding bits of the two operands are 1.

*OR (|): Performs a bitwise OR operation between two integers, 
producing a new integer where each bit is 1 if either of the corresponding bits of the two operands is 1.

*XOR (^): Performs a bitwise XOR operation between two integers, 
producing a new integer where each bit is 1 if and only if exactly one of the corresponding bits of the two operands is 1.

*NOT (~): Performs a bitwise NOT operation on a single integer,
producing a new integer where each bit is the opposite of the corresponding bit in the original operand.

*Left shift (<<): Shifts the bits of an integer to the left by a specified number of places, 
filling in the vacant bits on the right with zeroes.

*Right shift (>>): Shifts the bits of an integer to the right by a specified number of places,
filling in the vacant bits on the left with zeroes.

*For this project we will use the following files and functions:
0-binary_to_uint.c: A function that converts a binary number to an unsigned int.
1-print_binary.c: A function that prints the binary representation of a number.
2-get_bit.c: A function that returns the value of a bit at a given index.
3-set_bit.c: A function that sets the value of a bit to 1 at a given index.
4-clear_bit.c: A function that sets the value of a bit to 0 at a given index.
5-flip_bits.c: A function that returns the number of bits you would need to flip to get from one number to another.
100-get_endianness.c: A function that checks the endianness.
101-password?: A function to Find the password for this program.
