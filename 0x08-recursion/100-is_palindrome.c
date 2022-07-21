#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: Pointer to string to check
 * Return: 1, if true and 0 otherwise
 */
int pal(char *d, int a, int b);
int is_palindrome(char *s)
{
	int y;

	if (strlen(s) == 0)
		return (1);
	pal(s, 0, y);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: Pointer to string to check
 * @a: int input
 * @b: int input
 * Return: 1, if true and 0 otherwise
 */
int pal(char *d, int a, int b)
{
	if (*d > '\0')
	{
		b = strlen(d) - a - 1;
		if (d[a] == d[b])
			pal(d, a + 1, b);
		else
			return (0);
	}
	return (1);
}
