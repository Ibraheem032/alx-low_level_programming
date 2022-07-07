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
	return (_putchar(n % 10 + '0'));
}
