#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2
 *				dimensional array of integers
 * @width: integer value
 * @height: integer value
 *
 * Return:  integer pointer to pointer value
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);
	if (!p)
	{
		return (NULL);
	}
	while (i < height)
	{
		p[i] = malloc(sizeof(int *) * width);
		if (!p[i])
		{
			while (i >= 0)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			p[i][j] = '\0';
			j++;
		}
		i++;
	}
	return (p);
}
