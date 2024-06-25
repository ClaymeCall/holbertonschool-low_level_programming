#include "main.h"

/**
 *print_triangle - prints a isosceles right-angled triangle.
 *@size: integer length of two sides of the triangle.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int rowIndex;
	int charIndex;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (rowIndex = 0; rowIndex < size; rowIndex++)
	{
		for (charIndex = 0; charIndex < size; charIndex++)
		{
			if (charIndex < ((size - 1) - rowIndex))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}

