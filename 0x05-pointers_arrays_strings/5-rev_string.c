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
	int j;

	for (j = 0; j <= len; j++)
	for (i = len; i >= 0; i--)
		s[j] = s[i]; 

	printf("\n");
}
