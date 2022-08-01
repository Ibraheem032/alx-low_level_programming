#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog
 * @name: Pointer to dog's name
 * @age: Dog's age
 * @owner: Dog's owner pointer
 * Return: Pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *s;
	dog_t d;

       	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d.name = name;
	d.age = age;
	d.owner = owner;
	s = &d;
	return (s);
}
