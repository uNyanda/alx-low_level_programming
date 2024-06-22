#include "lists.h"

/**
 * free_listint - function frees a listint_t list.
 *
 * @head: pointer to the first node (head) of listint_t list.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
