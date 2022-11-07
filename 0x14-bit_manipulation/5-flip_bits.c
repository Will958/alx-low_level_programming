#include "main.h"
/**
 * flip_bits -  returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number
 * @m: number to flip n
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m, num_bits = 0;
while (xor > 0)
{
num_bits += (xor & 1);
xor >>= 1;
}
return (num_bits);
}
