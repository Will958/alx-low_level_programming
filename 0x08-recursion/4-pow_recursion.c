#include "main.h"
/**
 *_pow_recursion finds power of a number
 *@x: number to be raised
 *@y: number of times to raise
 *Return: x power y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y <= 0)
return (1);
else
{
return (x * _pow_recursion(x, y - 1));
}
}
