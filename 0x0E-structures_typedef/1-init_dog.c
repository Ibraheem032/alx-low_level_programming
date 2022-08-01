#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initiates a variable of type struct dog
 * @d: Pointer to the variable
 * @name: Pointer to the dog name
 * @age: Dog's age
 * @owner: Pointer to dog's owner
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{	
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
