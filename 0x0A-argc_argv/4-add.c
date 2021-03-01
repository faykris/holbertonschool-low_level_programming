#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: integer value: isa counter of arguments
 * @argv: char pointer: vector of strings in arguments
 *
 * Return: Always 0 - Success
 */

int main(int argc, char *argv[])
{
	int i = 1, j = 0, res;

	if (argc > 1)
	{
		while (i < argc)
		{
			while (argv[i][j])
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			j = 0;
			res += atoi(argv[i]);
			i++;
		}
	}
	else
	{
		printf("0\n");
		return (0);
	}
	printf("%i\n", res);
	return (0);
	}
