#include "main.h"
/**
 * print_square - Prints square of size size
 * @size: number of size to print
 *
 */
void print_square(int size)
{
	int i;
	int j;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < n; i++)
		{
			if (size == 0 || size < 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
