#include <stdio.h>
/**
 * main - Prints the numbe rof arguments passed into the program
 * @argc: size of array of *argv
 * @argv: Pointer to array of string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int s;

	for (i = 0; i < argc; i++)
		s = i;
	printf("%i\n", s);

	return (0);
}
