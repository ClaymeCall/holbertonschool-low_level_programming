#include "main.h"
/**
 *_pow_recursion - Returns x to the power of y.
 *@x: number to multiply by itself
 *@y: number of times to multiply x
 *
 *Return: The result of the calculation, or -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
