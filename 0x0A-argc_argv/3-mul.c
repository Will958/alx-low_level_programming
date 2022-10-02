#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints product of second and third arg
 *@argc: argument count
 *@argv: argument vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
int p;
if (argc == 3)
{
p = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", p);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
