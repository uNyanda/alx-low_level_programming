#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key (cannot be an empty string)
 * @value: the value associated with the key.
 *
 * Description: This function adds an element to the hash table. If a key/value
 *			pair with the same key already exists in the hash table, it updates
 *			the value. In case of collision, it adds the new node at the
 *			beginning of the list.
 *
 * Return: 1 if it succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	/**
	 * compute the index in the hash table where the key/value pair should
	 * be stored
	*/
	index = key_index((const unsigned char *)key, ht->size);

	/* check if a node already exists with the same key */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			/* if a node with the same key exists, update the value and return */
			free(current_node->value);
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}
	/* if no node exists with the same key, create a new node */
	new_node = create_new_node(key, value);
	if (new_node == NULL)
	{
		return (0);
	}

	/* initialize the new node */
	new_node->next = ht->array[index];
	/* add the new node to the hash table */
	ht->array[index] = new_node;

	return (1);
}

/**
 * create_new_node - create a new node for the hash table.
 *
 * @key: the key.
 * @value: the value associated with the key.
 *
 * Return: a pointer to the new node, or NULL if it fails.
*/
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = allocate_memory(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	return (new_node);
}
