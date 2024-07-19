#include "variadic_functions.h"

/**
 *print_strings - Prints strings, followed by a new line
 *@separator: The string to be printed between arguments, as char *
 *@n: Count of arguments passed in the function, as const unsigned int.
 *
 *Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *string;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);

		if (string == NULL)
			string = "(nil)";
	
		printf("%s", string);

		if (separator != NULL && i < n-1)
			printf("%s", separator);
	}

	va_end(list);
	printf("\n");
}
