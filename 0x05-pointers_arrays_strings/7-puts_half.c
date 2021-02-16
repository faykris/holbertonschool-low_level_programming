#include "holberton.h"

/**
 * puts_half - unction that prints half of a string followed by a new line
 * @str: character pointer variable
 * Return: none
 */

void puts_half(char *str)
{
	char *half = str;
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str--;

	half += (len % 2) ? (len + 1) / 2 : (len) / 2;

	while (half <= str)
	{
		_putchar(*half);
		half++;
	}
	_putchar('\n');
}
