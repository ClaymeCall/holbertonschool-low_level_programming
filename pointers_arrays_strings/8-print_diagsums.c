#include <stdio.h>
/**
 *print_diagsums - prints the sums of two diagonals of a 2D array.
 *@a: 2D array
 *@size: size of one sub-array
 *
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int sum_a = 0, sum_b = 0;

	for (i = 0; i < size; i++)
	{
		sum_a += a[i * size + i];
		sum_b += a[size * size - 1 - i * size - j];
		j--;
	}

	printf("%d, %d\n", sum_a, sum_b);
}
