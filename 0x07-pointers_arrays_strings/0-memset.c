#include "holberton.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: string pointer
 * @b: string variable
 * @n: insigned int variable
 * Return: char type result
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
