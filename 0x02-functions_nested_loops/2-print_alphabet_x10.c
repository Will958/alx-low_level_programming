#include "main.h"
/**
 * prints 10 times the alphabet in lowercase
 * Return: nothing.
 */
void print_alphabet_x10(void)
{
int i;
char c;
for (i = 0; i < 10; ++i)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
