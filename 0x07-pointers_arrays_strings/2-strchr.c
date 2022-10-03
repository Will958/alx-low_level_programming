#include "main.h"
/**
 *_strchr - locates char in a string
 *@s: input string
 *@c: char to location
 *Return: pointer to the first occurrence of the char c
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
else if (*(s + 1) == c)
{
return (s + 1);
}
s++;
}
return (s + 1);
}
