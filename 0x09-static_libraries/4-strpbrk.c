#include "main.h"
/**
 *_strpbrk - search for any set of bytes in a string
 *@s: scanned string
 *@accept: string with characters to match
 *Return: s
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; *(s + i) != '\0'; i++)
{
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + i) == *(accept + j))
return (s + i);
}
}
return ('\0');
}
