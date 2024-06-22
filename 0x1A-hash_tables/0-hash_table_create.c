#include "hash_tables.h"

/**
 * hash_table_create - function creates a hash table.
 *
 * @size: the size of the array.
 *
 * Return: pointer to the newly allocated hash table.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	/* allocate memory for the hash table structure */
	new_table = allocate_memory(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}

	/* initialize the size */
	new_table->size = size;

	/* allocate memory for the array */
	new_table->array = allocate_memory(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/* initialize all array elements to NULL */
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}

	return (new_table);
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
