#include "holberton.h"
/**
 * _memcpy - function that copies memory area
 * @dest: string pointer
 * @src: string pointer
 * @n: unsigned int variable
 * Return: char type result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	return (dest);
}
