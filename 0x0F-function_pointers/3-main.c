#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - checks functions
 *@argc: number of arguments
 *@argv: pointer to array
 *Return: 0
 */
int main(int argc, char argv[])
{
int num1, num2;
if (argc != 4)
{
printf("Error\n"), exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if (get_op_func(argv[2]) == NULL)
{
printf("Error\n"), exit(100);
}
printf("%d\n", (get_op_func(argv[2])(num1, num2)));
return (0);
}
