#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a tw dimenesional
 * array of integers
 * @width: array size
 * @height: array siz
 * Return: nothing
 */

int **alloc_grid(int width, int height)
{
	int **space;
	int x, y;

	if (height <= 0 || width <= 0)

	return (NULL);

	space = malloc(sizeof(int *) * height);

	if (space == NULL)

	return (NULL);


	for (x = 0; x < height; x++)
	{
	space[x] =  malloc(sizeof(int) * width);

	if (space[x] == NULL)
	{
	for (; x >= 0; x--)

	free(space[x]);

	free(space);
	return (NULL);
	}
	}
	for (x = 0; x < height; x++)
	{
	for (y = 0; y < width; y++)
	space[x][y] = 0;
	}

	return (space);
}
