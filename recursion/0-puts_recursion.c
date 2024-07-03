#include "main.h"

/**
 *_puts_recursion - prints a string, using recusion.
 *@s: string to print
 *
 *Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s != '\0')
	{
		_puts_recursion(++s);
	}

}
