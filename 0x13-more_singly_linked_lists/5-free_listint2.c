#include "lists.h"

/**
 * free_listint2 - function frees a listint_t list.
 *
 * @head: pointer to a pointer to the first node of listint_t list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
