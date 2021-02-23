#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - function that locates a substring
 * @haystack: string pointer
 * @needle: string pointer
 * Return: char type result
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, len = 0, loc = 0;

	while (needle[len])
	{
		len++;
	}
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			while (haystack[i + j] == needle[j])
			{
				loc++;
				if (loc == len)
				{
					return (haystack + i);
				}
				j++;
			}
			j = 0;
			loc = 0;
		}
		else if (len == 0)
			return (haystack);
		i++;
	}
	return (NULL);
}
