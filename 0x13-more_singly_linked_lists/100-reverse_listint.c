#include "lists.h"

/**
 * reverse_listint - function reverses a listint_t linked list.
 *
 * @head: pointer to a pointer of listint_t list.
 *
 * Return: pointer to the first node or the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *ptr = *head;
	listint_t *ptr2 = NULL;

	while (ptr != NULL)
	{
		ptr2 = ptr->next;
		ptr->next = prev;
		prev = ptr;
		ptr = ptr2;
	}

	*head = prev;
	return (*head);
}
