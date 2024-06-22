#include "hash_tables.h"

/**
 * hash_djb2 - implements the djb2 algorithm.
 *
 * @str: The string for which the hash value needs to be computed.
 *
 * Return: The hash value of the input string.
 *
 * Description: This fuction takes a string as an input and computes a hash
 *			value using the djb2 algorithm.
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	/* initialize the hash value to a large prime number */
	int c;

	while ((c = *str++))  /* loop over each character in the string */
	{
		/**
		 * update the hash value based on the current character.
		 * This is done by shifting the current hash value 5 bits to the left
		 * (multiplying by 32), adding the current value (multiplying by 33),
		 * and then adding the current character
		*/
		hash = ((hash << 5) + hash) + c;  /* hash * 33 + c */
	}
	return (hash);
}
