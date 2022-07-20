#include "main.h"
/**
 * _sqrt_recursion - print the natural sqare root of a number
 * Return: -1 if n is not a perfect square, else root of n
 */
int _sqrt_recursion(int n)
{
	int i;
	int j = i + 1;

	for (i = 0; i <= n / 2; i++)
	{
		if ((i * i) < n && j * j > n)
			return (-1);
		if(i * i == n)
			return (i);
	}
}
