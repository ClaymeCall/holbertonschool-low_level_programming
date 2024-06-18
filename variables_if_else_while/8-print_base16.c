#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the digits of base 16 in lowercase.
 *
 * Return: always 0
 */
int main(void)
{
	char charToPrint;

	for (charToPrint = '0'; charToPrint <= '9'; charToPrint++)
	{
		putchar(charToPrint);
	}
	for (charToPrint = 'a'; charToPrint <= 'f'; charToPrint++)
	{
		putchar(charToPrint);
	}

	putchar('\n');

	return (0);
}
