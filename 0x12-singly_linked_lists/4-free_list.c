#include "lists.h"

/**
 * free_list - function frees list_t list.
 *
 * @head: pointer to the head of list_t list.
 *
 * Return: void.
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
