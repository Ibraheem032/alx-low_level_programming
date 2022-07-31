#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the name of the file the program was compile from
 * @argc: Argument count
 * @argv: Pointer to argument strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", _FILE_);

	return (0);
}

