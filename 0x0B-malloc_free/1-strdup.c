#include "holberton.h"
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 *				space in memory
 * @str: string pointer
 *
 * Return: pointer value
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *dup;

	if (!str)
	{
		return ('\0');
	}
	dup = malloc(sizeof(char) * (i + 1));
	if (dup == 0)
	{
		return ('\0');
	}
	while (str[i])
	{
		i++;
	}
	while (j <= i)
	{
		dup[j] = str[j];
		j++;
	}
	return (dup);
}
