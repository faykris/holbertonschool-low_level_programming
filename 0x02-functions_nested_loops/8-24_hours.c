#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: don't return value
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(58);
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
		}
	}

}
