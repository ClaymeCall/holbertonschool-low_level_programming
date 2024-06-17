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
	printf("Size of a char: %lu bytes(s)", sizeof(char));
	printf("Size of an int: %lu bytes(s)", sizeof(int));
	printf("Size of a long int: %lu bytes(s)", sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)", sizeof(long long int));
	printf("Size of a float: %lu bytes(s)", sizeof(float));

	return (0);
}
