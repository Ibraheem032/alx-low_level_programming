#include <stdio.h>
#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string
 * Return: encoded input string
 */
char *leet(char *s)
{
	int i;
	int j;
	char t1[] = {A, E, L, O, T};
	int t2[] = {4, 3, 1, 0, 7};
	char t3[] = {a, e, l, o, t};

	for(i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == t1[j] || s[i] == t3[j])
			{
				s[i] = t2[j];
				break;
			}
		}
		printf("%c", s[i]);
	}

	return (s);
}
