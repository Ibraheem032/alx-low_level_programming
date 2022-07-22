#include <stdio.h>
/**
 * main - Prints the product of two numbers
 * @argc: size of array of *argv
 * @argv: Pointer to array of string
 * Return: 1 if argc is not equal to 2, and prints error, else 0
 */
int main(int argc, int *argv[])
{
	int p;

	if (argc == 2)
	{
		printf("%i\n", (*argv[1]) * (*argv[2]));
		return (0);
	}

	printf("Error\n");
	
	return (1);
}
