#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *sum_them_all - finds sum of all its parameters.
 *@n: no of input variables
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list num;
unsigned int i, sum;
if (n == 0)
{
return (0);
}
va_start(num, n);
sum = 0;
for (i = 0; i < n; i++)
{
sum += va_arg(num, int);
}
va_end(num);
return (sum);
}
