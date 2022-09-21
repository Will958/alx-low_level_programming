#include "main.h"
#include <string.h>
/**
 * print_rev - prints string in reverse
 * @s: string
 * Return: nothing
 */
void print_rev(char *s)
{
{
int i = 0;
while (*s != '\0')
{
s++;
i++;
}
while (i > 0)
{
s--;
_putchar(*s);
i--;
}
_putchar('\n');
}
}
