#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: Pointer to the string
 */
void _print_rev_recursion(char *s)
{
	int i;
	int t;

	for (i = 0; s[i] != '\0'; i++)
	{
		t = i + 1;
	}
	for (i = t - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
