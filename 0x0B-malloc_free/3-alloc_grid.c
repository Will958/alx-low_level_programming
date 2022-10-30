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
int a, b;
int **s;

if (width < 1 || height < 1)
return (NULL);
s = malloc(height * sizeof(int *));
if (s == NULL)
{
free(s);
return (NULL);
}
for (a = 0; a < height; a++)
{
s[a] = malloc(width * sizeof(int));
if (s[a] == NULL)
{
for (a--; a >= 0; a--)
free(s[i]);
free(s);
return (NULL);
}
}
for (a = 0; a < height; a++)
for (b = 0; b < width; b++)
s[a][b] = 0;
return (s);
}
