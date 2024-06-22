#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a new node at a given
 *								position.
 *
 * @h: pointer to a pointer to the head of the list.
 * @idx: the index of the list where the new node should be added.
 * @n: the data to add to the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tp = *h;
	unsigned int counter = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || h == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}

	while (tp != NULL && counter < idx - 1)
	{
		tp = tp->next;
		counter++;
	}

	if (tp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = tp->next;
	new_node->prev = tp;

	if (tp->next != NULL)
		tp->next->prev = new_node;
	tp->next = new_node;

	return (new_node);
}
