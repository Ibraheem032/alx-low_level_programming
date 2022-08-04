#include <stdio.h>
#include "function_pointers.h"
/*
 * f - print name passed as arg
 * @s: pointer to name
 */
void f(char *s)
{
	printf("%s\n", s);
}
/**
 * print_name - Prints name
 * @name: Pointer to the name
 * @f: Function pointer 
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
