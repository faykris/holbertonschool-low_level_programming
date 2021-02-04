#include <stdio.h>
/**
 * main - Numbers separated by commas - 3
 * Description: print all combinations of 2 digigt numbers with , and space
 * Return: 0 (success)
 */
int main(void)
{
	int dig1, dig2, dig3;

	for (dig1 = 0; dig1 <= 9; dig1++)
	{
		for (dig2 = 0; dig2 <= 9; dig2++)
		{
			for (dig3 = 0; dig3 <= 9; dig3++)
			{
				if ((dig1 > dig2 || dig2 > dig3 || dig1 > dig3) ||
				    (dig1 == dig2 || dig2 == dig3 || dig1 == dig3))
				{
					continue;
				}
				else
				{
					putchar(dig1 + '0');
					putchar(dig2 + '0');
					putchar(dig3 + '0');
					if (dig1 != 7 || dig2 != 8 || dig3 != 9)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
