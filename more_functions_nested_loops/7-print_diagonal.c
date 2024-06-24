#include "main.h"

/**
 *print_diagonal - print a diagonal line.
 *@n: integer length of the diagonal to be printed.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		if (i != 0 && i == j)
			_putchar('\\');

		_putchar('\n');
	}
}
