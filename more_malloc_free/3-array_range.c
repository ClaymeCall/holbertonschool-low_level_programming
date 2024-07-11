#include "main.h"

/**
 *array_range - Creates an array of all integers between to values.
 *@min: Minimum value to include
 *@max: Maximum value to include
 *
 *Return: Pointer to newly created array, or NULL if error.
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; min + i <= max; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
