#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of square matrix of integers
 * @a: input string
 * @size: size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if(i == j)
				sum1 += a[i][j];

		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j)
		{
			if(j - i == size - 1)
				sum2 += a[i][j];
		}
	}
	printf("%i, %i\n", sum1, sum2);
}