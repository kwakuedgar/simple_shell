#include "edshell.h"

/**
*edEnviron - Prints working env
*@ed_arg_s: arguments
*Return: 1
*/

int edEnviron(char **ed_arg_s)
{
int i = 0;

(void)(**ed_arg_s);

while (environ[i])
{
write(STDOUT_FILENO, environ[i], strlen(environ[i]));
write(STDOUT_FILENO, "\n", 1);
i++;
}
return (-1);
}
