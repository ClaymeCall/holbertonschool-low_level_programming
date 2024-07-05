#include <stdio.h>
#include <stdlib.h>

/**
 *main - Multiplies two integers.
 *@argc: Count of arguments passed in main.
 *@argv: Array of all the arguments passed in main
 *
 *Return: 0 if success, 1 if failure, as int.
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int num_a = atoi(argv[1]);
		int num_b = atoi(argv[2]);

		printf("%d\n", num_a * num_b);

		return (0);
	}

	printf("Error\n");
	return (1);
}
