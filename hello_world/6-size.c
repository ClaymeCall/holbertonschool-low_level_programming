#include <stdio.h>


/**
 * main - Prints the size of all variable types for the current machine.
 *
 * Return: Returns nothing after printing
 */
int main(void)
{
	/**
	 *  Declaring all variables
	 */
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	/**
	 * Printing each variable size in a sentence
	 */
	printf("Size of a char: %lu bytes(s)", sizeof(c));
	printf("Size of an int: %lu bytes(s)", sizeof(i));
	printf("Size of a long int: %lu bytes(s)", sizeof(li));
	printf("Size of a long long int: %lu bytes(s)", sizeof(lli));
	printf("Size of a float: %lu bytes(s)", sizeof(f));

	return (0);
}
