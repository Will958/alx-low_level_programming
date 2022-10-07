#include <stdlib.h>
#include "main.h"
/**
 *_realloc - function that relocates a memory block
 *@ptr: memory previously allocated by malloc
 *@old_size: size of the allocated space for ptr
 *@new_size: new size in bytes of the new memory block
 *Return: void*
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new;
unsigned int i;
if (new_size == old_size)
return (ptr);
if ((new_size == 0) && (ptr != NULL))
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
new = malloc(new_size);
if (new == NULL)
return (NULL);
}
if (new_size > old_size && (ptr != NULL))
{
new = malloc(new_size);
if (new == NULL)
return (new);
for (i = 0; i < old_size; i++)
new[i] = *((char *)ptr + 1);
free(ptr);
}
return (new);
}
