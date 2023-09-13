#include "edshell.h"

/**
 * isInteractive - Shows shell's interactive mode
 * Return: void
 */

void isInteractive(void)
{
char **ed_arg_s;
char *input;
int ed_stat;
ed_stat = -1;

do {
printf("edShell$ ");
input = readInput();
ed_arg_s = tknizer(input);
ed_stat = execveEd_arg_s(ed_arg_s);
free(input);
free(ed_arg_s);
if (ed_stat >= 0)
{
exit(ed_stat);
}
} while (ed_stat == -1);
}
