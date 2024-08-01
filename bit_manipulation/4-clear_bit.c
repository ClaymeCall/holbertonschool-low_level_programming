#include "main.h"

/**
 *clear_bit - Sets a bit to 0 at a given index in a number.
 *@n: Pointer to the number, as unsigned long int *.
 *@index: Index of the bit to set to 0.
 *
 *Return: 1 if it worked, -1 if not.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (n == NULL || index > sizeof(n) * 8)
		return (-1);

	mask <<= index;

	*n = *n & ~mask;

	return (1);
}
