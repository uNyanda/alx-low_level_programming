#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function initializes a variable of type struct dog
 *
 * @d: pointer to the struct type dog
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the dog's owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
