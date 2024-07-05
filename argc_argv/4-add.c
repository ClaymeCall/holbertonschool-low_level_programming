#include <stdio.h>
#include <stdlib.h>

/**
 *main - Adds positive numbers
 *@argc: Count of arguments passed to main
 *@argv: Array containing the arguments passed to main
 *
 *Return: 1 if error
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 0;
	int j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		while (arg[j] != '\0')
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		result += atoi(arg);
	}

	printf("%d\n", result);
	return (0);
}
