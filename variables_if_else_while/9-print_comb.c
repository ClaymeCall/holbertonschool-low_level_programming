#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all digits of base 10 separated by commas.
 *
 * Return: always 0
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);

		if (digit < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
