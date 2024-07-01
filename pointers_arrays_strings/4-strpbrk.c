#include <stddef.h>

/**
 *_strpbrk - Locates any bytes of an array in a string.
 *@s: String to search
 *@accept: bytes to search inside s
 *
 *Return: a pointer to the first occurence of a matching byte,
 *or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int matched = 0;

	while (*s && matched == 0)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				matched = 1;
				break;
			}
		}
		if (matched == 1)
			break;
		s++;
	}

	if (matched == 1)
		return (s);
	return (NULL);
}
