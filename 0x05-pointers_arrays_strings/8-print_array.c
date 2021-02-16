#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: name integer of array
 * @n: number elements of array
 * Return: none
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *a);
		if (i < (n - 1) && *(a) != 0)
			printf(", ");
		i++;
		a++;
	}
	printf("\n");
}
