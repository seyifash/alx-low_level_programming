#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid -  function that frees a 2 dimensional grid previously created
 * @grid: the 2d grid to be freed
 * @height: dimension of greed
 * Return: nothing
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
