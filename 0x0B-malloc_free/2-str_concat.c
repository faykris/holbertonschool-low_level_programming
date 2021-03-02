#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string pointer
 * @s2: string pointer
 *
 * Return: string pointer value
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *arr;

	if (!s1)
		return (NULL);
	if (!s2)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	arr = malloc(sizeof(char) + (i + j));
	if (arr == 0)
		return (NULL);
	while (k <= i)
	{
		arr[k] = s1[k];
		k++;
	}
	k--;
	while (k <= (i + j))
	{
		arr[k] = s2[l];
		k++;
		l++;
	}
	return (arr);
}
