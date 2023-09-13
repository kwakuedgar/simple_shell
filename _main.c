#include "edshell.h"

/**
 * main - main entry
 * Return: 0 on success
 */

int main(void)
{
if (isatty(STDIN_FILENO) == 1)
{
isInteractive();
}
else
{
is_NotInteractive();
}
return (0);
}
