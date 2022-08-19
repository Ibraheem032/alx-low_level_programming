#include "main.h"
/**
 * countbits - counts number of bits in an int
 * @n: number to be worked on
 * Return: an int
 */
int countbits(unsigned long int n)
{
	int l;

	l = 0;
	while (n > 0)
	{
		n = (unsigned long int) (n * 0.5);
		l++;
	}
	return (l - 1);
}
/**
 * print_binary - Prints the binary representation of a number
 * @n: Numbber to be converted to binary
 */
void print_binary(unsigned long int n)
{
	int l, i;
	unsigned long int num;

	l = countbits(n);
	for (i = l; i >= 0; i--)
	{
		num = (n & (1 << i)) >> i;
		printf("%ld", num);
	}
}
