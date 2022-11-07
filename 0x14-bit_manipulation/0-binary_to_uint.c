#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - function that returns length of a string.
 * @s: a string
 * Return: integer value.
 */
int _strlen(char *s)
{
int i = 0;
while (s[i])
{
i++;
}
return (i);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int j = 0;
int i, leng;
if (b == NULL)
{
return (0);
}
leng = _strlen(b);
for (i = 0; i != leng; i++)
{
if (b[leng - i - 1] == '0')
{
j += 1 << i;
}
else if (b[leng - i - 1] != '0')
{
return (0);
}
}
return (j);
}
