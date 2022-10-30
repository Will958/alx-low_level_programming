#include <stdlib.h>
#include "main.h"
/**
 *_strdup - returns pointer to new string
 *@str: string
 *Return: char*
 */
char *_strdup(char *str)
{
char *s;
unsigned int a, b;
if (str == NULL)
{
return (NULL);
}
for (a = 0; str[a] != '\0'; a++)
;
a++;
if (a < 1)
{
return (NULL);
}
s = malloc(sizeof(char) * a);
if (s == NULL)
{
free(s);
return (NULL);
}
for (b = 0; b < a; b++)
{
s[b] = str[b];
}
s[b] = '\0';
return (s);
}
