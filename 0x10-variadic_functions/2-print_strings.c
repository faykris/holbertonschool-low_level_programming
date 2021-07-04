#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: char pointer
 * @n: const unsigned int n value ...
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *wrd;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
		wrd = va_arg(ap, char *);
		if (wrd != NULL)
		{
			printf("%s", wrd);
		}
		else
		{
			printf("(nil)");
		}
		if ((i + 1) != n && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(ap);
	putchar('\n');
}
