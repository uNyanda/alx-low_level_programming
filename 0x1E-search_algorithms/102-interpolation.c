#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: Pointer to the first element of he array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if not found
 * or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{

		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	if (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		if (pos >= size)
			printf("Value checked array[%lu] is out of range\n", pos);
		else
			printf("Value checked[%lu] = [%d]\n", pos, array[pos]);
	}
	return (-1);
}
