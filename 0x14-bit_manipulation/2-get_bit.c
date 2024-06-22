#include "main.h"

/**
 * get_bit - function returns the value of a bit at a given index.
 *
 * @n: the number to use.
 * @index: the index in which to get the bit from.
 *
 * Return: the value of the bit at index or -1 if
 * an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	return ((n & mask) != 0);
}
