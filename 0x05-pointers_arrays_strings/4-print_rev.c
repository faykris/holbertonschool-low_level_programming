#include "holberton.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a new line
 * @s: character pointer variable
 * Return: none
 */

void print_rev(char *s)
{
	int len, i;
	
	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = 1; i <= len; i++)
	{
		_putchar(*(s - i));
	}
	
	_putchar('\n');
}
