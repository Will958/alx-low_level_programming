#include "main.h"
/**
 * print_number - prints a number
 * @n: Input number
 * Return: void.
 */

void print_number(int n)
{
i = n;
if (n < 0)
{
_putchar(45);
i = -n;
}
if (i / 10)
print_number(i / 10);
_putchar((i % 10) + '0');
}
