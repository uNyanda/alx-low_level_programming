#include "lists.h"

#include "lists.h"

/**
 * print_list - function prints all the elements of a list_t list.
 *
 * @h: pointer to the first node (head) of list_t list
 *
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while  (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
