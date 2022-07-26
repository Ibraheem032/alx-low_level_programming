#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a two dimensional array of ints
 * @width: size of column
 * @height: size of row
 * @Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **t;

	if (width <= 0 || height <= 0)
		return (NULL);
	t = malloc(width * sizeof(int *));
	if (t == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		t[i] = malloc(height * sizeof(int));
	}
	return (t);
}
