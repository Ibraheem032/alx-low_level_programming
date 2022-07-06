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
	if (c >= 'a' && c <= 'z')
		return (_putchar(49));

	else
		return (_putchar(48));
}
