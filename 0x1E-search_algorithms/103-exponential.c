#include "search_algos.h"

/**
 * binarySearch - Use Binary search algorithm with recursion
 * @array: array to be processed
 * @value: value to be searched in the array
 * @start: Index on the first position
 * @end: Index on the last position
 *
 * Return: Index of a element searched, -1 if not found
 */
int binarySearch(int *array, int value, size_t start, size_t end)
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
		return (binarySearch(array, value, pos + 1, end));
	else
		return (binarySearch(array, value, 0, pos - 1));
}

/**
 * min - return the minimal value
 * @a: size of array
 * @b: value to be searched on array
 *
 * Return: the minimal value between a & b
 */
size_t min(int a, int b)
{
	if (a <= b)
		return ((size_t)a);
	else
		return ((size_t)b);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *					using the Exponential search algorithm
 * @array: array to be processed
 * @size: size of array
 * @value: value to be searched on array
 *
 * Return: Index of a element searched, -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	int i = 1, end = 0;

	if (array == NULL)
		return (-1);
	while (i < (int)size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (i != (int)size)
		end = i;
	else
		end = i - 1;
	printf("Value found between indexes [%d] and [%d]\n", i / 2, end);
	return (binarySearch(array, value, i / 2, min(i, (int)size - 1)));
}
