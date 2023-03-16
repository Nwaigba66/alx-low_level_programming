0x0C. C - More malloc, free

*General:
*How to use the exit function:
In C programming language, the exit function is used to terminate the program immediately,
regardless of its current state. The prototype of the exit function is:
int main() {
    // Your program code here
    exit(0); // Terminate the program normally with status 0
}

*What are the functions calloc and realloc from the standard library and how to use them.
Calloc stands for "contiguous allocation" and is used to allocate a block of memory of a specified size,
with all bits initialized to zero. 
It takes two arguments: the number of elements to allocate and the size in bytes of each element.
It returns a pointer to the first byte of the allocated block, or NULL if the allocation fails.

*What are the realloc from the standard library and how to use them.
Realloc stands for "reallocate" and is used to resize a previously allocated block of memory.
It takes two arguments: a pointer to the previously allocated memory block and the new size in bytes.
It returns a pointer to the new memory block, which may be different from the original pointer.
If the new size is smaller than the original size, the extra memory is freed.
If the new size is larger than the original size, the extra memory is uninitialized.
