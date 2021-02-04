#include <stdio.h>
/**
 * main - putchar lowercase alphabet
 * Description: print alphabet in a message
 * Return: 0 (sucess)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
