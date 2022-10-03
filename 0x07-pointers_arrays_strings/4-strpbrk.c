#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: input string
 *@accept: input string
 *Return: s or 0 if no match
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int x,y;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (accept[j])
return (s + i);
}
return (0);
}
