#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 * Description - is similar a function isalpha
 * @c: The number to print * Return: 1 if c is lowercase, 0 otherwise
 * Return: Value of i
 */

int _isalpha(int c)
{
	int i;

	if (((c > 96) && (c < 123)) || ((c > 64) && (c < 91)))
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
