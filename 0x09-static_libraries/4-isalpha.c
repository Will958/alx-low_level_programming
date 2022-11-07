#include "main.h"
/**
 *_isalpha - test if a character is from the English alphabet
 *@c: character to be checked
 *Return: 1 if an English character, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

