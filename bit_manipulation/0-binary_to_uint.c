#include "main.h"

/**
 *binary_to_uint - Converts a binary number to an unsigned base 10 int.
 *@b: Pointer to the binary number as a string of 0s and 1s.
 *
 *Return: The base 10 unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;
	unsigned int pow_of_two = 1;

	if (b == NULL)
		return (0);

	/* Calculating the length of the string & checking for illegal chars*/
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		++i;
	}

	/* Decrement i to point before the null byte in the string */
	--i;

	while (i >= 0)
	{
		if (b[i] == '1')
			result += pow_of_two;
		pow_of_two *= 2;
		--i;
	}

	return (result);
}

