#include <stdio.h>

/**
 *main - prints its own name.
 *@argc: Count of arguments passed in main.
 *@argv: Array of all the arguments passed in main
 *
 *Return: 0 if success, 1 if failure, as int.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
