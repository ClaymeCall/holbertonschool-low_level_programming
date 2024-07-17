#include "variadic_functions.h"

/**
 *sum_them_all - Sums all of its parameters.
 *@n: Count of arguments passed in the function, as int.
 *
 *Return: Sum of all arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	unsigned int i;
	int sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);

}
