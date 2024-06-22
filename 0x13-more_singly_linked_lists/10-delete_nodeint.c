#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes node at index of a listint_t
 * linked list.
 *
 * @head: pointer to a pointer of listint_t list.
 * @index: the index of the node that should be deleted.
 * index starts at 0.
 *
 * Return: 1 On success.
 * -1 on failure.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = NULL;
	listint_t *ptr2 = *head;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr2);
		return (1);
	}


	for (i = 0; ptr2 != NULL && i < index - 1; i++)
	{
		if (ptr2 == NULL || ptr2->next == NULL)
		{
			return (-1);
		}
		ptr2 = ptr2->next;
	}

	ptr = ptr2->next;
	ptr2->next = ptr->next;
	free(ptr);

	return (1);
}
