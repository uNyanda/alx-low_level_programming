#include "lists.h"

/**
 * get_dnodeint_at_index - function returns the nth node of a
 *							dlistint_t linked list.
 *
 * @head: pointer to the head of the list.
 * @index: index of the node.
 *
 * Return: the node at specified index, or NULL if the node
 *			does not exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos;

	if (head == NULL)
	{
		return (NULL);
	}

	for (pos = 0; pos < index && head != NULL; pos++)
	{
		head = head->next;
	}
	return (head);
}
