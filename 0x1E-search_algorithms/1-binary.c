#include "search_algos.h"

/**
 * print_array - Helper function to print the current subarray.
 * @array: A pointer to the array to print.
 * @start: right side of the array.
 * @end: left side of the array.
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers using the
 * Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: -1 if value is not present in array or if array is NULL, otherwise
 * the first index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle;

	left = 0;
	right = size - 1;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (left <= right)
	{
		print_array(array, left, right);

		middle = (right + left) / 2;

		if (array[middle] == value)
		{
			return (middle);
		}
		else if (value > array[middle])
		{
			left = middle + 1;
		}
		else if (value < array[middle])
		{
			right = middle - 1;
		}
	}
	return (-1);
}
