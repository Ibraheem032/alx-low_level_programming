#include "main.h"
#include <math.h>
/**
 * print_binary - Prints the binary representation of a number
 * @n: Numbber to be converted to binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	printf("%ld", n & 1);
}
