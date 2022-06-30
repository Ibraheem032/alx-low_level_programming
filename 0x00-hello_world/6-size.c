#include <stdio.h>

int a = sizeof(char);
int b = sizeof(int);
int c = sizeof(long int);
int d = sizeof(long long int);
int e = sizeof(float);

/**
 * main - prints size of various types on the computer
 *
 * Return: return 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", a);
	printf("Size of an int: %i byte(s)\n", b);
	printf("Size of a long int: %i byte(s)\n", c);
	printf("Size of a long long int: %i byte(s)\n", d);
	printf("Size of a float: %i byte(s)\n", e);

	return (0);
}
