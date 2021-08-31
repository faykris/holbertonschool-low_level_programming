#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 *					using the Binary search algorithm
 * @array: array to be processed
 * @size: size of array
 * @value: value to be searched on array
 *
 * Return: Index of a element searched, -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int squa = sqrt(size), step = 0, prev = 0, i = 0;

	if (array == NULL)
		return (-1);
	while (array[step + squa] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, step);
		step += squa;
		if ((value >= prev && value <= step) || step > (int)size - 1)
		{
			printf("Value found between indexes [%d] and [%d]\n", prev, step);
			for (i = prev; i <= step && i <= (int)size - 1; i++)
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
			prev = step;
			break;
		}
		prev = step;
	}
	while ((array[prev] < value && prev <= (int)size - 1) || value == 0)
	{
		printf("Value checked array[%d] = [%d]\n", prev, step);
		step += squa;
		if ((value >= prev && value <= step) || step > (int)size - 1)
		{
			printf("Value found between indexes [%d] and [%d]\n", prev, step);
			for (i = prev; array[i] <= value; i++)
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
			prev = array[i - 1];
			break;
		}
	}
	if (array[prev] == value)
		return (prev);

	return (-1);
}
