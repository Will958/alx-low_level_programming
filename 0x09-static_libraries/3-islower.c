#include "main.h"
/**
 *_islower - 1 if input is lowercase
 *0 otherwise
 *@c: character in ASCII code
 *Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\0');
}
