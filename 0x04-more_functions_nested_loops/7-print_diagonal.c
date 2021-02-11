#include "holberton.h"

/**
 * print_diagonal - draws a straight line in the terminal
 * @n: An integer value
 * Return: Don't return value
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					_putchar(92);
					_putchar(10);
					break;
				}
				else if (i > j)
				{
					_putchar(32);
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
