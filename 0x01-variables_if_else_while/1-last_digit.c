#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if the last digit of a random number is
 * greater than or less than 5, or is zero..
 * Return: 0 on success
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Last digit of %d is ", n);
if (n % 10 > 5)
{
printf("%d and is greater than 5\n", n % 10);
}
else if (n % 10 == 0)
{
printf("%d and is 0\n", n % 10);
}
else
{
printf("%d and is less than 6 and not 0\n", n % 10);
}
return (0);
}
