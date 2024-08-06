#include "search_algos.h"

/**
 * print_array - Helper function to print the current sub-array.
 * @array: A pointer to the first element of the array.
 * @start: The left side of the array.
 * @end: The right side of the array.
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
 * binary_recursive - Recursive helper function for advanced binary search
 * @array: A pointer to the first element of the array to search in.
 * @left: The left boundary of the search.
 * @right: The right boundary of the search.
 * @value: The value to search for.
 *
 * Return: The index in which value is found, else -1 if value is not present.
 */
int binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t middle;

	if (left > right)
	{
		return (-1);
	}
	print_array(array, left, right);

	middle = left + (right - left) / 2;

	if (array[middle] == value)
	{
		if (middle == left || array[middle - 1] < value)
		{
			return (middle);
		}
		return (binary_recursive(array, left, middle, value));
	}
	else if (array[middle] > value)
	{
		return (binary_recursive(array, left, middle - 1, value));
	}
	else
	{
		return (binary_recursive(array, middle + 1, right, value));
	}
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using the Advanced Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index in which value is found, else -1 if value is not present
 * in arry or if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	return (binary_recursive(array, 0, size - 1, value));
}
