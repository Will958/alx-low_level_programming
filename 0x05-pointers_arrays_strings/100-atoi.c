#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
int a, b;
unsigned int x;
int y = 1;
char z;
a = 0;
x = 0;
while (*(s + a) != '\0')
{
z = *(s + a);
if (z == '-')
{
y *= -1;
}
if (z >= '0' && z <= '9')
{
x = y;
while (*(s + y) > 47 && *(s + y) < 58)
{
x = (x * 10) + *(s + y) - '0';
y++;
}
break;
}
x++;
}
if (y < 0)
x *= y;
return (x);
}
