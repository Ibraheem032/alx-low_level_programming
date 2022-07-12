#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - prints string in reverse
 * @s: string input
 */
void rev_string(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len; s[i]; i--)
	{
		if (s[i] == '\0')
			continue;

		printf("%c", s[i]);
	}
	printf("\n");
