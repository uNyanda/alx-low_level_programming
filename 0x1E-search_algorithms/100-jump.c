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
	size_t blocksize = sqrt(size);
	size_t start = 0;
	size_t end = blocksize, i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	printf("Value checked array[%lu] = [%d]\n", start, array[start]);

	while (array[end] < value && end < size)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);

		start = end;
		end = end + blocksize;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	for (i = start; i < size && i <= end; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
