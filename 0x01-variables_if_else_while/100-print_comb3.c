#include <stdio.h>
/**
 * main - Numbers separated by commas - 3
 * Description: print all combinations of 2 digigt numbers with , and space
 * Return: 0 (success)
 */
int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 <= 9; dig1++)
	{
		for (dig2 = 0; dig2 <= 9; dig2++)
		{
			if (dig1 > dig2 || dig1 == dig2)
			{
				continue;
			}
			else
			{
				putchar(dig1 + '0');
				putchar(dig2 + '0');
				if (dig1 != 8 || dig2 != 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
