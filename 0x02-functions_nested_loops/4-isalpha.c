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

	if (c >= 65 && c <= 122)
		i = 49;

	else
		i = 48;

	return(_putchar(i));
}
