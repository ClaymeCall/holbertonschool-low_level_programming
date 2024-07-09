#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - Copies a string to a newly allocated memory space
 *@str: String to copy
 *
 *Return: A char pointer to the string copy.
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *array;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	array = malloc((i + 1) * sizeof(char));

	if (array == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		array[i] = str[i];

	return (array);
}
