#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: character to input
 *
 * Return: 1 if c is lowercase
 * 0 if otherwise
 */
int _islower(int c)
{
	int i = 0;
	int j = 1;

	if (c >= 'a' && c <= 'z')
		return (_putchar(j % 10 + '0'));

	else
		return (_putchar(i % 10 + '0'));
}
