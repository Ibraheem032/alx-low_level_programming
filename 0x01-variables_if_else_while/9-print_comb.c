#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0
 */
int main(void)
{
	int num;

	for (num = 10; num <= 19; num++)
	{	
		putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');
	}	
	putchar('\n');

	return (0);
}

