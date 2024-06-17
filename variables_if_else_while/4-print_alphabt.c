#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabet in lowercase without 'q' and 'e'.
 *
 * Return: always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		/* print only if letter is not equal to 'q' OR 'e' */
		if (!(letter == 'q' || letter == 'e'))
		{
			putchar(letter);
		}
	}
	putchar('\n');

	return (0);
}
