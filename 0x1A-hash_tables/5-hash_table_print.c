#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: the hash table to print.
 *
 * Description: This function prints each key/value pair in the hash table in
 *			the order they appear in the array of the hash table. If the hash
 *			table is empty (NULL), it doesn't print anything.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *delimeter = "";

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	/* iterate over the array */
	for (i = 0; i < ht->size; i++)
	{
		/* iterate over the linked list at each index */
		for (node = ht->array[i]; node != NULL; node = node->next)
		{
			printf("%s'%s': '%s'", delimeter, node->key, node->value);
			delimeter = ", ";
		}
	}
	printf("}\n");
}
