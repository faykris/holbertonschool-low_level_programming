#include "holberton.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @s: pointer
 * Return: char value
 */
char *rot13(char *s)
{
	int i = 0, j = 0;
	char *ul = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *lu = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		while (j < 52)
		{
			if (s[i] == ul[j])
			{
				s[i] = lu[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
