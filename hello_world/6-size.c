#include <stdio.h>

/**
 * main - Prints the size of all variable types for the current machine.
 *
 * Return: Returns nothing after printing
 */
int main(void)
{
	/**
	 * Printing each variable size in a sentence
	 */
	printf("Size of a char: %lu bytes(s)\n", sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %lu bytes(s)\n", sizeof(float));

	return (0);
}
