#include <stdio.h>
/**
 * main - Prints lowercase alphabets in reverse.
 * Return: 0 on success
 */
int main(void)
{char c = 'z';
while (c <= 'z')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
