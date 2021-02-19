#include "holberton.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @s: pointer
 * Return: char value
 */
char *cap_string(char *s)
{
	int i, j;
	char *sep = " \t\n,;.!?\"(){}";

	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] = s[0] - 32;
	}
	for (i = 0; s[i]; i++)
	{
		for (j = 0; sep[j]; j++)
		{
			if (s[i] == sep[j] && s[i + 1] != '\0')
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] = s[i + 1] - 32;
				}
				break;
			}
		}
	}
	return (s);
}
