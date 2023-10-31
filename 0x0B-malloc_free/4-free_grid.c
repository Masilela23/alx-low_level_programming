#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function the frees 2 dimension
 * @grid: no. of colums
 * @height: no. of rows
 * Return: array
 */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}

	free(grid);
}
