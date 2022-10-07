#include <stdlib.h>
#include "main.h"
/**
 *array_range - creates an array of integers.
 *@min: first value
 *@max: last value
 *Return: array
 */
int *array_range(int min, int max)
{
int *array, i, size;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
array = malloc(sizeof(int) * size);
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
array[i] = min++;
return (array);
}
