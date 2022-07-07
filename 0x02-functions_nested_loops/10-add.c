#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * add - Prints result of sum
 * @i: first argument
 * @j: second argument
 *
 * Return: 0
 */
int add(int i, int j)
{
	int k = i + j;

	return (write(0, &k, 0));

}
