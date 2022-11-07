#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints string
 * @separator: string printed between string
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *c;
va_list(st);
va_start(st, n);
for (i = 0; i < n; i++)
{
c = va_arg(st, char*);
if (*c)
{
printf("%s", c);
}
else
{
printf("(nil)");
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(st);
}
