#include "main.h"
/**
 *_strcpy - copies string to another string
 *@dest: destination
 *@src: source
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int a;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
