#include "main.h"
/**
 *_islower - 1 if input is lowercase
 *0 otherwise
 *@c: character to test
 *Return: 1 if lowercase 0 if not lowercase
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
