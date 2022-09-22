#include "main.h"
/**
 * _strncat - concentrates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes of src
 * Return: pointer to the result string
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
for (j = 0; dest[j] != '\0'; j++)
while (src[i] != '\0' && i < n)
{
dest[j + i] = src[i];
i++;
}
return (dest);
}
