#include "main.h"

/**
 * jack_bauer - Prints all possible times in a day, at minute level. *
 */

void jack_bauer(void)
{
	char tens_hour_count;
	char hour_count;

	char tens_minute_count;
	char minute_count;

	int hour_nbr;
	int minutes_nbr;

	for (hour_nbr = 0; hour_nbr <= 23; hour_nbr++)
	{
		for (minutes_nbr = 0; minutes_nbr <= 59; minutes_nbr++)
		{
			/** Adding + '0' to convert results to char type */
			tens_hour_count = (hour_nbr / 10) + '0';
			hour_count = (hour_nbr % 10) + '0';
			tens_minute_count = (minutes_nbr / 10) + '0';
			minute_count = (minutes_nbr % 10) + '0';

			/** Printing all chars of the time */
			_putchar(tens_hour_count);
			_putchar(hour_count);
			_putchar(':');
			_putchar(tens_minute_count);
			_putchar(minute_count);
			_putchar('\n');
		}
	}
}
