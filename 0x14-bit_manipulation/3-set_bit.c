#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string binary number.
 *
 * Return: converted number, 0 when invalid character or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0, res = 0, bit = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (b[i] == '0')
		{
			bit = 0;
		}
		else
		{
			bit = 1;
		}
		res += bit << j;
		i--;
		j++;
	}
	return (res);
}

/**
 * set_bit - returns the value of a bit at a given index.
 * @n: number to analize in binary
 * @index: position of bit to return
 *
 * Return: value of the bit at index index or -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i = 64, j = 0;
	char *bitnum = NULL;

	if ((int)index > i)
	{
		i = index + 1;
	}
	bitnum = malloc(i + 1);
	if (!bitnum)
		return (-1);

	while (i >= 0)
	{
		if (i == (int)index)
		{
			bitnum[j] = '1';
		}
		else if ((*n >> i & 1) == 1)
		{
			bitnum[j] = '1';
		}
		else
		{
			bitnum[j] = '0';
		}
		i--;
		j++;
	}
	bitnum[j] = '\0';
	*n = binary_to_uint(bitnum);
	free(bitnum);
	return (1);
}
