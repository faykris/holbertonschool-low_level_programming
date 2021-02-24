#include "holberton.h"
/**
* prime_number - Returns 1 if a prime number, otherwise 0
* @n: Integer variable
* @div: Integer variable
* Return: Integer value
*/
int prime_number(int n, int div)
{
	if (n / 2 < div)
	{
		return (1);
	}
	else if (n % div == 0)
	{
		return (0);
	}
	else
	{
		return (prime_number(n, div + 1));
	}
}

/**
 * is_prime_number - function that returns 1 if the input integer
 *					 is a prime number, otherwise return 0
 * @n: Integer variable
 * Return: Integer value
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, 2));
}
