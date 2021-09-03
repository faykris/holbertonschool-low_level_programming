#include "search_algos.h"
#include <math.h>


/**
 * min_t - Retunrs the minimal value between a & b
 * @a: integer value
 * @b: integer value
 *
 * Return: the minimal value, a or b
 */
int min_t(int a, int b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

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
	int step = sqrt(size), i = 0, found = 0, prev = 0;

	if (array == NULL)
		return (-1);
	while (array[min_t(step, (int)size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= (int)size)
		{
			prev -= (int)sqrt(size);
			step -= (int)sqrt(size);
			printf("Value found between indexes [%d] and [%d]\n", prev, step);
			for (i = prev; i <= (int)size - 1; i++)
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (-1);
		}
	}
	while (array[prev] < value)
	{
		if (!(array[min_t(step + sqrt(size), (int)size) - 1]
			< value) && found == 0)
		{
			printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
			printf("Value found between indexes [%d] and [%d]\n", prev, step);
			for (i = prev; array[i] <= value; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					break;
			}
			found = 1;
		}
		prev++;
	}
	if (array[prev] == value)
		return (prev);
	return (-1);
}
