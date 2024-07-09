#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - Creates an array of chars and initializes it with a char.
 *@size: Size of the array as unsigned int
 *@c: Char to initialize the array with
 *
 *Return: A char pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size * sizeof(char));
	int i;

	if (size == 0)
		return (NULL);

	for (i = 0; i <= size - 1; i++)
	{
		array[i] = c;
	}

	return (array);
}