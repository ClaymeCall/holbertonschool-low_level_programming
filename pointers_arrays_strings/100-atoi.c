/**
 * _atoi - converts a string into an int
 * @s: string to convert
 *
 * Return: The result of the conversion as an int.
 */
int _atoi(char *s)
{
	int return_int;
	int return_int_sign = 1;
	char *start_of_int;
        char *end_of_int;

	int i;

	while (s[i])
	{
		/* Going through the string until the first convertible char */
		while ((s[i] < '0' || s[i] > '9') || s[i] != '-' || s[i] != '+')
			i++;

		/* Storing the sign of the future int */
		if (s[i] < '0' || s[i] > '9')
		{
		       if (s[i] == '-' && (s[i] >= '0' && s[i] <= '9'))
			       return_int_sign = -1;
		       i++;
		}

		/* Placing pointer to start and end of the int */
		start_of_int = &s[i];
		end_of_int = &s[i];
		while (*end_of_int >= '0' && *end_of_int <= '9')
			end_of_int++;
	}

}
