#include "holberton.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: integer value: isa counter of arguments
 * @argv: char pointer: vector of strings in arguments
 *
 * Return: Always 0 - Success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
