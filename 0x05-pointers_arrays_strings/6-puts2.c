#include "holberton.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: character pointer variable
 * Return: none
 */

void puts2(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		if ((len % 2) == 0)
			_putchar(*str);
		len++;
		str++;
	}
	_putchar('\n');
}
