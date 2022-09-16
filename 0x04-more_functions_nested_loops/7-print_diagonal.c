#include "main.h"
/**
 * print_diagonal - Draws diagonal line on terminal.
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
_putchar('\n')
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
