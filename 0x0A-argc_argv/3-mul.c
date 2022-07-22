#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the product of two numbers
 * @argc: size of array of *argv
 * @argv: Pointer to array of string
 * Return: 1 if argc is not equal to 3, else 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[2]);
		int b = atoi(argv[1]);
		int c = a * b;
		printf("%d\n", c);
		return (0);
	}
	printf("Error\n");
	return (1);
}
