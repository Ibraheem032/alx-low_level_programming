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
	char t1[] = "AELOT";
	int t2[] = "43107";
	char t3[] = "aelot";

	for(i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == t1[j] || s[i] == t3[j])
			{
				s[i] = t2[j];
			}
		}
		printf("%c", s[i]);
	}

	return (s);
}
