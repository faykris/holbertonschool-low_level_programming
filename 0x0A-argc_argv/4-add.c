#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: integer value: isa counter of arguments
 * @argv: char pointer: vector of strings in arguments
 *
 * Return: Always 0 - Success
 */

int main(int argc, char *argv[])
{
	int i = 1, res = 0;

	while (i < argc)
	{
		if ((*argv[i] >= '0' && *argv[i] <= '9') || atoi(argv[i]) < 0)
		{
			res += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", res);
	return (0);
}
