#include "main.h"
/**
 * print_diagonal - Draws diagonal line on terminal.
 * @n: the number of times the backslash character should be printed.
 */
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i; j++)
{
if (i != 1)
_putchar(' ');
if (i == j)
{
_putchar('\\');
_putchar('\n');
}
}
}
}
else
_putchar('\n');
}
