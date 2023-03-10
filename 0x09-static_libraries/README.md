0x09. C - Static libraries

*What is a static library, how does it work, how to create one, and how to use it?
Static libraries are just collections of object files that are linked into the program during the linking phase of compilation,
and are not relevant during runtime.

Shared libraries (also called dynamic libraries) are linked into the program in two stages. 
First, during compile time: the linker verifies that all the symbols (again, functions, variables and the like)
required by the program, are either linked into the program, or in one of its shared libraries.

Ar: 
Is a  command is used to create a static library from object files.

ranlib:
The command used to create or update the index is called 'ranlib

Then you proceed to add all files
