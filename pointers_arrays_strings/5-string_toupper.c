/**
 * string_toupper - converts all lowercase chars of a string to uppercase
 * @s: string to process
 *
 * Return: the uppercased string
 */
char *string_toupper(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}

	return (s);
}
