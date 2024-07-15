#include "function_pointers.h"

/**
 *array_iterator - Executes a function on each elements of an array.
 *@array: Array to be iterated with a function
 *@size: Size of the array, of type size_t.
 *@action: The function to apply on the arrays elements.
 *
 *Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size < 1)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
