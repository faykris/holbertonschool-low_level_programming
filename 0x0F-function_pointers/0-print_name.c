#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name.
 * @name: The name that wants to be printed.
 * @f: function pointer.
 *
 * Return: None.
 */
void print_name(char *name, void (*f)(char *))
{
	void (*print_name_as_is)(char *) = f;

	if (name != NULL && f != NULL)
	{
		print_name_as_is(name);
	}
}
