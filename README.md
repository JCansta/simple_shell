Description

This repo has our custom shell project, which attempts to replicate some of the processes of the 'sh' shell or 'bash' shell.

C language standard functions and system calls utilized

access, chdir, close, closedir, execve, exit,\_exit, fflush, fork, free, getcwd, getline, kill, malloc, open, opendir, perror, read, readdir, signal, stat, lstat, fstat, strtok, wait, waitpid, wait3, wait4, write.

Brief Synopsis

All files in this repository are designed to compile with GNU compiler collection v. 'gcc 4.8.4' in the linux environment from 'Ubuntu 14.04.5 LTS'. When compiled, the executable file replicates a 'shell' or command line interpreter, which is a user interface used for access to an operating system's services. This shell has a set of custom built-in commands, and also integrates with other commands located in the system's PATH. Output and functionality from commands is designed to replicate output from the shell sh (dash) and some bash commands.

Usage

compile

$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

Compile with Make: make all executing the program

interactive mode: $ ./hsh

non-interactive mode: $ echo "ls -la" | ./hsh usage  in interactive mode

arsine functions just as any other shell. Here is an example usage of the ls command with flags. This command lists directory contents.

$ ls -la

Testing

To run tests on the custom shell follow the instructions in the custom shell checker in this repository:

File List

See file ./FILE_LIST.md Authors
