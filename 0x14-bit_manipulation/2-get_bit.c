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
free(tmp);
	return (tmp);
}
/**
 * _strlen - computes the length of a string
 * @s: Point to the string to  be computed
 * Return: length of the string
 */
unsigned int _strlen(int *s)
{
	int i;
	unsigned int l;

	l = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		l += 1;
	}
	return (l);
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
	unsigned int len;

	tmp = base_converter(n, 2);
	if (tmp == NULL)
		return (-1);
	len = _strlen((tmp);
	if (index > 64 || index > len)
		return (-1);
	return (tmp[index]);
}
