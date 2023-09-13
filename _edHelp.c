#include "edshell.h"

/**
*needHelp - Help upon request
*@ed_arg_s: arguments
*Return: 1
*/

int needHelp(char **ed_arg_s)
{
char *terminal_functions[] = {
"cd",
"env",
"help",
"exit"
};
unsigned long int i = 0;
(void)(**ed_arg_s);

printf("\n:::type ---help for support\n");
printf("enter command…press enter\n");
printf(":\n");

for (; i < sizeof(terminal_functions) / sizeof(char *); i++)
{
printf("-> %s\n", terminal_functions[i]);
}
printf("manual page will come in handy\n");
return (-1);
}
