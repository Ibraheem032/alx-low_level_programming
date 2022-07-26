#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array to be created
 * @c: initial character of the array
 * Return: NULL if size equals zero or if it fails, else, pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size);
	s[0] = c;
	return (s);
}
