#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: char pointer
 * @f: function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	void (*print_name_as_is)(char *) = f;

	if (name != NULL && f != NULL)
	{
		print_name_as_is(name);
	}
}
