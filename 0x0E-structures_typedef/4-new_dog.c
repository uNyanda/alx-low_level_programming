#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

char *_strcpy(char *dest, char *src);
int _strlen(char *str);

/**
 * new_dog - function creates a new dog.
 *
 * @name: pointer to the name of the new dog
 * @age: age of the new dog
 * @owner: pointer to the new dog's owner name
 *
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int length1, length2;
	dog_t *dog;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	dog->age = age;

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);

	return (dog);
}

/**
 * _strlen - function returns the length of the string
 *
 * @str: pointer to the string to get length of
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strcpy - function copies a string
 *
 * @dest: pointer to the destination string to copy to
 * @src: pointer to the source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
