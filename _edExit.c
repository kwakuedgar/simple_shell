#include "edshell.h"

/**
*edExit - Function from st exits shell
*@ed_arg_s: arguments
*Return: 0
*/

int edExit(char **ed_arg_s)
{
if (ed_arg_s[1])
{
return (atoi(ed_arg_s[1]));
}
else
{
return (0);
}
}
