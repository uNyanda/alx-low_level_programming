#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node at a given
 * position.
 *
 * @head: pointer to a pointer of listint_t list.
 * @idx: the index of the list where the node should be added,
 * starts at 0.
 * @n: data to insert in the node.
 *
 * Return: the address of the new node.
 * or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *ptr;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	ptr = *head;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; ptr != NULL && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = ptr->next;
			ptr->next = new_node;
			return (new_node);
		}
		else
		{
			ptr = ptr->next;
		}
	}
	return (NULL);
}
