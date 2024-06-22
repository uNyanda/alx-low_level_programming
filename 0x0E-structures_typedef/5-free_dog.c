#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - function frees dogs
 *
 * @d: pointer to the dog type
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{

	if (d)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
