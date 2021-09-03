#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *					using the Binary search algorithm
 * @array: array to be processed
 * @size: size of array
 * @value: value to be searched on array
 *
 * Return: Index of a element searched, -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int lo = 0, mi = 0, hi = (int)size - 1, i;

	if (array == NULL)
		return (-1);

	while (hi >= lo)
	{
		mi = lo + (hi - lo) / 2;
		printf("Searching in array: ");
		for (i = lo; i <= hi; i++)
		{
			if (i == lo)
				printf("%d", array[i]);
			else
			{
				printf(", %d", array[i]);
			}
		}
		printf("\n");
		if (array[mi] == value)
			return (mi);
		if (array[mi] > value)
			hi = mi - 1;
		else
			lo = mi + 1;
	}
	return (-1);
}
