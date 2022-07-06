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

	for (i = 0; i <= n; i++)
		for (j = 0; j <= n; j++)
		{
			printf("%i * %i", i, j);
			printf(", ");
		}

	printf("\n");
}
