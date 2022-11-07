#include "main.h"
/**
 *_strcmp - compairs two strings
 *@s1: string
 *@s2: string
 *Return: 0 if s1 = s2, other numbers if not
 */
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0;
si[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i];
i++;
return (s1[i] - s2[i]);
}
