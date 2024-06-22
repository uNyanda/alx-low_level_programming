#include "main.h"

/**
 * _memcpy - function that copies memory area
 * Description - Copies n bytes from memory area src to dest
 * @dest: pointer to the destination array
 * @src: pointer to the source array
 * @n: the number of bytes to be copied from source to destination
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int r;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
