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
	int i = 0, j;

	n--;
	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		n--;
	}
}
