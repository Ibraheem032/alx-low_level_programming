#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * power - Computes the power an int
 * @x: integer base
 * @y: int index
 * Return: result
 */
unsigned int power(int x, int y)
{
	int i;
	unsigned int result = 1;

	if (y == 0)
	{
		return (1);
	}
	for (i = 0; i < y; i++)
	{
		result *= x;
	}
	return (result);
}
/*
 * binary_to _uint - Converts binary to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 * Return: Converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int n, num;

	num = 0;
	len = strlen(b);
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < len; i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			n = b[i] % 2;
			n *= power(2, len - i - 1);
			num += n;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
