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
	int i;

	if (size == 0)
		return (NULL);
	s = malloc(size);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = c;
		return (s);
	}
}
