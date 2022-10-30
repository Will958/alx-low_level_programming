#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - creates a 2D int array
 *@width: width size
 *@height: height size
 *Return: int**
 */
int **alloc_grid(int width, int height)
{
 int i, j;
int **s;
i = j = 0;
if (height < 1)
return (NULL);
s = (int **)malloc(height * sizeof(s));
if (s == NULL)
{
free(s);
return (NULL);
}
for (i = 0; i < height; i++)
{
s[i] = malloc(width * sizeof(int));
if (s[i] == NULL)
{
for (j = 0; j < i; j++)
free(s[j]);
free(s);
return (NULL);
}
for (j = 0; j < width; j++)
s[i][j] = 0;
}
return (s);
}
