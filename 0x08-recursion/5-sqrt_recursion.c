#include "main.h"
/**
 *checker- returns the natural square of a number
 *@n: input
 *@c: accumilator
 *Return: square root of -1
 */
int checker(int n, int c)
{
if (c % (n / c) == 0)
{
if (c * (n / c) == n)
return (c);
else
return (-1);
}
return (0 + checker(n, c + 1));
}
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: input
 *Return: natural square root
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (checker(n, 2)):
}
