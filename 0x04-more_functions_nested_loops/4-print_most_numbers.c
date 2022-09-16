#include "main..h"
/**
 * print_most_numbers - function outputs numbers from 0 - 9.
 * _putchar - function displays the values follwed by a newline.
 */
void print_most_numbers(void)
{
char a
for (a = '0'; a <= '9'; a++)
{
if (!(a == '2' && a == '4'))
{
_putchar (a + '0');
}
}
_putchar ('\n');
}
