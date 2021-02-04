#include <stdio.h>
/**
 * main - Numbers base 10 with putchar
 * Description: print numbers 0123456789
 * Return: 0 (sucess)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
