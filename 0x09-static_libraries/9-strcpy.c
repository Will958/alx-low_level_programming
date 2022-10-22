#include "main.h"
#include <stdio.h>
/**
 *_strcpy - copies string pointed by src
 *includes terminating null bytes to the
 *buffer pointed to by dest
 *@dest: destination
 *@src: source
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int count = 0;
while (count >= 0)
{
*(dest + count) = *(src + count);
if (*(src + count) == '\0')
break;
count++;
}
return (dest);
}
