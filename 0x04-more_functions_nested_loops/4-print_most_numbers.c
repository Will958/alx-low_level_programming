#include "main..h"
/**
 * print_most_numbers - function outputs numbers from 0 - 9.
 * _putchar - function displays the values follwed by a newline.
 */
void print_most_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
if (!(c == '2' && c == '4'))
{
_putchar (c);
}
}
_putchar ('\n');
}
