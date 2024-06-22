#include "lists.h"

/**
 * dlistint_len - function returns the number of elements in a linked
 *					dlistint_t list.
 *
 * @h: pointer to the head of the list.
 *
 * Return: Number of elements.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
