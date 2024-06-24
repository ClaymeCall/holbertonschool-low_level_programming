#include "main.h"

/**
 *more_numbers - print from 0 to 14 ten times, than a newline.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int number_to_print;
	char tens;
	char units;

	for (i = 0; i <= 10; i++)
	{
		for (number_to_print = 0; number_to_print <= 14; number_to_print++)
		{
			tens = (number_to_print / 10) + '0';
			units = (number_to_print % 10) + '0';
			if (tens > 0)
				_putchar(tens);
			_putchar(units);

		}
	_putchar('\n');
	}
}
