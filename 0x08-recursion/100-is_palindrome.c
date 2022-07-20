#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: Pointer to string to check
 * Return: 1, if true and 0 otherwise
 */
int is_palindrome(char *s)
{
	int i;

	if (strlen(s) == 0)
		return (1);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == s[strlen(s) - 1 - i])
			return (1);
		else
			return (0);
	}
}
