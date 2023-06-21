#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type "struct dog"
 * @d: Variable of type struct dog
 * @name: member1 to initialize
 * @age: member2 to initialize
 * @owner: member3 to initialize
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Allocating memory for variable */
	d = malloc(sizeof(struct dog));
	if (d == NULL) /* Handling malloc return */
		return (NULL);
	d->name = name;
	d->age = age;
	(*d).owner = owner;
}
