#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints times table
 * @n: input integer
 *
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= n; i++)
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			printf("%i", k);
			printf(", ");
		}

		printf("\n");
}
