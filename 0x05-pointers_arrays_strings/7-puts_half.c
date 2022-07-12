#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half characters of a string
 * @str: string input
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i;
	int n = len / 2;

	for (i = 0; i < len; i++)
	{
		if (i > n)
			printf("%c", str[i]);

		else
			continue;
	}
	printf("\n");
}
