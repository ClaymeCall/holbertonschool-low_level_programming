#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all digits of base 10 using ASCII code instead of char type.
 *
 * Return: always 0
 */
int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		putchar(48 + i);
	}
	putchar('\n');

	return (0);
}
