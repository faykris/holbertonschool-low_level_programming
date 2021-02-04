#include <stdio.h>
/**
 * main - Number separated by commas
 * Description: print all the numbers followed by , and space
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
