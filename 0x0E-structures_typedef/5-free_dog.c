#include "dog.h"

/**
 * free_dog - frees structure
 * @d: structure to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d ==  NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
