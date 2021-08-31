#include "search_algos.h"

/**
 * recursive_search - Searches with recursion method
 * @array: array to be processed
 * @lo: lower index of array
 * @hi: higher index of array
 * @x: value to be searched in the array
 *
 * Return: Index of a element searched, -1 if not found
 */
int recursive_search(int *array, int lo, int hi, int x)
{
	int pos;

	if (lo <= hi && x >= array[lo])
	{
		pos = lo
			  + (((double)(hi - lo) / (array[hi] - array[lo]))
				 * (x - array[lo]));
		if (x <= array[hi])
			printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] == x)
			return (pos);
		if (array[pos] < x)
			return (recursive_search(array, pos + 1, hi, x));
		if (array[pos] > x)
			return (recursive_search(array, lo, pos - 1, x));
	}
	return (-1);
}
/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *					using the Interpolation search algorithm
 * @array: array to be processed
 * @size: size of array
 * @value: value to be searched on array
 *
 * Return: Index of a element searched, -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (recursive_search(array, 0, size - 1, value));
}
