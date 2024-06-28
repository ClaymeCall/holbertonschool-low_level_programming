#include "main.h"

/**
 *_strcpy- Copies one string into another.
 *@dest: Pointer to the string that will be written.
 *@src: Pointer to the string that will be copied.
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}

