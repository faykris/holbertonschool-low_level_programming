#include <stdio.h>
/**
 * main - putchar lowercase alphabet
 * Description: print alphabet in a message
 * Return: 0 (sucess)
 */
int main(void)
{
	char low, upp;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (upp = 'A'; upp <= 'Z'; upp++)
	{
		putchar(upp);
	}
	putchar('\n');
	return (0);
}
