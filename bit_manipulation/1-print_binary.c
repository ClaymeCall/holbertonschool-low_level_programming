#include "main.h"

/**
 *print_binary - Prints the base 2 representation of a base 10 integer.
 *@n: Base 10 number as unsigned long int.
 *
 *Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 0x8000000000000000;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Finding the first 1 of binary n */
	while (!(mask & n) && mask > 0)
		mask >>= 1;

	while (mask > 0)
	{
		if (mask & n)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
