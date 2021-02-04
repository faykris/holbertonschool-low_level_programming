#include <stdio.h>
/**
 * main - Number separated by commas
 * Description: print all the numbers followed by , and space
 * Return: 0 (success)
 */
int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 <= 9; dig1++)
	{
		dig2 = 0;
		for (dig2 = 0; dig2 <= 9; dig2++)
		{
			putchar(dig1 + '0');
			putchar(dig2 + '0');
			if (dig1 != 9 || dig2 != 9)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
