#include "holberton.h"
/**
 * _strncat - function that concatenates two strings - 2
 * @dest: string pointer
 * @src: string pointer
 * @n: Integer value
 * Return: char type result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	do	{
		dest[i] = src[j];
		i++;
		j++;
	} while (j > n || src[i]);
	return (dest);
}

