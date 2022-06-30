#include <stdio.h>

int char_size = sizeof(char);
int int_size = sizeof(int);
int long_int_size = sizeof(long int);
int long_long_int_size = sizeof(long long int);
int float_size = sizeof(float);

/**
 * main - prints size of various types on the computer
 *
 * Return: return 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", char_size);
	printf("Size of an int: %i byte(s)\n", int_size);
	printf("Size of a long int: %i byte(s)\n", long_int_size);
	printf("Size of a long long int: %i byte(s)\n", long_long_int_size);
	printf("Size of a float: %i byte(s)\n", float_size);

	return (0);
}
