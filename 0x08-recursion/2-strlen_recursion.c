#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - prints the length of a string
 * @s: Pointer to the string
 * Return: returns the integer length of the string
 */
int _strlen_recursion(char *s)
{
	int d = 1;
	if (*s)
	_strlen_recursion(s + 1);
	return(d);
	d += 1;
}
int main(void)
{
	char *f = "hdgdhfjfdvxv";
	printf("%i\n", _strlen_recursion(f));
	return 0;
}
