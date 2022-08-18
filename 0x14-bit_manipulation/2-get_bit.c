#include "main.h"
/**
 * base_converter - converts decimal to base 2
 * @n: Decimal number to be converted
 * @base: Base of conversion
 * Return: POinter to the string containing the converted number
 */
int *base_converter(unsigned long int n, int base)
{
	int i, j, buffer[65];
	int *tmp;

	for (i = 0; n > 0; i++)
	{
		buffer[i] = n % base;
		n  /= base;
	}
	tmp = malloc(sizeof(int) * i);
	if (tmp == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		tmp[j] = buffer[j];
	tmp[j] = '\0';
	return (tmp);
}
/**
 * get_bit - Finds the bit at a particular index of a number
 * @n: Number to be evaluated
 * @index: Index to be looked for
 * Return: the value of the bit at index "index"
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int *tmp;

	tmp = base_converter(n, 2);
	if (tmp == NULL)
		return (-1);
	return (tmp[index]);
}
