#ifndef ED_SHELL_H
#define ED_SHELL_H

#define ED_DELIM " \t\r\n\a\""


#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <errno.h>


char **tknizer(char *input);
int execveEd_arg_s(char **ed_arg_s);
int edExit(char **ed_arg_s);
int edEnviron(char **ed_arg_s);
void isInteractive(void);
void is_NotInteractive(void);
int execNew(char **ed_arg_s);
char *_Stream(void);
extern char **environ;
int cdDir(char **ed_arg_s);
int needHelp(char **ed_arg_s);
char *readInput(void);

#endif/* ED_SHELL_H */
