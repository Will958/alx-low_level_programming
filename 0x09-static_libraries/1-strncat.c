#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: destination
 *@src: source
 *@n: number of bytes used from src
 *Return: the pointer to output string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
for (j = 0; dest[j] != '\0'; j++)
;
while (src[i] != '\0' && i < n)
{
dest[j + i] = src[i];
i++
}
return (dest);
}
