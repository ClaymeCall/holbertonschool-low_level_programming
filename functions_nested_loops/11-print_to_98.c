#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - prints from the argument to the int 98
 *@n: integer from which to start to print
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
				printf(", ");
		}
	}
	else

		for (i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (i != 98)
				printf(", ");
		}

	putchar('\n');
}
