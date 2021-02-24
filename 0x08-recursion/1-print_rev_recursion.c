#include "holberton.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string pointer
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
        _putchar(*s);
	}
	else
	{
		return;
	}
}
