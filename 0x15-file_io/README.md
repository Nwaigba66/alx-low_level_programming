ALX 0x15. C - File I/O 

*How to create, open, close, read and write files
Creating a File:
# Creating a file in Python
file = open("example.txt", "w")

Opening a File:
# Opening a file in Python
file = open("example.txt", "r")

Closing a File:
# Closing a file in Python
file = open("example.txt", "r")
# Do something with the file
file.close()

Reading a File:
# Reading a file in Python
file = open("example.txt", "r")
content = file.read()
print(content)
file.close()

Writing to a File:
# Writing to a file in Python
file = open("example.txt", "w")
file.write("Hello, World!")
file.close()

*What are file descriptors
The file descriptor is an abstraction used by the operating system to manage I/O operations
and ensure that multiple processes can access the same file without interfering with each other.

*What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
(1)Standard Input (stdin): This file descriptor is used for input from the user or from another program.
By default, it is connected to the keyboard or to the input stream of the parent process.
The POSIX name for this file descriptor is STDIN_FILENO and its integer value is 0.

(2)Standard Output (stdout): This file descriptor is used for output to the screen or to another program.
By default, it is connected to the screen or to the output stream of the parent process.
The POSIX name for this file descriptor is STDOUT_FILENO and its integer value is 1.

(3)Standard Error (stderr): This file descriptor is used for error messages or
diagnostic output that should not be mixed with normal output. By default,
it is also connected to the screen or to the error stream of the parent process. 
The POSIX name for this file descriptor is STDERR_FILENO and its integer value is 2.

