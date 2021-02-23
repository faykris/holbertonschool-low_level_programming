#include "holberton.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: string pointer
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	unsigned int row = 0, col = 0;

	while (row < sizeof(a))
	{
		while (col < sizeof(a))
		{
			_putchar(a[row][col]);
			col++;
		}
		_putchar('\n');
		col = 0;
		row++;
	}
}
