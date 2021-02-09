#include "holberton.h"
/**
 * _islower - checks for lowercase character
 * Description - is similar a function islower
 * @c: The number to print
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	int i;

	if ((c > 96) && (c < 123))
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
