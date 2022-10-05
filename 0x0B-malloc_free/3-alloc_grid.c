#include "main.h"
/**
 * alloc_grid - a fxn that returns a pointer to
 *	a 2 dimesional array of integers
 *
 * @width: width
 * @height: height
 *
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		for (i = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
