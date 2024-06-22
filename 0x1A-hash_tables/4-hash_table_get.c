#include "hash_tables.h"

/**
 * hash_table_get - This function retrieves a value associated with a key in a
 *				hash table.
 *
 * @ht: This is the hash table we want to look into. It's a pointer to a
 *		hash_table_t structure.
 * @key: This is the key we are looking for. It's a string.
 *
 * Description: The function works by first checking if the hash table and the
 *			key are not NULL and the key is not an empty string. If any of these
 *			conditions is not met, the function returns NULL. Then, it computes
 *			the index in the hash table where the key/value pair should be
 *			stored using the key_index function. After that, it traverses the
 *			linked list at this index. For each node in the linked list, it
 *			compares the node's key with the given key. If a node with the same
 *			key is found, the function returns the value associated with that
 *			key. If no node with the same key is found after traversing the
 *			entire linked list, the function returns NULL.
 *
 * Return: The function returns the value associated with the element, or NULL
 *		if the key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	/* compute the index in the hash table where the key/value pair should be */
	index = key_index((const unsigned char *)key, ht->size);

	/* traverse the linked list at this index */
	for (node = ht->array[index]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			/* if a node with the same key is found, return its value */
			return (node->value);
		}
	}
	/* if no node with the same key is found, return NULL */
	return (NULL);
}
