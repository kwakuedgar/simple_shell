#include "edshell.h"

/**
 * tknizer - Tokenizes input
 * @input: string input
 * Return: pointer to array of string
 */

char **tknizer(char *input)
{
int i = 0;
char **tkns;
char *tkn;
int size_BuFFer = 64;

tkns = malloc(size_BuFFer * sizeof(char *));

if (!tkns)
{
fprintf(stderr, "Token memory allocation failed\n");
exit(EXIT_FAILURE);
}
tkn = strtok(input, ED_DELIM);
while (tkn != NULL)
{
if (tkn[0] == '#')
{
break;
}
tkns[i] = tkn;
i++;
if (i >= size_BuFFer)
{
size_BuFFer += size_BuFFer;
tkns = realloc(tkns, size_BuFFer *sizeof(char *));
if (!tkns)
{
fprintf(stderr, "Token memory allocation failed");
exit(EXIT_FAILURE);
}
}
tkn = strtok(NULL, ED_DELIM);
}
tkns[i] = NULL;
return (tkns);
}
