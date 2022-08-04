#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int in_index(int *array, int size, int (*cmp)(int));

#endif
