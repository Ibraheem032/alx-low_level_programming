#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncp - copies a string
 * @dest: first input
 * @src: second input
 * @n: integer input
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
}
