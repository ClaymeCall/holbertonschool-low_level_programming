/**
 *_strchr - Locates a character in a string.
 *@s: String to search
 *@c: Character to find
 *
 *Return: a pointer to the first occurence of c, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;

	return (s);
}
