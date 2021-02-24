#include "holberton.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string pointer
 * Return: Integer value
 */
int _strlen_recursion(char *s)
{
	int len = 0;
	if (*s != '\0')
	{
		s++;
		_strlen_recursion(s);
		len = (_strlen_recursion(s) + 1);
		return (len);
	}
	else
	{
		return (0);
	}
}
