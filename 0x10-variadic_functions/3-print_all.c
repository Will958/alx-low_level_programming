#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * p_char - prints characters
 * @c: arguments
 */
void p_char(va_list c)
{
printf("%c", va_arg(c, int));
}
/**
 * p_int - print integers
 * @a: arguments
 */
void p_int(va_list i)
{
printf("%d", va_arg(i, int));
}
/**
 * p_float - prints float values
 * @a: arguments
 */
void p_float(va_list a)
{
printf("%f", va_arg(a, double));
}
/**
 * p_string - prints strings
 * @a: arguments
 */
void p_string(va_list p)
{
char *st = va_arg(p, char *);
st == NULL ? printf("(nil)") : printf("%s", st);
}
/**
 * print_all - prints any type
 * @format: format symbols in order
 */
void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i, j;
i = j = 0;
char *s = "";
printType type[] = {
{ "c", p_char },
{ "i", p_int },
{ "f", p_float },
{ "s", p_string },
{NULL, NULL}
};
va_start(ap, format);
while (format && format[i])
{
j = 0;
while (j < 4)
{
if (*type[j].type == format[i])
{
printf("%s", s);
type[j].b(ap);
s = ", ";
}
j++;
}
i++;
}
printf("\n");
}
