#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: character pointer variable
 * Return: none
 */

void rev_string(char *s)
{
	char *let = s, tmp;

	while (*s != '\0')
	{
		s++;
	}

	for (s = s - 1; let <= s; s--)
	{
		tmp = *let;
		*let = *s;
		*s = tmp;
		let++;
	}
}
