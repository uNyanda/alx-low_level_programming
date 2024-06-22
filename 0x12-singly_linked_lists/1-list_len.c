#include "lists.h"

/**
 * list_len - function returns the number of elements of a list_t list.
 *
 * @h: pointer to the first node (head) of list_t list
 *
 * Return: number of elements.
*/
size_t list_len(const list_t *h)
{
	size_t num_of_elements = 0;

	while (h)
	{
		h = h->next;
		num_of_elements++;
	}

	return (num_of_elements);
}
