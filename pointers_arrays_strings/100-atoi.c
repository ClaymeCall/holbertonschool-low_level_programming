/**
 * _atoi - converts a string into an int
 * @s: string to convert
 *
 * Return: The result of the conversion as an int.
 */
int _atoi(char *s)
{
	int res_int = 0;
	int res_int_sign = 1;
	int i = 0;

	/* Going through the string until the first convertible char */
	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		/* Storing the sign of the future int */
		if (s[i] < '0' || s[i] > '9')
		{
			if (s[i] == '-')
				res_int_sign *= -1;
		}
		i++;
	}

	/* Convert the number */
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		res_int = res_int * 10 + (s[i] - '0');
		i++;
	}

	return (res_int * res_int_sign);
}
