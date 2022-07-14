#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * string_toupper - Changes all lowercase of a string to uppercase
 * @char *: string to input
 * Return: returns the input string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		continue;
		printf("%c", s[i]);
	}

	return (s);
}
