#include "main.h"
/**
 * _memcpy - copies memory location
 * @dest: memory location
 * @src: byte to be copied
 * @n: number of bytes copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src,unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
