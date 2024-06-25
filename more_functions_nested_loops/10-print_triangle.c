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

	for (rowIndex = 0; rowIndex <= size; rowIndex++)
	{
		for (charIndex = 0; charIndex < size; charIndex++)
		{
			if (charIndex < (size - rowIndex))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		if (rowIndex < size)
			_putchar('\n');
	}
}
