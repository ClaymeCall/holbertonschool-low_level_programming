/**
 *_strstr - Locates a substring in a string
 *@haystack: String to search in
 *@needle: Substring to locate
 *
 *Return: Pointer to the first character of the located substring or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	int matching_chars = 0;
	int needle_len = 0;

	if (*needle == '\0')
		return (haystack);

	while (needle[i])
	{
		needle_len++;
		i++;
	}

	for (; *haystack ; haystack++)
	{
		if (needle[0] == *haystack)
		{
			matching_chars++;
			for (needle[++j]; needle[j]; j++)
			{
				if (needle[j] == haystack[j])
				{
					matching_chars++;
					if (matching_chars == needle_len - 1)
					{
						return (haystack);
					}
				}
			}
			matching_chars = 0;
		}
	}
	return ('\0');
}
