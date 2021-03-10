#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: string pointer
 * @f: function pointer
 * 
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	void (*print_name_as_is)(char *) = f;

	if (!name && !f)
	{
		print_name_as_is(name);
	}
}
