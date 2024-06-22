#include "lists.h"

/**
 * sum_listint - function returns the sum of all the data (n) of a
 * listint_t linked list.
 *
 * @head: pointer to the first node of listint_t linked list.
 *
 * Return: the sum.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
