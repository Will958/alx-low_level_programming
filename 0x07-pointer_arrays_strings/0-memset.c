#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: pointer for memory filled
 * @b: constant to be filled
 * @n: number of bytes filled
 * Return: s
 */
char *memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
