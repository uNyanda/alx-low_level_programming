#include "lists.h"

/**
 * pop_listint - function deletes the head node of a listint_t linked list,
 * and returns the head node's data (n);
 *
 * @head: pointer to a pointer of listint_t list.
 *
 * Return: the data of the head node.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *node;

	if (*head == NULL)
	{
		return (0);
	}

	node = *head;

	data = node->n;
	*head = node->next;
	free(node);

	return (data);
}
