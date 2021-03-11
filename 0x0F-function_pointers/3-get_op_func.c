#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - get pointer to the option
 * @s: char pointer
 *
 * Return: Integer value.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (s[1] != '\0')
	{
		return (NULL);
	}

	while ((s[0] != (ops[i].op)[0]))
	{
		((s[0] == (ops[i].op)[0]) ? i : i++);
	}
	return (ops[i].f);
}
