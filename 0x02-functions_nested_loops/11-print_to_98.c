#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: Is a Integer
 * Return: Don't return value
 */
void print_to_98(int n)
{

	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
		{
			n--;
		}
		else if (n < 98)
		{
			n++;
		}
	}
	printf("%i\n", 98);
}
