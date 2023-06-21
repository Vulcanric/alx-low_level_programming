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
/*	if (d == NULL)
		d = malloc(sizeof(struct dog));*/
	/* Initializing members of the variable */
	d->name = name;
	d->age = age;
	(*d).owner = owner; /* Another way of accessing element */
}
