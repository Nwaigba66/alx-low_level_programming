ALX C - Structures, typedef

*How to use typedef:

*In this example, we have used typedef to create a new type name Employee for the struct declaration. 
This makes it easier to declare variables of type Employee instead of typing out the entire struct declaration each time.

*Note that typedef does not create a new data type. It simply creates a new name or alias for an existing data type.
This means that age and int are the same data type, and Employee and struct {...} are the same data type as well.

*For this project, we will use the following files and functions:
dog.h - Define a new type struct dog with the following elements:

name, type = char * age, type = float owner, type = char *

1-init_dog.c - a function that initialize a variable of type struct dog

2-print_dog.c - a function that prints a struct dog

dog.h - a new type dog_t as a new name for the type struct dog.

4-new_dog.c - a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner); You have to store a copy of name and owner Return NULL if the function fails

5-free_dog.c - a function that frees dogs.

Prototype: void free_dog(dog_t *d);
