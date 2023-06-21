#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a dog with the following attributes
 * @name: Name of the dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *name_copy;
	char *owner_copy;

	/* Allocating memory for the new dog created */
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL) /* Handling malloc return */
		return (NULL);

	/* Allocating memory and copying content of name into name copy */
	name_copy = malloc(_strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(newDog);
		return (NULL);
	}
	_strcpy(name_copy, name);

	/* Allocating memory and copying content of owner into owner copy */
	owner_copy = malloc(_strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(newDog);
		return (NULL);
	}
	_strcpy(owner_copy, owner);

	newDog->name = name_copy;
	newDog->age = age;
	newDog->owner = owner_copy;
	return (newDog);
}

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string to count
 * Return: string length
 */
unsigned int _strlen(char *s)
{
	unsigned int counter = 0;

	for (; *s != '\0'; s++)
		counter++;
	return (counter);
}

/**
 * _strcpy - Copies the content of string from source string into
 * destination string
 * @des: Pointer to the destination string
 * @src: Pointer to the source string
 * Return: Pointer to destination string
 */
char *_strcpy(char *des, char *src)
{
	unsigned int i = 0;

	for (; i < _strlen(src); i++)
		des[i] = src[i];
	des[i] = '\0';
	return (des);
}
