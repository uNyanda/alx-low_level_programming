#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches f r a value in a sorted array of integers using
 * Jump Search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: the value, else -1 if array is NULL or the value is not present
 * in array.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t blocksize, start, end, i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	blocksize = sqrt(size);
	start = 0;
	end = 0;

	while (end < size && array[end] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		start = end;
		end = end + blocksize;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
