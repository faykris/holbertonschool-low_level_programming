#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two
 *					diagonals of a square matrix of integers
 * @a: int pointer
 * @size: int variable
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0, su1 = 0, su2 = 0, di1 = 0, di2 = (size - 1);

	while (i < size)
	{
		su1 += a[di1];
		su2 += a[di2];
		di1 += (1 + size);
		di2 += (size - 1);
		i++;
	}
	printf("%d, %d\n", su1, su2);
}
