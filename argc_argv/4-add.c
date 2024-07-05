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

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("0\n");
			return (1);
		}

		result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}
