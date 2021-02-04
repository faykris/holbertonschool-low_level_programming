#include <stdio.h>
/**
 * main - putchar lowercase alphabet without e and q
 * Description: print alphabet in a message
 * Return: 0 (sucess)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'e' && low != 'q')
		{
			putchar(low);
		}
	}
	putchar('\n');
	return (0);
}
