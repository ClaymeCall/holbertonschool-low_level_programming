#include "variadic_functions.h"

/**
 *print_numbers - Prints numbers, followed by a new line
 *@separator: The string to be printed between numbers, as char *
 *@n: Count of arguments passed in the function, as const unsigned int.
 *
 *Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	if (n > 0)
	{
		if (separator != NULL)
		{
			for (i = 0; i < n - 1; i++)
			{

				printf("%d%s", va_arg(list, int), separator);
			}
		}
		else
		{
			for (i = 0; i < n - 1; i++)
			{

				printf("%d", va_arg(list, int));
			}
		}


		printf("%d\n", va_arg(list, int));

		va_end(list);
	}
}
