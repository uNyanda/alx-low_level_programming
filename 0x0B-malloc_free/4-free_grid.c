#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 *
 * @grid: pointer to a 2 dimensional array of integers
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			return;
		}
		free(grid[i]);
	}
	free(grid);

}
