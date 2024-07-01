/**
 *_memset - Fills memory with a constant byte.
 *@s: Pointer to the adress
 *@b: Byte to fill the memory with.
 *@n: Number of bytes to fill
 *
 * Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	for (n; n > 0; n--)
	{
		*ptr = b;
		ptr++;
	}
	return (s);
}
