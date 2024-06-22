#include "hash_tables.h"

/**
 * key_index - gives you index of a key.
 *
 * @key: is the key.
 * @size: is the size of the array of the hash table.
 *
 * Return: the index at which the key/value pair should be stored in the array.
 *
 * Description: This function uses the djb2 algorithm to compute the hash value
 *			of the key, and then computes the index of the key/value pair to be
 *			stored in the array of the hash table by using the modulo operator.
 *			Return this index.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* compute the hash value of the key using djb2 algorithm */
	unsigned long int hash_value = hash_djb2(key);

	/* compute the index within the size of the array using the modulo op. */
	unsigned long int index = hash_value % size;

	return (index);  /* return the index */
}
