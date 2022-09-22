#include "main.h"
/**
 * _strncat - concentrates two strings
 * @dest: return pointer
 * @src: source pointer
 * @n: number of bytes of src
 * Return: result string
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
