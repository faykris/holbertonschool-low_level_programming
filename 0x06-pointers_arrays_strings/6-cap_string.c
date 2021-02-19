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

	if (str[0] >= 97 && str[0] <= 122)
	{
		s[0] = s[0] - 32;
	}
	while (s[i])
	{
		while (sep[j])
		{
			if (s[i] == sep[j] && s[i + 1] != '\0')
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
					s[i + 1] = str[i + 1] - 32;
				}
				break;
			}
			J++;
		}
		i++;
	}
	return (s);
}
