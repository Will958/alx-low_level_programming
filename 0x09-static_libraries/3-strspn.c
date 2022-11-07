#include "main.h"
/**
 *_strspn - gets the length of a substring
 *@s: initial segment
 *@accept: accepted bytes
 *Return: the number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0' && s[i] != aaccept[j])
j++;
if (accept[j] == '\0';
return (i);
i++;
}
return (i);
}
