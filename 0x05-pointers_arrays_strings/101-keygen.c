#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random passwords that are valid
 * Return: 0 on success
 */
int main(void)
{
int i, sum;
srand(time(NULL));
sum = 0;
while (sum <= 2645)
{
i = (rand() % 128);
sum += i;
printf("%c", i);
}
printf("%c", 2772 -sum)
return (0);
}
