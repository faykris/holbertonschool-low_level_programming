#include "holberton.h"
#include <stdio.h>
/**
* leng - function that convert a string to an integer.
* @s: string
* Return: integer value
*/

int leng(char *s)
{
	return (*s != '\0' ? 1 + leng(s + 1) : 0);
}

/**
* _atoi - function that convert a string to an integer
* @s: string
* Return: integer value
*/

int _atoi(char *s)
{
	int exp = 1, sign = 1, exit = 0, i, p;

	const int len = leng(s);

	for (p = len; p >= 0; p--)
	{
		if (*(s + p) == '-' && exp > 1)
			sign *= -1;
		for (i = 0; i <= 9; i++)
		{
			if (*(s + p) == ('0' + i))
			{
				if (((p + 1) <= len) &&
				    !((*(s + (p + 1)) >= '0') &&
				      (*(s + (p + 1)) <= '9')))
				{
					exp = 1;
					exit = 0;
				}
				exit += (i * exp);
				exp *= 10;
			}
		}
	}
	return ((exit * sign) + 0);
}
