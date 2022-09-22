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
while (dest[i] != '\0')
{
i++;
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
