#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * @s: string input
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len; s[i] != '\0' && i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
