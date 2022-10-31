#include "function_pointers.h"
/**
 *int_index - search for integer
 *@array: pointer to array
 *@size: array size
 *@cmp: pointer to function
 *Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int a;
a = -1;
if (size <= 0 || !(array) || !(cmp))
return (-1);
while (++a < size)
{
if (cmp(array[a]))
return (a);
}
return (-1);
}
