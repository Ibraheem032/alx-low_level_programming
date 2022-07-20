#include "main.h"
/**
 * is_prime_number - checks for prime numbers
 * @n: number to check for
 * Return: 1 if true, 0 otherwise
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	for (i = 2; i < n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
