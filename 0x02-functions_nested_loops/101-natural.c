#include <stdio.h>
/**
 * main - computes and prints the sum of
 * all multiples of 3 or 5 less than 1024.
 * Return: nothing
 */
int main(void)
{
int i, res;
for (i = 0; i < 1024; i++)
if (i % 3 == 0 || i % 5 == 0)
res += i;
printf("%d\n", res);
return (0);
}
