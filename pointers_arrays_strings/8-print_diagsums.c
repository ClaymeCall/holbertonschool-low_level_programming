/**
 *print_diagsums - prints the sums of two diagonals of a 2D array.
 *@a: 2D array
 *@size: size of the diagonals we want to sum
 *
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
		sum2 += a[size - i - 1][size - i - 1];
	}
	printf("%d, %d\n", sum1, sum2);
}
