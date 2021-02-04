#include <stdio.h>
/**
 * main - Hexadecimal
 * Description: print all the numbers of base 16
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	char cha;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	for (cha = 'a'; cha <= 'f'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
