#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as
 *					a parameter on each element of an array
 * @array: integer array
 * @size: long unsigned size of array
 * @action: function pointer
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i = 0;
	void (*print_array)(int) = action;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			print_array(array[i]);
			i++;
		}
	}
}
