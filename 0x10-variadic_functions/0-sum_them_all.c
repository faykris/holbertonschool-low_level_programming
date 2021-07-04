#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: const unsigned int n value ...
 *
 * Return: integer value.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int res = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	while (i < n)
	{
		res += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (res);
}
