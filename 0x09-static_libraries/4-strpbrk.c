#include "main.h"
/**
 *_strpbrk - search for any set of bytes in a string
 *@s: scanned string
 *@accept: string with characters to match
 *Return: s
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i;
while (*s != '\0')
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
return (s);
}
s++
}
return (0);
}
