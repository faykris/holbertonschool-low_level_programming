#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: string binary number.
 *
 * Return: converted number, 0 when invalid character or b is NULL.
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
 * flit  - sets the value of a bit to 0 at a given index.
 * @n: number to analize in binary
 * @index: position of bit to return
 *
 * Return: value of the bit at index index or -1 if an error occured.
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
	return (j);
}
