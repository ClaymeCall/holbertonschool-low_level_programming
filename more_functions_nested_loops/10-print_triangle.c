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
        for (rowIndex = 0; rowIndex < n; rowIndex++)
        {
                for (charIndex = 0; charIndex < n; charIndex++)
                {
                        if (charIndex < (n - rowIndex))
                        {
                            putchar(' ');
                        }
                        else
                        {
                            putchar('#');
                            putchar('\n');
                        }
                }

        }
}
