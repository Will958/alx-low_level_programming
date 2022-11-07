#include "main.h"
/**
 *_isdigit - checks if parameter is a number btwn 0 - 9
 *@c: input number
 *Return: 1 if character is a digit
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
