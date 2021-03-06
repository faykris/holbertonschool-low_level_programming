#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: char pointer
 * @s2: char pointer
 * @n: unsigned int value
 *
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n < j)
		j = n;
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s1[k])
	{
		ptr[k] = s1[k];
		k++;
	}
	while (s2[l] && (l < n))
	{
		ptr[k] = s2[l];
		k++;
		l++;
	}
	ptr[k] = '\0';
	return (ptr);
}
