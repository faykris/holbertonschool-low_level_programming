#include "holberton.h"

/**
 * _isdigit - Verify si the character is digit.
 * @c: integer value
 * Return: Value of c.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
