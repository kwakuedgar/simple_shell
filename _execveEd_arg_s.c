#include "edshell.h"

/**
*execveEd_arg_s - Checks if commands are part of builtin
*@ed_arg_s: commands
*Return: 1, otherwise 0
*/

int execveEd_arg_s(char **ed_arg_s)
{
char *terminal_functions[] = {
"cd",
"env",
"help",
"exit"
};
int (*executableFunction[])(char **) = {
&cdDir,
&edEnviron,
&needHelp,
&edExit
};

unsigned long int i = 0;
if (ed_arg_s[0] == NULL)
{
return (-1);
}
for (; i < sizeof(terminal_functions) / sizeof(char *); i++)
{
if (strcmp(ed_arg_s[0], terminal_functions[i]) == 0)
{
return ((*executableFunction[i])(ed_arg_s));
}
}
return (execNew(ed_arg_s));
}
