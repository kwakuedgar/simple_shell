#include "edshell.h"

/**
 * execNew - Generates a new execution
 * @ed_arg_s: string array to pointer
 * Return: 1
 */

int execNew(char **ed_arg_s)
{
pid_t pid;
int ed_stat;

pid = fork();
if (pid ==  0)
{
if (execvp(ed_arg_s[0], ed_arg_s) == -1)
{
perror("error: process fail");
}
exit(EXIT_FAILURE);
}
else if (pid < 0)
{
perror("forking error.");
}
else
{
do {
waitpid(pid, &ed_stat, WUNTRACED);
} while (!WIFEXITED(ed_stat) && !WIFSIGNALED(ed_stat));
}
return (-1);
}
