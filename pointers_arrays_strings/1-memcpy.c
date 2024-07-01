/**
 *_memcpy - Copies n bytes for a memory address to another.
 *@src: Pointer to the source adress.
 *@dest: Pointer to the destination address.
 *@n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n > 0)
	{
		*ptr = *src;
		src++;
		ptr++;
		n--;
	}
	return (dest);
}
