ALX 0x0B. C - malloc, free (MEMORY ALLOCATION)

*What is the difference between automatic and dynamic allocation

(a)Automatic allocation
When you declare variables or when you use strings within double quotes, the program is taking care of all the memory allocation. You do not have to think about it.

*(b)Dynamic allocation

*Malloc
The malloc function allocates a specific number of bytes in memory and returns a pointer to the allocated memory.

*This memory will have read and write permissions.

*Prototype: void *malloc(size_t size);
where void * means it is a pointer to the type of your choice
and size is the number of bytes your need to allocate.

*What is malloc and free and how to use them:

*The malloc function is used to allocate a certain amount of memory during the execution of a program.
It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.

*FREE:
When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.

*For this project task, the following files and functions applies below:

*0-create_array.c - a function that creates an array of chars, and initializes it with a specific char.

*1-strdup.c - a function that returns a pointer to a newly allocated space in memory,
which contains a copy of the string given as a parameter.

*2-str_concat.c a function that concatenates two strings.

*3-alloc_grid.c - a function that returns a pointer to a 2 dimensional array of integers.

*4-free_grid.c - a function that frees a 2 dimensional grid previously created by your alloc_grid function. 

*100-argstostr.c - a function that concatenates all the arguments of your program.

*101-strtow.c - a function that splits a string into words.
