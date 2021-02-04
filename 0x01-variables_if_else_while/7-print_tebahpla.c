#include <stdio.h>
/**
 * main - Alphabet in reverse
 * Description: print lowercase alphabet the lasto to first
 * Return: 0 (success)
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
