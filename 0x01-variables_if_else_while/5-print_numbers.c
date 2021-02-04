#include <stdio.h>
/**
 * main - Numbers base 10
 * Description: print numbers 0123456789
 * Return: 0 (sucess)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
