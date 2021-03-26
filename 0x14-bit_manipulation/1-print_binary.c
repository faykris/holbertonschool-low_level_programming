#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: string binary number.
 *
 * Return: converted number, 0 when invalid character or b is NULL.
 */
void print_binary(unsigned long int n)
{
	int i = 0;

	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}
	while (n >> i != 0 && i < 100)
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		if ((n >> i & 1) == 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		i--;
	}
}
