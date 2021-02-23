#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @s: string pointer
 * @c: string variable
 * Return: char type result
 */
char *_strchr(char *s, char c)
{
	int i = 0, len = 0;

	while (s[len])
	{
		len++;
	}
	while (i <= len)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
		return (NULL);
	}

