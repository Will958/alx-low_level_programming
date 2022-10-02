#include <stdio.h>
#include <stdlib.h>
/**
 *main - finds minimum numbers of cents to make change for an amount of money
 *@argc: argument count only accepts ints separated by spaces
 *@argv: argument vector
 *Return: 0(success) 1(failure)
 */
int main(int argc, char *argv[])
{
int cents, coins;
coins = 0;
if (args == 1 || argc > 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[i]);
while (cents > 0)
{
if (cents >= 25)
{
cents -= 25;
}
else if (cent >= 10)
{
cents -= 10;
}
else if (cents >= 2)
{
cents -= 2;
}
else if (cents >= 1)
{
cents -= 1;
}
coins += 1;
}
printf("%d\n", coins);
return (0);
}
