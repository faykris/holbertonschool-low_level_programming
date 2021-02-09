#include "holberton.h"
/**
 * print_alphabet_x10 - Write alphabet in lowercase 10 times
 * Description - print alphabet x 10 with _putchar
 *
 * Return: On success - 0
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
