#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - Writes the concatenation of two string to newly allocated space.
 *@s1: String 1
 *@s2: String 2
 *
 *Return: Pointer to the newly allocated concatenation of the two strings
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	char *res_str;
	int i;

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
			res_str[i] = *s1;
			s1++;
			i++
		}
	}
	if (s2)
	{
		while (i < len1 + len2)
		{
			res_str[i] = *s2;
			s2++;
			i++
		}
	}

	res_str[i] = '\0';

	return (res_str);
}
