#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: const value ...
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	int i = 0;

	while (format == NULL)
	{
		putchar('\n');
		return;
	}
	va_start(ap, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			s = va_arg(ap, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		}
		if (format[i + 1] && (format[i] == 'c' ||
			format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(ap);
	putchar('\n');
}
