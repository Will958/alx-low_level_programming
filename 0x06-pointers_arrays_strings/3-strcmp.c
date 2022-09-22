#include "main.h"
/**
 * _strcmp - compares two strings ending with first difference char
 * @s1: string to be compared
 * @s2: string to compair
 * Return: difference between the first charater that are not the same
 */
int _strcmp(char *s1, char *s2)
{
int a;
for (i = 0; s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a]; a++);
return (s1[a - s2[a]]);
}
