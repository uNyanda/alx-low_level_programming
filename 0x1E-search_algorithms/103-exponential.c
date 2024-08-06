#include "search_algos.h"

/**
 * print_array - Helper function to print the current subarray.
 * @array: A pointer to the array to print.
 * @start: The right side of the array.
 * @end: The left side of the array.
 *
 * Return: void.
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

		middle = left + (right - left) / 2;

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

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential Search algorithm.
 * @array: A pointer to the first element of the array to earch in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index, else -1 if array is NULL or value is not present in
 * array.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, left, right;
	int result;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	if (array[0] == value)
	{
		return (0);
	}

	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	left = i / 2;
	right = (i < size) ? i : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	result = binary_search(array + left, right - left + 1, value);

	return ((result == -1) ? -1 : (int)left + result);
}
