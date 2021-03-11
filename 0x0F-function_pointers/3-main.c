#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char oper;
	int num1 = 0, num2 = 0, res = 0;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	oper = *argv[2];
	num2 = atoi(argv[3]);
	if ((oper == '/' || oper == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = p(num1, num2);
	printf("%d\n", res);

	return (0);
}
