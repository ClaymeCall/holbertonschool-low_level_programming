#include <stdio.h>

/**
 *main - prints all of its arguments.
 *@argc: Count of arguments passed in main.
 *@argv: Array of all the arguments passed in main
 *
 *Return: 0 if success, 1 if failure, as int.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);


	return (0);
}
