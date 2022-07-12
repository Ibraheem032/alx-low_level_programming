#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: input
 * @b: input
 */
void swap_int(int *a, int *b)
{
	int *p1;
	int *p2;

	p1 = &b;
	p2 = &a;

	*p1 = a;
	*p2 = b;
}
