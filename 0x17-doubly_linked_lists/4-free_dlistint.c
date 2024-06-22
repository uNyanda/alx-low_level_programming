#include "lists.h"

/**
 * free_dlistint - function frees a dlistint_t list.
 *
 * @head: pointer to the head of the list.
 *
 * Return: free'd list.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
