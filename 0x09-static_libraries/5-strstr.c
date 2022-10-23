#include "main.h"
/**
 *_strncmp - compairs two strings within b bytes
 *@s1: string to check
 *@s2: string to check from
 *@b: number of bytes to check
 *Return: 0 if the strings are the same
 *other number if they are different
 */
char _strncmp(char *s1, char *s2, unsigned int b)
{
unsigned int i;
for (i = 0; i <= b && *s1 == *s2 && *s1 != '\0' && *s2 != '\0'; i++)
{
s1++;
s2++;
}
return (i - b);
}
#include <stddef.h>
/**
*_strstr - locates a substring
*@haystack: main C string to be scanned
*@needle: small string to be searched within the haystack string
*Return: haystack
*/
char *_strstr(char *haystack, char *needle)
{
int i;
while (needle[i] != '\0')
i++;
while (*haystack != '\0')
{
if (_strncmp(haystack, needle, i) == 0)
return (haystack);
haystack++;
}
return (NULL);
}
