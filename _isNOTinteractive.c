#include "edshell.h"

/**
*is_NotInteractive - Returns back to prompt
*Return: void
*/

void is_NotInteractive(void)
{
char **ed_arg_s;
char *input;
int ed_stat = -1;

do {
input = _Stream();
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
