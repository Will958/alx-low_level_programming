#include "main.h"
/**
 * print_square - function that prints a square.
 * @size: the size of the square.
 * _putchar - function to print # and newline.
 */
void print_square(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 1; j < size; j++)
{
_putchar('#');
}
_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
