#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabet in reverse, in lowercase.
 *
 * Return: always 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
