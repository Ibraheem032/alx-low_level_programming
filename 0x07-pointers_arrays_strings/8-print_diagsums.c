#include "main.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * print_diagsums - prints the sum of two diagonals of square matrix of integers
 * @a: input string
 * @size: size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	double sum1 = 0;
	double sum2 = 0;
	int i;
	int **p;
	p = &a;

	for (i = 0; i < size; i++)
	{	
		sum1 += p[i][i];
		sum2 += p[i][size - i - 1];
	}
	printf("%d, %d", sum1, sum2);
}
