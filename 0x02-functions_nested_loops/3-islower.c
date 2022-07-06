#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: 1 if c is lowercase
 * 0 if otherwise
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return(_putchar(1 % 10 + '0'));

	else
		return(_putchar(10 % 10 + '0'));
}
