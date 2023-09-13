#include "edshell.h"

/**
 * cdDir - Changes directory
 * @ed_arg_s: directory to change into
 * Return: 1
 */

int cdDir(char **ed_arg_s)
{
if (ed_arg_s[1] == NULL)
{
fprintf(stderr, "did you mean… \"cd\"\n");
}
else
{
if (chdir(ed_arg_s[1]) != 0)
{
perror("error changing directories\n");
}
}
return (-1);
}
