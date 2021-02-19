#include "holberton.h"
/**
 * string_toupper - that changes all lowercase letters to uppercase
 * @s: pointer
 * Return: string value
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
