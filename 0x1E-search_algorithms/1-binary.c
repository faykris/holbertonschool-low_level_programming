#include "search_algos.h"

/**
 * recusive_search - Use Binary search algorithm with recursion
 * @array: array to be processed
 * @value: value to be searched in the array
 * @start: Index on the first position
 * @end: Index on the last position
 *
 * Return: Index of a element searched, -1 if not found
 */
int recusive_search(int *array, int value, size_t start, size_t end)
{
	size_t pos = 0, i, j = 0;

	printf("Searching in array: ");
	for (i = start; i <= end; i++, j++)
	{
		if (j != 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");

	pos = (start + end) / 2;
	
	if (array[pos] == value)
		return (pos);
	if (start == end)
		return (-1);
	if (array[pos] < value)
		return (recusive_search(array, value, pos + 1, end));
	else
		return (recusive_search(array, value, 0, pos - 1));
}

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
	if (array == NULL)
		return (-1);

	return (recusive_search(array, value, 0, size - 1));
}
