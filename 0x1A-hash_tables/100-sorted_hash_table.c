#include "hash_tables.h"

/**
 * insert_sorted - inserts a node into the sorted linked list.
 *
 * @ht: the hash table.
 * @new_node: the new_node to insert.
 *
 * Description:
 */
void insert_sorted(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *node;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		return;
	}

	node = ht->shead;
	while (node != NULL && strcmp(node->key, new_node->key) < 0)
	{
		node = node->snext;
	}
	if (node == ht->shead)
	{
		new_node->snext = node;
		node->sprev = new_node;
		ht->shead = new_node;
	}
	else if (node == NULL)
	{
		ht->stail->snext = new_node;
		new_node->sprev = ht->stail;
		ht->stail = new_node;
	}
	else
	{
		new_node->snext = node;
		new_node->sprev = node->sprev;
		if (node->sprev != NULL)
		{
			node->sprev->snext = new_node;
		}
		node->sprev = new_node;
	}
}

/**
 * shash_table_create - creates a sorted hash table.
 *
 * @size: the size of the hash table.
 *
 * Return: the pointer to the newly allocated hash table.
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	/* allocate memory for the hash table */
	new_table = allocate_memory(sizeof(shash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}

	/* initialize the size */
	new_table->size = size;

	/* allocate memory for the array */
	new_table->array = allocate_memory(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/* initialize the array, shead, and stail */
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}
	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * shash_table_set - adds an element to the hash table.
 *
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key (cannot be an empty string)
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}
	/* compute the index in the hash table where the key/value pair should  be */
	index = key_index((const unsigned char *)key, ht->size);
	/* check if a node already exists with the same value */
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			/* if a node with the same key exists, update the value and return */
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	/* if no node exists with the same key, create a new node */
	new_node = allocate_memory(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	/* initialize the new node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	new_node->sprev = NULL;
	new_node->snext = NULL;
	/* add the new node to the hash table */
	ht->array[index] = new_node;
	/* insert the new node into the sorted linked list */
	insert_sorted(ht, new_node);

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key in the sorted hash
 *				table.
 *
 * @ht: The sorted hash table.
 * @key: The key to find.
 *
 * Return: The associated value, or NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	/* Compute the index in the hash table where the key/value pair should be */
	index = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at this index */
	for (node = ht->array[index]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			/* If a node with the same key is found, return its value */
			return (node->value);
		}
	}

	/* If no node with the same key is found, return NULL */
	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 *
 * @ht: The sorted hash table to print.
 *
 * This function prints each key/value pair in the sorted hash table in the
 * order
 * they appear in the sorted linked list. If the hash table is NULL,
 * it doesn't print anything.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	char *delimiter = "";

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	/* Iterate over the sorted linked list */
	for (node = ht->shead; node != NULL; node = node->snext)
	{
		printf("%s'%s': '%s'", delimiter, node->key, node->value);
		delimiter = ", ";
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 *
 * @ht: The sorted hash table to print.
 *
 * This function prints each key/value pair in the sorted hash table in reverse
 * order they appear in the sorted linked list. If the hash table is NULL,
 * it doesn't print anything.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	char *delimiter = "";

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	/* Iterate over the sorted linked list in reverse */
	for (node = ht->stail; node != NULL; node = node->sprev)
	{
		printf("%s'%s': '%s'", delimiter, node->key, node->value);
		delimiter = ", ";
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 *
 * @ht: The sorted hash table to delete.
 *
 * This function deletes a sorted hash table. It frees each key/value pair in
 * the hash table, then frees the array of the hash table, and finally frees
 * the hash table itself.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *tmp;

	if (ht == NULL)
	{
		return;
	}

	/* Iterate over the array */
	for (i = 0; i < ht->size; i++)
	{
		/* Free the linked list at each index */
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node->snext;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}

	/* Free the array and the hash table */
	free(ht->array);
	free(ht);
}

/**
 * allocate_memory - function allocates memory.
 *
 * @size: the size of the memory to allocate.
 *
 * Description: This function is designed to allocate
 *			memory dynamically using 'malloc'. If
 *			allocation fails, it prints an error
 *			message and returns NULL, else it returns
 *			a pointer to the newly allocated memory.
 *
 * Return: pointer to the newly allocated memory.
*/
void *allocate_memory(size_t size)
{
	void *ptr = malloc(size);

	if (ptr == NULL)
	{
		printf("Memory allocation failed.\n");
		return (NULL);
	}
	return (ptr);
}
