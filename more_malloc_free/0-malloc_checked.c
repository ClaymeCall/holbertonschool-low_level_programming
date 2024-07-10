#include "main.h"

/**
 *create_array - Creates an array of chars and initializes it with a char.
 *@size: Size of the array as unsigned int
 *@c: Char to initialize the array with
 *
 *Return: A char pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int i;

	if (array == NULL)
		return (0);
	if (size == 0)
		return (NULL);

	for (i = 0; i <= size - 1; i++)
	{
		array[i] = c;
	}

	return (array);
}
