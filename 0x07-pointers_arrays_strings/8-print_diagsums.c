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
	int **p;
	p = &a;
	int k;
	int l;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if(i == j)
				sum1 += p[i][j];

		}
	}
	for (k = 0; k < size; k++)
	{
		for (l = 0; l < size; l++)
		{
			unsigned int z = k - l;
			if(z == size - 1)
				sum2 += p[i][j];
		}
	}
	printf("%i, %i\n", sum1, sum2);
}
