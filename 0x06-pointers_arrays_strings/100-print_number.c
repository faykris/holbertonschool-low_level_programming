#include "holberton.h"
/**
 * print_number - function that prints an integer
 * @n: integer variable
 * Return: nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = -(n);
	}

	if (n > 9999 && n < 100000)
	{
		_putchar('0' + n / 10000);
		_putchar('0' + (n % 10000) % 1000);
		_putchar('0' + ((n % 10000) % 1000) / 100);
		_putchar('0' + (((n % 10000) % 1000) % 100) / 10);
	}
	else if (n > 999 && n < 10000)
	{
		_putchar('0' + n / 1000);
		_putchar('0' + (n % 1000) / 100);
		_putchar('0' + ((n % 1000) % 100) / 10);
	}
	else if (n > 99 && n < 1000)
	{
		_putchar('0' + n / 100);
		_putchar('0' + (n % 100) / 10);
	}
	else if (n > 9 && n < 999)
		_putchar('0' + n / 10);
	_putchar('0' + n % 10);
}
