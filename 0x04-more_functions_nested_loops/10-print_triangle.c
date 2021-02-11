#include "holberton.h"

/**
 * print_triangle - draws a straight line in the terminal
 * @size: An integer value
 * Return: Don't return value
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
		{
			_putchar(' ');
		}
		for (k = i; k > 0; k--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
