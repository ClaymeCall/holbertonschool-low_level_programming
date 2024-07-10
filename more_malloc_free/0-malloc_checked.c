#include "main.h"

/**
 *malloc_checked - Allocates memory using malloc.
 *@b: Size of the array as unsigned int
 *
 *Return: A void pointer to the array.
 */
void *malloc_checked(unsigned int b)
{
	if (b == 0)
		exit(98);

	void *array = malloc(b);

	if (array == NULL)
		exit(98);

	return (array);
}
