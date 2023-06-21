#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs
 * @d: dog to free
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	/* Done! :) */
}
