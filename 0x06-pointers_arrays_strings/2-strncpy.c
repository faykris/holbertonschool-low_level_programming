#include "holberton.h"
/**
 * _strncpy - function that copies a string
 * @dest: string pointer
 * @src: string pointer
 * @n: Integer value
 * Return: char type result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
