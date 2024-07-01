/**
 *_strspn - Gets the length of a prefix substring.
 *@s: string to process
 *@accept : List of chars to be matched with the initial segment of s.
 *
 *Return: The number of matching bytes as unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int i;
	
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s == accept[i])
			{
				counter++;
				break;
			}
		}
	}
}
