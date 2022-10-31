#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator - execute a function on each element of an array
 *@array: array input
 *@size: array size
 *@action: pointer to the function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t a;
if (array && action)
{
for (a = 0; a < size; a++)
{
action(array[a]);
}
}
}
