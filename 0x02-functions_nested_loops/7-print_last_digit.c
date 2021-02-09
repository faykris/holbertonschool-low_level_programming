#include "holberton.h"

/**
 * print_last_digit - returns the value of the last digit of n
 * @n: Is an integer number
 * Return: Value of i
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar('0' + i);
	return (i);
}
