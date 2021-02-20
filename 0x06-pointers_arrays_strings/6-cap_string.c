#include "holberton.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @s: pointer
 * Return: char value
 */
char *cap_string(char *s)
{
	int i = 0, j = 0;
	char *sep = " \t\n,;.!?\"(){}";

	if (s[i] >= 97 && s[i] <= 122)
		s[i] -= 32;

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			while (sep[j])
			{
				if (s[i - 1] == sep[j])
				{
					s[i] -= 32;
				}
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (s);
}
