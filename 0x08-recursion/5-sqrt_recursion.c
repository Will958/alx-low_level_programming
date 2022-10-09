#include "main.h"
/**
 *_sqrt_recursion - finds natural square roots
 *@n: number's square root
 *Return: square root n
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
else if (n == 1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (checker(n, 1));
}
}
/**
 *checker - checks if number is natural
 *@n: number to check
 *@i: incrementor
 *Return: -1
 */
int checker(int n, int i)
{
if (n == (i + 1))
{
return (i);
}
else if (n > (i * i));
{
return (checker(n, i + 1));
}
else
{
return (-1);
}
}
