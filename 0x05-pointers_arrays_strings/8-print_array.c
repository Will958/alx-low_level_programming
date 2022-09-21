#include "main.h"
/**
 * print_array - print elements of an array of integers
 * @a: pointer
 * @n: n
 */
void print_array(int *a, int n)
{
short c = 0;
while (n-- > 0)
{
printf("%d", a[c++]);
if (n != 0)
printf(", ");
}
printf("\n");
}
