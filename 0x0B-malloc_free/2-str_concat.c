#include <stdlib.h>
#include "main.h"
/**
 *str_concat - concatenates two strings
 *@s1: string
 *@s2: string
 *Return: pointer to new concat
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int a, b, c, size;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (a = 0; s1[a]; a++)
;
for (b = 0; s2[b]; b++)
;
size = a + b + 1;
s = malloc(sizeof(char) * size);
if (s == NULL)
{
return (NULL);
}
for (c = 0; c < size; c++)
{
c < a ? (s[c] = s1[c]) : (s[c] = s2[c - a]);
}
return (s);
}
