#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: input string
 *@accept: input string
 *Return: s or 0 if no match
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int x, y;
for (x = 0; s[x]; x++)
{
for (y = 0; accept[y]; y++)
{
if (s[x] == accept[y])
break;
}
if (accept[y])
return (s + x);
}
return (0);
}
