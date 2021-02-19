#include "holberton.h"
/**
 * leet - function that encodes a string into 1337
 * @s: pointer
 * Return: char value
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char *let = "AaEeOoTtLl";
	char *num = "4433007711";

	while (s[i])
	{
		while (let[j])
		{
			if (s[i] == let[j])
			{
				s[i] = num[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
