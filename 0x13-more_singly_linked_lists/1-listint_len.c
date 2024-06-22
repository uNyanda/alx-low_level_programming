#include "lists.h"

/**
 * listint_len - function returns the number of elements in a linked
 * listint_t list.
 *
 * @h: pointer to listint_t list.
 * to traverse the list.
 *
 * Return: number of elements.
*/
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}

	return (elements);
}
