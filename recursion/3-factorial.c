#include "main.h"
/**
 *factorial - Returns the factorial of a given number.
 *@n: Number of which to calculate the factorial
 *
 *Return: Factorial as int, or -1 if error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (factorial(n) * factorial(n - 1));
}
