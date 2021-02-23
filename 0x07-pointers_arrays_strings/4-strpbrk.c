#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string pointer
 * @accept: string pointer
 * Return: char type result
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
