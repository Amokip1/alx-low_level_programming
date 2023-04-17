#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees mem reserved for dog
 * @d: struct dog to free.
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
