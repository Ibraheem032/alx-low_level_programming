#include "main.h"
/**
 * _isalpha - Checks for alphabetic characters
 * @c: character to input
 *
 * Return: 1 if c is an alphabbet
 * 0 if otherwise
 */
int _isalpha(int c)
{
	int i;

	if (c > 64 && c < 123)
		i = _putchar(49);

	else
		i = _putchar('0');


	return (i);
}
