#include "main.h"

/**
 * print_sign - prints the sign of the parameter.
 *@n: Integer to be sign-tested
 *
 *
 * Return: 1 if positive, -1 is negative, 0 if == 0.
 */

int print_sign(int n)
{

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
