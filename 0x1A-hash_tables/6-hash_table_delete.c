#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: the hash table to delete.
 *
 * Description: This function deletes a hash table. It frees each key/value
 *			pair in the hash table, then frees the array of the hash table, and
 *			finally frees the hash table itself.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	if (ht == NULL)
	{
		return;
	}

	/* iterate over the array */
	for (i = 0; i < ht->size; i++)
	{
		/* free the linked list at each index */
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	/* free the array and the hash table */
	free(ht->array);
	free(ht);
}
