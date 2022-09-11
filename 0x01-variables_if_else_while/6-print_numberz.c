#include <stdio.h>
/**
 * main - prints 0-9 without using varios keywords,
 * and using putchar 2 times only.
 * Return: 0 on success
 */
int main(void)
{
int i = '0';
while (i <= '9')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
