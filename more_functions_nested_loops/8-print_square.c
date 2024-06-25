#include "main.h"

/**
 *print_square - prints a square with # characters.
 *@n: integer length of square sides to be printed.
 *
 * Return: void
 */
void print_square(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}

