#include "holberton.h"

/**
 * array_binary - return the binary representation of a number.
 * @n: decimal number.
 *
 * Return: converted number to decimal in a string, NULL it's fails.
 */
char *array_binary(unsigned long int n)
{
	int i = 64;
	char *bitarray = NULL;

	bitarray = malloc(i);
	if (!bitarray)
	{
		return (NULL);
	}
	i--;
	while (i >= 0)
	{
		if ((n >> i & 1) == 1)
		{
			bitarray[i] = '1';
		}
		else
		{
			bitarray[i] = '0';
		}
		i--;
	}
	return (bitarray);
}

/**
 * flip_bits- returns the number of bits you would need to flip to
 *				get from one number to another.
 * @n: decimal number to compare
 * @m: decimal number to compare
 *
 * Return: number of bits changed between m and n.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	char *bits1, *bits2;
	int i = 0, j = 0;

	bits1 = array_binary(n);
	bits2 = array_binary(m);

	if (bits1 == NULL || bits2 == NULL)
	{
		return (0);
	}
	while (bits1[i])
	{
		if (bits1[i] != bits2[i])
		{
			j++;
		}
		i++;
	}
	free(bits1);
	free(bits2);

	return (j);
}
