#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 *				by your alloc_grid function
 * @grid: pointer to poiter value
 * @height: int value
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i <= height)
	{
		free(grid[i]);
	}
	free(grid);
}
