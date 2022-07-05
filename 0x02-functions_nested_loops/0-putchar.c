#include "main.h"

/**
 * main - Prints _putchar
 *
 * Return: 0
 */
int main(void)
{
	char s[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

	return (0);
}	
