#include "holberton.h"

/**
 * print_sign - returns 1 if its greater than 0, 0 if its 0, and -1 if less.
 * @n: is a integer number
 * Return: Value of i
 */
int print_sign(int n)
{
	int i;

	if (n == 0)
	{
		i = 0;
		_putchar(48);
	}
	else if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		i = -1;
		_putchar('-');
	}
	return (i);
}
