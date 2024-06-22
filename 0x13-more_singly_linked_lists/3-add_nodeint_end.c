#include "lists.h"

/**
 * add_nodeint_end - function adds a new node at the end
 * of a listint_t list.
 *
 * @head: pointer to a pointer to the listint_t list.
 * @n: integer to add.
 *
 * Return: the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_end;
	listint_t *tmp;

	tmp = *head;

	node_end = malloc(sizeof(listint_t));
	if (node_end == NULL)
	{
		return (NULL);
	}
	node_end->n = n;
	node_end->next = NULL;

	if (*head == NULL)
	{
		*head = node_end;
		return (node_end);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = node_end;
	return (node_end);
}
