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
	if (c >= 65 && c <= 122)
		return (_putchar(49));

	else
		return (_putchar(48));
}
