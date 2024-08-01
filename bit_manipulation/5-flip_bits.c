#include "main.h"

/**
 *flip_bits - Returns the count of differing bits between two numbers.
 *@n: First number, as unsigned long int.
 *@m: Second number, as unsigned long int.
 *
 *Return: Count of differing bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int xor = n ^ m;

	while (xor > 0)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
