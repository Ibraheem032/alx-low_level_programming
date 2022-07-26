#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Returns a pointer to the newly allocated space in the memory
 * @str: Pointer to the parameter string
 * Return: NULL if str is null or if malloc isn't successful, else, the pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *t;
	unsigned int i;
	unsigned int size;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	t = malloc(size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		t[i] = str[i];
	return (t);
}
