#ifndef DOG
#define DOG

/**
 * struct dog - Structure dog
 * @name: Pointer to dog's name
 * @age: Dog's age
 * @owner: POinter to dog's owner
 */ 
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print _dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
