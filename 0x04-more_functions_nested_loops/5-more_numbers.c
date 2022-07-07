#include "main.h"
/**
 * more_numbers - Prints numbers
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
