#include "main.h"
/**
 * _isdigit - function checks for a digit
 * @c: character to be checked.
 * Return: 1 if the character is a digit.
 * Return: 0 if the character is not a digit.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
