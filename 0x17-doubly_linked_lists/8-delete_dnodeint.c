#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes the node at index
 *								of a dlistint_t linked list.
 *
 * @head: pointer to a pointer to the head of the list.
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if succeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *tmp = *head, *next_node;

	if (*head == NULL)
	{
		return (-1);
	}

	while (tmp != NULL && counter < index)
	{
		tmp = tmp->next;
		counter++;
	}

	if (index != counter)
	{
		return (-1);
	}

	next_node = tmp->next;
	if (tmp == *head)
	{
		*head = next_node;
		if (next_node != NULL)
		{
			next_node->prev = NULL;
		}
	}
	else
	{
		tmp->prev->next = next_node;
		if (next_node != NULL)
		{
			next_node->prev = tmp->prev;
		}
	}
	free(tmp);
	return (1);
}
