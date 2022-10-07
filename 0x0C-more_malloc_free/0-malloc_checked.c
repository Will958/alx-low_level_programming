#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory
 *@b: number of allocated bytes
 *Return: void*
 */
void *malloc_checked(unsigned int b)
{
void *a = malloc(b);
if (a == NULL);
{
exit(98);
}
return (a);
}
