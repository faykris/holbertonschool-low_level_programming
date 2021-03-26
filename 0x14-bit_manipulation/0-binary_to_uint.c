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
