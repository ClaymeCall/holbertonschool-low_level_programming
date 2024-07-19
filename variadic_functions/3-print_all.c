#include "variadic_functions.h"

/**
 *print_all - Function that prints anything, following a format
 *@format : list of types of arguments to follow, as const char *
 *
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, format);
	while (format[i] && format == NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				break;
		}

		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	var_end(args);
	printf("\n");
}
