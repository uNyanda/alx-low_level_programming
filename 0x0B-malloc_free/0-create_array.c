#include "main.h"

/**
 * create_array - function creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size: size of the array
 * @c: the characters
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (0);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	array[size] = '\0';

	return (array);
}
