#include "main.h"

/**
 *string_nconcat - Concatenates n bytes of a string to another, to heap memory.
 *@s1: String 1
 *@s2: String 2
 *@n: number of bytes of s2 to concatenate, as unsigned int.
 *
 *Return: Pointer to the newly allocated concatenation of the two strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *res_str;
	unsigned int i = 0, j = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	res_str = malloc((len1 + len2 + 1) * sizeof(char));

	if (res_str == NULL)
		return (NULL);

	if (s1)
	{
		while (i < len1)
		{
			res_str[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < len1 + n)
		{
			res_str[i] = s2[j];
			i++;
			j++;
		}
	}

	res_str[i] = '\0';

	return (res_str);
}
