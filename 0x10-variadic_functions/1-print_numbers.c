#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_numbers - prints numbers
*@separator: string to be printed btwn numbers
*@n: no of integers passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list(m);
va_start(m, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(m, int));
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(m);
}
