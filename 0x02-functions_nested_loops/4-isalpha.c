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
	int i = 1;
	int j = 0;

	if (c >= 65 && c <= 122)
		return (_putchar(i % 10 + '0'));

	else
		return (_putchar(j % 10 + '0'));
}
