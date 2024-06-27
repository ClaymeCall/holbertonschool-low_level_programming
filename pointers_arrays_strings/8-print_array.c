#include "main.h"
#include <stdio.h>

/**
 *print_array - Prints elements of an int array up to the n'th one.
 *@a: Array of ints from which to print elements
 *@n: integer count of elements to print from a
 *
 *Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
		printf("%d, ", a[i]);
	printf("%d", a[i]);
}