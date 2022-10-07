#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *mul - function that multiplies two positive integers
 *@num1: input integer
 *@num2: input integer
 *Return: 0(on success)
 */
int mul(int num1, int num2)
{
int *ptr;
int a;
if (num1 && num2)
{
ptr = malloc(sizeof(int));
ans = num1 * num2;
*ptr = ans;
prinf("%d\n", *ptr);
free(ptr);
}
else
{
printf("Error\n");
exit(98);
}
return (0);
}
/**
 *main - calls mul functions of two arguments
 *@argc: count of input string argument
 *@argv: string argument
 *Return: 0(success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
int x = atoi(agrv[1]);
int y = atoi(argv[2]);
mul(x, y);
return (0);
}
