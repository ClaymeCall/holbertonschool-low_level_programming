#include "main.h"
#include <stdio.h>

/**
 *get_bit - Returns the value of a bit at a given index.
 *@n: The number to process, as unsigned long int.
 *@index: The index of the bit to return, as unsigned int.
 *
 *Return: The value of the bit, or -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	n >>= index;

	return (n & 1);
}
