#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0
 */
int main(void)
{
	int i;
	int j;

	for(i = 0; i <= 9; i++)
		for(j = 0; j <= 9; j++)
			if (i == j)
			       ;
			else
				putchar('int(i)');
				putchar('int(j)');
				putchar(',');
				putchar(' ');
	putchar('\n');

	return (0);
}
