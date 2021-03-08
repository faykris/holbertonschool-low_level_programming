#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two positive numbers
 * @argc: integer value - is a counter of arguments
 * @argv: char pointer - vector of strings in arguments
 *
 * Return: Always 0 - Success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i])
	{
		i++;
	}

	if (i != 2)
	{
		printf("Error\n");
		exit(98);
	}
	
}
