#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: 2 dimensional grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
