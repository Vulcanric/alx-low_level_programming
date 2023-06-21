#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: Pointer to the name-member of new dog
 * @age: age member of new dog
 * @owner: Pointer to the owner member of new dog
 * Return: New dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	/* Allocating memory for the new dog created */
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL) /* Handling malloc return */
		return (NULL);

	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
	return (newDog);
}
