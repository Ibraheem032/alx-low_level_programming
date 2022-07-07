#include "main.h"
/**
 * print_diagonal - Prints diagonal line
 * @n: numbers of lines to print
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			if (n == 0 || n < 0)
			{
				_putchar('\n');
			}
			else
			{
				if (i == n - 1)
				{
					_putchar('\\');
				}

				else
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
