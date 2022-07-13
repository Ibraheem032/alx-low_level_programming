#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: input string
 * Return: 0
 */
int _atoi(char *s)
{
	if (sizeof(s) == 0)
		return (0);
	else
		return (atoi(s));
}
