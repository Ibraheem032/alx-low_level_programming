#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: array input
 * @n: number of element of the input array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n -1; a[i] != '\0'; i--)
	{
		if (i != n - 1)
			printf(", ");
		printf("%i", a[i]);
	}
	printf("\n");
}
