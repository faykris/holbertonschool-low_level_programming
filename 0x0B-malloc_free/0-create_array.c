#include "holberton.h"
#include <stdio.h>

/**
 * create_array - function that creates an array of chars,
 *					and initializes it with a specific char
 * @size: integer value
 * @c: char value
 *
 * Return: String pointer value
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *arr;

	arr = malloc(size * sizeof(int));
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
