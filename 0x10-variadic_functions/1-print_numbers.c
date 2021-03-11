#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: char pointer
 * @n: const unsigned int n value ...
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if ((i + 1) != n && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(ap);
	putchar('\n');
}
