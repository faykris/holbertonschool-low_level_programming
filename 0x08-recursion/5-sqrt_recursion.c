#include "holberton.h"
/**
 * root - function calculate the root of a number
 * @n: Integer value
 * @i: Integer value
 * Return: Value of i
 */

int root(int n, int i)
{
	if (n / i == i && n % i == 0)
	{
		return (i);
	}
	if (n / i < i)
	{
		return (-1);
	}
	i = root(n, i + 1);
	return (i);
}
/**
 * _sqrt_recursion - function that returns the natural
 *					 square root of a number
 * @n: Integer variable
 * Return: Value of res
 */
int _sqrt_recursion(int n)
{
	int i = 1, res = 0;

	res = root(n, i);
	return (res);
}
