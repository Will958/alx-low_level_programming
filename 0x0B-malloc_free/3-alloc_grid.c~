#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - create a 2D int array
 *@width: width size
 *@height: height size
 *Return: int**
 */
int **alloc_grid(int width, int height)
{
int a, b;
int **s;
a = b = 0;
if (height < 1)
return (NULL);
s = (int **)malloc(height * sizeof(s));
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
for (b = 0; b < a; a++)
free(s[b]);
free(s);
return (NULL);
}
for (b = 0; b < width; b++)
s[a][b] = 0;
}
return (s);
}
