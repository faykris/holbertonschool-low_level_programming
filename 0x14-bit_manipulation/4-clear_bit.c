#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to analize in binary
 * @index: position of bit to return
 *
 * Return: value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 100)
	{
		return (-1);
	}

	if ((n >> index & 1) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to analize in binary
 * @index: position of bit to set value
 *
 * Return: value of the bit at index index or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int get = 0;

	get = get_bit(*n, index);
	if (get == 1)
	{
		*n = *n - (1 << index);
		return (1);
	}

	return (-1);
}
