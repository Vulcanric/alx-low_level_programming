#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: pointer to struct dog variable
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	printf("Name: %s\n", d->name);

/*
 * age is of type "float", not "float *",
 * so it cannot be compared with null "void *"
 */
	printf("Age: %.6f\n", d->age); /* Just printing the value of age */

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	printf("Owner: %s\n", d->owner);
}
