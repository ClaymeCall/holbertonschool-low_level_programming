#include "main.h"

/**
 *print_diagonal - print a diagonal line.
 *@n: integer length of the diagonal to be printed.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int rowIndex;
	int charIndex;

	for (rowIndex = 0; rowIndex < n; rowIndex++)
	{
		for (charIndex = 0; charIndex <= rowIndex; charIndex++)
		{
			if (charIndex == rowIndex)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
				_putchar(' ');
		}

	}
	if (n < 0)
	{
		_putchar('\n');
	}
}
