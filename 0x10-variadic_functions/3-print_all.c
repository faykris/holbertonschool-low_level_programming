#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: const unsigned int n value ...
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *wrd;
	unsigned int i = 0;

	va_start(ap, format);
	
		wrd = va_arg(ap, char *);
	
	va_end(ap);
	putchar('\n');
}
