#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *@n: Integer to be processed
 *
 *
 * Return: n if n is positive of 0, -n if n is negative.
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
