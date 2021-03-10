#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 * @array: integer array
 * @size: lnteger value
 * @cmp: function pointer
 * Return: nothing
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, val = 0;
	int (*int_index)(int) = cmp;

	if (size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		val = int_index(array[i]);
		if (val == 1)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
