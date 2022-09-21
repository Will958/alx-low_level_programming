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
a = b;
while (*(s + b) > 47 && *(s + b) < 58)
{
a = (a * 10) + *(s + b) - '0';
b++;
}
break;
}
a++;
}
if (y < 0)
x *= y;
return (x);
}
