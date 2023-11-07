SIMPLE-SHELL PROJECT
0x16. C - Simple Shell
Simple Shell Project
This project is compiled by Charmaine Masinga

Task 0
0. Betty would be proud
Write a beautiful code that passes the Betty checks

Task 1
1. Simple shell 0.1
Write a UNIX command line interpreter.

Your Shell should:

Display a prompt and wait for the user to type a command. A command line always ends with a new line.
The prompt is displayed again each time a command has been executed.
The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
The command lines are made only of one word. No arguments will be passed to programs.
If an executable cannot be found, print an error message and display the prompt again.
Handle errors.
You have to handle the “end of file” condition (Ctrl+D)

Task 2
2. Simple shell 0.2
Simple shell 0.1 +

Task 3
3. Simple shell 0.3
Simple shell 0.2 +

Handle the PATH
fork must not be called if the command doesn’t exist

Tasl 4
4. Simple shell 0.4
Simple shell 0.3 +

Implement the exit built-in, that exits the shell
Usage: exit
You don’t have to handle any argument to the built-in exit

Task 5
5. Simple shell 1.0
Simple shell 0.4 +

Implement the env built-in, that prints the current environment

Task 6
6. Simple shell 0.1.1
Simple shell 0.1 +

Write your own getline function
Use a buffer to read many chars at once and call the least possible the read system call
You will need to use static variables
You are not allowed to use getline
You don’t have to:

be able to move the cursor

Task 7
7. Simple shell 0.2.1
Simple shell 0.2 +

You are not allowed to use strtok

Task 8
8. Simple shell 0.4.1
Simple shell 0.4 +

handle arguments for the built-in exit
Usage: exit status, where status is an integer used to exit the shell

Task 9
9. setenv, unsetenv
Simple shell 1.0 +

Implement the setenv and unsetenv builtin commands
setenv
Initialize a new environment variable, or modify an existing one

Task 10
10. cd
Simple shell 1.0 +

Implement the builtin command cd:
Changes the current directory of the process.

Task 11
11. ;
Simple shell 1.0 +

Handle the commands separator ;

Task 12
12. && and ||
Simple shell 1.0 +

Handle the && and || shell logical operators

Task 13
13. alias
Simple shell 1.0 +

Implement the alias builtin command

Task 14
14. Variables
Simple shell 1.0 +

Handle variables replacement
Handle the $? variable
Handle the $$ variable

Task 15
15. Comments
Simple shell 1.0 +

Handle comments (#)

Task 16
16. File as input
Simple shell 1.0 +

Usage: simple-shell [filename]
