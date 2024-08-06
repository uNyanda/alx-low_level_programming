#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers usin the
 * Jump search algorithm.
 * @list: A pointer to the head of the list to search in
 * @size: The number of nodes in list
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located, else NULL if
 * value is not present in head or if head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *head, *prev;
	size_t blocksize, start;

	if (list == NULL || size == 0)
	{
		return (NULL);
	}

	blocksize = sqrt(size);
	head = list;
	prev = list;

	while (head->index < size && head->n < value)
	{
		prev = head;
		for (start = 0; head->next && start < blocksize; start++)
		{
			head = head->next;
		}
		printf("Value checked at index [%lu] = [%d]\n", head->index, head->n);
		if (head->n >= value)
		{
			break;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, head->index);
	while (prev && prev->index <= head->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
		{
			printf("Value found at index [%lu] = [%d]\n", prev->index, prev->n);
			return (prev);
		}
		prev = prev->next;
	}

	return (NULL);
}
