#include "main.h"

/**
 * free_grid - frees 2d grid created by malloc in task 3
 * @grid: 2d array
 * @height: array height
 *
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)

	{
		free(grid[j]);
	}
	free(grid);
}
