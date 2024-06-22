#include "main.h"

/**
 * array_range - function creates an array of integers
 *
 * @min: minimum values in the array
 * @max: maximum values in the array
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;
	int size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		*(arr + i) = min++;
	}

	return (arr);
}
