#include "main.h"

/**
 *print_numbers - print from 0 to 9, than a newline.
 *
 * Return: void
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
