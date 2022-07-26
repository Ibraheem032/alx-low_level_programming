#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initialisesit with a specific char
 * @size: size of array to be created
 * @c: initial character of the array
 * Return: NULL if size equals zero or if it fails, else, pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *s;

	s = malloc(size);
	s[0] = c;
	free(s)
}
