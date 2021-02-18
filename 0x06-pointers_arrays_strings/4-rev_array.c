#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - that reverses the content of an array of integers
 * @a: int pointer
 * @n: string value
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n)
		i++;
	i--;
	while (i > -1)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(", ");
		}
		i--;
	}
	printf("\n");
}
