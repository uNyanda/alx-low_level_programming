#include "lists.h"

/**
 * *get_nodeint_at_index - function returns the nth node of a
 * listint_t linked list.
 *
 * @head: pointer to the first node of listint_t list.
 * @index: the index of the node, starting at 0.
 *
 * Return: the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	ptr = head;

	while (ptr != NULL && i < index)
	{
		if (i == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		i++;
	}
	return (ptr ? ptr : NULL);
}
