#include <stdio.h>
#include "main.h"
/**
 * wildcmp - compares two strings
 * @s1: first pointer to string
 * @s2: second pointer
 * Return: 1 if they are identical or 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == '*')
			s1[i] = s2[i];
		if (s2[i] == '*')
			s2[i] = s1[i];
		if (strlen(s1) == strlen(s2) && s1[i] == s2[i])
			return (1);
		if (isalpha(s1[i]) && isalpha(s2[i]) && strcmp(s1, s2))
		       return (1);
		if (	
	}
}
