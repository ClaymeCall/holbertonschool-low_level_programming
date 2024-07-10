#include "main.h"

/**
 *free_grid - Frees a 2D array of ints.
 *@grid: Pointer to the 2D array
 *@height: Height of the array
 *
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
