#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: void pointer
 * @old_size: unsigned int value
 * @new_size: unsigned int value
 *
 * Return: pointer integer value
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *newptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		return (NULL);
	}
	while (i < (new_size - old_size))
	{
		newptr[i] = *((char *)ptr + 1);
		i++;
	}
	free(ptr);
	return (newptr);
}
