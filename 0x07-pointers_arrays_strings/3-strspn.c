#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string pointer
 * @accept: string pointer
 * Return: unsigned int type result
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, u = 0, ter = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				ter = 0;
				u++;
				break;
			}
			else
				ter = 1;
			j++;
		}
		if (ter == 1)
			break;
		j = 0;
		i++;
	}
	return (u);
}
