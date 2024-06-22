#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function prints struct dog
 *
 * @d: pointer to struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", ((d->name) ? d->name : "(nil)"));
	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %.6f\n", d->age);
	}
	printf("Owner: %s\n", ((d->owner) ? d->owner : "(nil)"));
}
