#include "holberton.h"
/**
 * reverse_array - that reverses the content of an array of integers
 * @a: int pointer
 * @n: string value
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n;
	char b;

	j--;
	while (j != i)
	{
		b = a[i];
		a[i] = a[j];
		a[j] = b;
		i++;
		j--;
	}
}
