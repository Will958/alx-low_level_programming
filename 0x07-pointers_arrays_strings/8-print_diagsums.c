#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sum of two diagonals of a square matrix of integers
 *@a: input int array
 *@size: input int
 *Return: void
 */
void print_diagsums(int *a, int size)
{
  int x, y, z;
  for (i = 0; i < (size * size); i += size + 1)
    x += a[i];
  for (i = size - 1; i < (size * size - 1); i += size - 1)
    y += a[i];
  printf("%d, %d\n", x, y);
}
