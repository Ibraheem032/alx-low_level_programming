#include "main.h"
/**
 * _isalpha - Checks for alphabetic characters
 *
 * Return: 1 if c is an alphabbet
 * 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return(_putchar(1 % 10 + '0'));

	else
		return(_putchar(10 % 10 + '0'));

	_putchar('\n');
}
