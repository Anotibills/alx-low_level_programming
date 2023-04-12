#include "main.h"

/**
 * free_grid - free a 2 dimensional grid
 * @grid: 2 dimensional grid
 * @height: height dimension of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
