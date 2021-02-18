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
	int i = 0, j = 0;  // len = 0,

	while (dest[i])
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
