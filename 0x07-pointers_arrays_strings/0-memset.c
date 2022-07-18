#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory area pointed to by s with a constant byte b
 * @s: Variable containing the memory address
 * @b: Variable containing the value to be filled in *s
 * @n: size of bytes to be filled in
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		_putchar(s[i]);
	}
	for (i = n; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\0');

	return (s);
}
