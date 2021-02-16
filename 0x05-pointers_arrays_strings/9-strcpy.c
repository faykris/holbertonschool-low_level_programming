#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - function that prints n elements of an array of integers
 * @dest: name integer of array
 * @src: number elements of array
 * Return: char value
 */

char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (a);
}
