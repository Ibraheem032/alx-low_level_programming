#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * @n: numbers of bytes to be concatenated from s2 to s1
 * Return: Pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, l, l1, l2, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);
	if (n >= l2)
		n = l2;
	l = l1 + n + 1;
	
	char *s = malloc(l);
	if (s == NULL)
		return(NULL);
 	for (i = 0; i < l - 1; i++)
	{
		if (i < l1)
		{
			s[i] = s1[i];
		}
		else
			s[i] = s2[i - l1];
	}
	s[i] = '\0';
	return (s);
}
