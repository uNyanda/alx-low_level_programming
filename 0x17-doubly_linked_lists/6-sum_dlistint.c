#include "lists.h"

/**
 * sum_dlistint - function returns the sum of all the data (n)
 *					of a dlistint_t linked list.
 *
 * @head: pointer to the head of the list.
 *
 * Return: the sum of the data, or NULL if the list is empty.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}

	do {
		sum += head->n;
		head = head->next;
	} while (head != NULL);

	return (sum);
}
