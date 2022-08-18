#include "main.h"
#include <math.h>
/**
 * print_binary - Prints the binary representation of a number
 * @n: Numbber to be converted to binary
 */
void print_binary(unsigned long int n)
{
	int i, num;

	for (i = sizeof(int) * 8; i >= 0; i--)
	{
		num = ((n & (1 << i)) >> i);
		printf("%i", num);
	}
}
