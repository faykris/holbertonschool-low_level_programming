#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: integer value
 * @av: string pointer to pointer
 *
 * Return: String pointer value
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, l = 0, len = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			j++;
		}
		len += j + 1;
		j = 0;
		i++;
	}
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (k < ac)
	{
		while (av[k][l] != '\0')
		{
			*(p + len) = av[k][l];
			len++;
			l++;
		}
		*(p + len) = '\n';
		l = 0;
		len++;
		k++;
	}
	return (p);
}
