#include "search_algos.h"
#include <math.h>

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

	/* Adjust current if it exceeds array size */
	current = (current < size ? current : size - 1);

	/* Linear search in the identified block */
	while (prev <= current)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
		{
			return (prev);
		}
		prev++;
	}
	return (-1);
}

