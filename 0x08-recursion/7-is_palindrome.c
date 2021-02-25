#include "holberton.h"
/**
 * leng - calculate the length of a string
 * @s: char pointer
 * Return: Integer value of length
 */

int leng(char *s)
{
	int size = 0;

	if (*s == '\0')
	{
		return (0);
	}

	return (size + 1 + leng(s + 1));
}
/**
 * compare - compare the forward and backward strings
 * @forw: integer value
 * @back: integer value
 * @s: char pointer
 * Return: 0 or 1 when is palindrome
 */

int compare(int forw, int back, char *s)
{
	if (s[forw] == s[back])
	{
		if (forw > back)
		{
			return (1);
		}
		return (compare(forw + 1, back - 1, s));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - function that returns 1 if a string is
 *					a palindrome and 0 if not
 * @s: char pointer
 * Return: Integer value
 */
int is_palindrome(char *s)
{
	char res;
	int i;
	int der = 0;


	i = leng(s);

	if (i == 1)
	{
		return (1);
	}

	res = (compare(der, i - 1, s));
	return (res);
}
