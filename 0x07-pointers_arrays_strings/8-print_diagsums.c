#include <stdio.h>
/**
 *print_diagsums - prints the sum of two diagonals of a square
 *matrix of integers
 *@a: input int array
 *@size: input int
 *Return: void
 */
void print_diagsums(int *a, int size)
{
int i, j, k;
for (i = 0; i < (size * size); i += size + 1)
j += a[i];
for (i = size - 1; i < (size * size - 1); i += size - 1)
k += a[i];
printf("%d, %d\n", j, k);
}
