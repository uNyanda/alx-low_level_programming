#include "lists.h"
#include <string.h>

/**
 * add_node - function adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to pointer to the first node (head) of list_t list.
 * @str: string to be added to the new node.
 *
 * Return: new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (*(str + len))
	{
		len++;
	}
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
