#include "function_pointers.h"

/**
 *int_index - Searches for an integer in an array.
 *@array: Array to search in.
 *@size: Size of the array.
 *@cmp: Pointer to the fonction that compares values. Returns boolean as int.
 *
 *Return: Index of the first match. -1 if no matches, or if size < 1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
