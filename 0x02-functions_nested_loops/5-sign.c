#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: input integer
 *
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar(49);

	else if (n < 0)
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar('-');
		_putchar(49);

	else
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar('0');

	_putchar('\n')

	return (0);
		
}
