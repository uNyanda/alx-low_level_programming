#include "lists.h"

/**
 * add_dnodeint_end - function adds a new node at the end of a
 *						a dlistint_t list.
 *
 * @head: pointer to pointer to the head of the list.
 *
 * @n: data to add to the node.
 *
 * Return: the address fo the new element, or NULL
 *				if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		new_node->prev = tmp;
		tmp->next = new_node;
	}
	return  (new_node);
}
