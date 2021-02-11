#include "holberton.h"

/**
 * _isupper - check the code for Holberton School students.
 * @c: integer value
 * Return: Value of c.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
