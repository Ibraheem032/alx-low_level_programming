#include "main.h"
/**
 * main - Prints _putchar
 *
 * Return: 0
 */
int main(void)
{
	int i - 0;
	char txt[] = "_putchar";
	
	while (txt[i] != '0')
	{
		_putchar(txt[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
