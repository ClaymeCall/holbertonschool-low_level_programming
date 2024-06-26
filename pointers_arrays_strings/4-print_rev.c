#include "main.h"

/**
 *print_rev - Prints a string in reverse.
 *@s: The string to print in reverse.
 *
 *Return: void.
 */

void print_rev(char *s)
{
	int i;

	while (s[i])
		i++;
	for (i--; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
