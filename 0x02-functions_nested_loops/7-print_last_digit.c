#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Prints last digit
 * @n: Input
 *
 * Return: returns the value of the digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	return (printf("%d", last_digit));
}
