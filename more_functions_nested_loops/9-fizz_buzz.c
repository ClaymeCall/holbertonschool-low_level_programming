#include "main.h"
#include <stdio.h>

/**
 *fizz_buzz - prints 1 to 100 and replaces multiples of 3 or 5 by fizz or buzz.
 *
 * Return: void
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		else if ((i % 3 != 0) && (i % 5 != 0))
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
}
