#include "main.h"
/**
 *_strstr - compairs two strings within b bytes
 *@s1: string to check
 *@s2: string to check from
 *@b: number of bytes to check
 *Return: 0 if the strings are the same
 *other number if they are different
 */
char *_strstr(char *s1, char *s2)
{
char *as1;
char *bs2;
while (*as1 != '\0')
{
as1 = s1;
bs2 = s2;
while (*s1 != '\0' && *bs2 != '\0' && *s1 == *bs2)
{
s1++;
bs2++;
}
if (!*bs2)
return (as1);
s1 = as1 + 1;
}
return (0);
}

