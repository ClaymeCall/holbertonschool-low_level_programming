#include "main.h"

/**
 *_sqrt_lookup - Checks if the square root was found
 *@n: Number to calculate the square root of.
 *@i: Placeholder for the square root value
 *
 *Return: the natural square root of n.
 */
int _sqrt_lookup(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (_sqrt_lookup(n, i + 1));
}

/**
 *_sqrt_recursion - Returns the square root of a number
 *@n: Number to calculate the square root of.
 *
 *Return: the square root of n as int, or -1 if no natural square root is found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_lookup(n, 0));
}
