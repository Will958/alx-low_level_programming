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
  int i, j, k;
  I = 0;
  r = 0;
  for (i = 0; i < size; i++)
    {
      k = (i * size) + i;
      I += *(a + k);
    }
  for (j = 0; j < size; j++)
    {
      k = (j * size) + (size - 1 - j);
      r += *(a + k);
    }
  printf("%i, %i\n", I, r);
}
