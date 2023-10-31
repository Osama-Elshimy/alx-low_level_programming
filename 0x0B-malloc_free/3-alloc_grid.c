#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * Description: each element of the array is initialized to 0
 * @width: width of the array
 * @height: height of the array
 *
 * Return: NULL if width or height is 0 or negative or faliure,
 * pointer to the 2 dimensional array otherwise
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for rows */
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* Allocate memory for columns */
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == (NULL))
		{
			/* Free previously allocated memory on failure */
			for (j = 0; j < i; j++)
				free(grid[j]);

			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
