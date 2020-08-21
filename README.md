# **SHELL PROJECT**
-----------------------

### This repo has our custom shell project, which attempts to replicate some of the processes of the 'sh' shell or 'bash' shell.

#### C language standard functions and system calls utilized
```
access, chdir, close, closedir, execve, exit,_exit, fflush, fork, free, getcwd, getline, kill, malloc, open, opendir, perror, read,
readdir, signal, stat, lstat, fstat, strtok, wait, waitpid, wait3, wait4, write.
```
![flowchart](https://user-images.githubusercontent.com/66022141/90861232-12790a80-e351-11ea-87f3-1cb02bf8d49d.png)

## Brief Synopsis
All files in this repository are designed to compile with GNU compiler collection v. 'gcc 4.8.4' in the linux environment from 'Ubuntu 14.04.5 LTS'. When compiled, the executable file replicates a 'shell' or command line interpreter, which is a user interface used for access to an operating system's services. This shell has a set of custom built-in commands, and also integrates with other commands located in the system's PATH. Output and functionality from commands is designed to replicate output from the shell sh (dash) and some bash commands.

## Usage

 - **compile**: $ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
Compile with Make: make all executing the program
 - **interactive mode**:$ ./hsh
Run the shell. Enter in interactive mode
 - **non-interactive mode**: $ echo "ls -la" | ./hsh
Usage in non-interactive mode.

## Examples
1. functions just as any other shell. Here is an example usage of the ls command with flags. This command lists directory contents.

```
$./hsh
current directory$ ls -la
total 88
drwxr-xr-x 3 cansta cansta  4096 Aug 20 16:58 .
drwxr-xr-x 7 cansta cansta  4096 Aug 20 15:07 ..
drwxr-xr-x 8 cansta cansta  4096 Aug 20 16:25 .git
-rw-r--r-- 1 cansta cansta   180 Aug 19 22:08 AUTHOURS
-rw-r--r-- 1 cansta cansta  1502 Aug 18 22:57 README.md
-rw-r--r-- 1 cansta cansta   907 Aug 20 16:24 built_in.c
-rw-r--r-- 1 cansta cansta   530 Aug 20 16:24 error.c
-rw-r--r-- 1 cansta cansta   625 Aug 20 16:24 execprocess.c
-rw-r--r-- 1 cansta cansta   294 Aug 20 15:04 getpath.c
-rw-r--r-- 1 cansta cansta   758 Aug 20 16:22 holberton.h
-rwxr-xr-x 1 cansta cansta 14352 Aug 20 16:58 hsh
-rw-r--r-- 1 cansta cansta   201 Aug 20 16:25 main.c
-rw-r--r-- 1 cansta cansta   699 Aug 18 22:57 man_1_simple_shell
-rw-r--r-- 1 cansta cansta   222 Aug 20 15:04 print_env.c
-rw-r--r-- 1 cansta cansta   224 Aug 20 16:25 printpath.c
-rw-r--r-- 1 cansta cansta   488 Aug 20 16:09 prompt.c
-rw-r--r-- 1 cansta cansta   204 Aug 20 15:06 sign.c
-rw-r--r-- 1 cansta cansta   377 Aug 20 14:52 up_pwd.c
-rw-r--r-- 1 cansta cansta   695 Aug 20 16:14 which.c
```

2. the program can print error if the command its wrong.
```
$./hsh
/home/cansta/practiceshell/simple_shell$ asdfg
./hsh: 0: asdfg: not found
```

__the shell will continue until the user wrote in the prompt "exit" or press CTRL + D.__

## Contributors
[- Mauricio Contreras](https://github.com/mauroxcf)
[- Jaime Castro](https://github.com/JCansta)
[- Jose Ramirez](https://github.com/jgra007)
