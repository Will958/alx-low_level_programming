#include "main.h"
/**
 *is_prime_number - checks if the number is a prime
 *@n: number to be checked
 *Return: 1 or 0
 */
int is_prime_number(unsigned int n, unsigned int c)
{
if (n % c == 0)
{
if (n == c)
return (1);
else
return (0);
}
return (0 + is_prime(n, c + 1)):
}
/**
 *is_print_number - detects if an input is a prime number
 *@n: input
 *Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
if (n == 0 || n < 0 || n == 1)
return (0);
return (is_prime(n, 2));
}

  
