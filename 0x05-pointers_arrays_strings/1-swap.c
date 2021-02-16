#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer pointer variable
 * @b: integer pointer variable
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int chg;

	chg = *b;
	*b = *a;
	*a = chg;
}
