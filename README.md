Simple shell 

In this project we'll create a simple UNIX command interpreter in C programming language. 

Table of Contents 

Introduction 

What is Shell 

What is it for 

Project Information 

General requirements 

Allowed functions and System Calls 

Documentation 

Description about what to do the code 

Show flowchart 

Explain functionalities 

Extra Information 

How to download, install and compile the program from the repository 

Authors 

 
 

Introduction 

What is Shell 

A shell is a command-line interpreter, it is the computer program that provides a user interface to access the services of the operating system. Depending on the type of interface they use, shells can be of various types, in this case, a shell program of the type sh (Bourne Shell) will be developed. Users typically interact with a shell using a terminal emulator that is used for entering data into and displaying or printing data from, a computer or a computing system. 

What is it for 

This consists of interpreting orders. It incorporates features such as process control, input/output redirection, law listing and reading, protection, communications, and a command language for writing batch programs or scripts. All Unix-type systems have at least one interpreter compatible with the Bourne shell. The Bourne shell program is found within the Unix file hierarchy at /bin/sh. 

Project Information 

General requirements 

Allowed editors: vi, vim, emacs 

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 

All your files should end with a new line 

A README.md file, at the root of the folder of the project is mandatory 

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl 

Your shell should not have any memory leaks 

No more than 5 functions per file 

All your header files should be include guarded 

Use system calls only when you need to (why?) 

Write a README with the description of your project 

You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker 

Allowed functions and System Calls 

access (man 2 access) 

chdir (man 2 chdir) 

close (man 2 close) 

closedir (man 3 closedir) 

execve (man 2 execve) 

exit (man 3 exit) 

_exit (man 2 _exit) 

fflush (man 3 fflush) 

fork (man 2 fork) 

free (man 3 free) 

getcwd (man 3 getcwd) 

getline (man 3 getline) 

isatty (man 3 isatty) 

kill (man 2 kill) 

malloc (man 3 malloc) 

open (man 2 open) 

opendir (man 3 opendir) 

perror(man 3 perror) 

read (man 2 read) 

readdir (man 3 readdir) 

signal (man 2 signal) 

stat (__ xstat) (man 2 stat) 

lstat (__ lxstat) (man 2 lstat) 

fstat (__ fxstat) (man 2 fstat) 

strtok (man 3 strtok) 

wait (man 2 wait) 

waitpid (man 2 waitpid) 

wait3 (man 2 wait3) 

wait4 (man 2 wait4) 

write (man 2 write) 

Documentation 

Download 

You can clone this repository this way: git clone https://github.com/Tinsae-Birhan1/simple_shell.git 

Compilation 

Your shell will be compiled this way: 

gcc -Wall -Werror -Wextra -pedantic *.c -o hsh 

Testing 

Your shell should work like this in interactive mode: 

$ ./hsh ($) /bin/ls hsh main.c shell.c ($) ($) exit $ 

Also in non-interactive mode: 

$ echo "/bin/ls" | ./hsh hsh main.c shell.c test_ls_2 $ $ cat test_ls_2 /bin/ls /bin/ls $ $ cat test_ls_2 | ./hsh hsh main.c shell.c test_ls_2 hsh main.c shell.c test_ls_2 $ 

Extra information 

Resources 

Read or watch: 

UNIX shell 

Thompson shell 

Ken Thompson 

man or help: 

sh (Run sh as well) 

Authors 

Eddie Agongo
