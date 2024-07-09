#include "search_algos.h"
#include <math.h>

/**
 * linear_search - function searches for a value in an array of integers using
 *		   Linear Search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: value if present, else -1 if array is NULL or value not present.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

/**
 * jump_search - Searches for a value in a sorted array using Jump Search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if not found
 * or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, current;
	int result;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	step = (size_t)sqrt(size);
	prev = 0;
	current = 0;

	/* Jump search */
	while (current < size && array[current] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", current, array[current]);
		prev = current;
		current += step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, current);

	/* Adjust current if it exceeds array bounds */
	current = (current < size) ? current : size - 1;

	/* call linear_search on the identified block */
	result = linear_search(array + prev, current - prev + 1, value);

	/* Adjust the result to be relative to the whole array */
	return ((result == -1) ? -1 : (int)(prev + result));
}

