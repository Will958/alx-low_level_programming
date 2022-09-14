#include "main.h"
/**
 * _islower - tests whether a character is a lowercase
 * letter from the English alphabet.
 * @c: character to test
 * Return: 1 if letter is lowercase and 0 if not.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
