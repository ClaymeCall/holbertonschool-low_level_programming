#include "main.h"

/**
 * _strncat - concatenates two string up to the n-th character
 * @dest: string to be appended with n characters from src
 * @src: string to concat at the end of dest
 * @n: count of char to concat from string src
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;

	while (dest[i] != 0)
		i++;

	while (src[j] != 0 && n > j)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
