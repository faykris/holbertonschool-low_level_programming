#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: Is a Integer
 * Return: Don't return value
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n != 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
				n--;
			}
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}	
	else
	{
		while (n != 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
				n++;
			}
		}
	}
	printf("\n");
}
