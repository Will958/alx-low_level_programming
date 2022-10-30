#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all args
 * @ac: number of arguments
 * @av: argument
 * Return: char*
 */
char *argstostr(int ac, char **av)
{
char *s;
int i, j, len, bufferlen;
i = j = len = bufferlen = 0;
if (ac == 0)
{
return (NULL);
}
if (av == NULL)
{
return (NULL);
}
for (i = 0; av[i]; i++)
{
for (j = 0; av[i][j]; j++)
{
len++;
}
}
s = (char *)malloc(sizeof(char) * len + ac + 1);
if (s == NULL)
{
return (NULL);
}
for (i = 0; av[i]; i++)
{
for (j = 0; av[i][j]; j++, bufferlen++)
{
s[bufferlen] = av[i][j];
}
s[bufferlen] = '\n';
bufferlen++;
}
s[bufferlen] = '\0';
return (s);
}
