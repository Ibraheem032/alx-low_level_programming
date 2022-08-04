#include "funtion_pointers.h"
/**
 * array_iterator - Executes a given function on array
 * @array: Pointer to the given array
 * @size: size of the array
 * @action: given funtion pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size / sizeof(int); i++)
	{
		action(array[i]);
	}
}
