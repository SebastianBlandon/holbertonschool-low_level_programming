#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @name: dog_t type input
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);

	return;
}
