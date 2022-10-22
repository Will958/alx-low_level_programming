#include "main.h"
/**
 *_isalpha - test if a character is from the English alphabet
 *@c: character in ASCII
 *Return: 1 if an English character, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

