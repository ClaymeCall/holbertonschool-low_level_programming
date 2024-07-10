#include "main.h"

/**
 *alloc_grid - Returns a pointer to a 2D array of ints.
 *@width: first dimension
 *@height: second dimension
 *
 *Return: Pointer to the allocated array
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid == NULL)
		{
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
