#include <stdlib.h>
#include "main.h"
/**
 *create_array - creates an array object
 *@size: creates and initializes array
 *@c: char
 *Return: char*
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;
if (size > 0)
{
s = malloc(sizeof(char) * size);
if (s == NULL)
{
return (NULL);
}
}
else
{
return (NULL);
}
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
