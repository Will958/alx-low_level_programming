#include "main.h"
/**
 * puts2 - prints all characters of a string
 * @str: string
 * Return: nothing
 */
void puts2(char *str)
{
int i;
while (str[i] != '\0')
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}
;