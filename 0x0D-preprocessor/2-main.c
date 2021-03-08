#include <stdio.h>
#define FILE __FILE__
/**
 * main - prints the name of the file it was compiled from with \n
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", FILE);
	return (0);
}
