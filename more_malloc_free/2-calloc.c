#include "main.h"

/**
 *_calloc - Allocates memory for an array and inits its values to 0.
 *@nmemb: Count of elements to allocate memory for.
 *@size: Size of each elements in bytes, as unsigned int.
 *
 *Return: Pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		array[i] = 0;

	return ((void *)array);
}
