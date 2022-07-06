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
	int i;

	if (c >= 'a' && c <= 'z')
	{
		i = 49;
	}

	else
	{
		i = 48;
	}

	return (_putchar(i));
}
