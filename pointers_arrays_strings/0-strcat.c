#include "main.h"

/**
 *_strcat - Concatenate two strings.
 *@dest: Pointer to the string that will be appended with src.
 *@src: Pointer to the string that will be appended to dest.
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int lendest;

	for (dest ; *dest; dest++);
	
	while (*src)
	{
		*dest = *src;
			src++;
			dest++
	}

	dest[i] = '\0';
	return (dest);
}
