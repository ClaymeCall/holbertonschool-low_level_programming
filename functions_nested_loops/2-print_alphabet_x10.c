#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
