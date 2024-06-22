#include "main.h"

char *_memset(char *s, char c, unsigned int n);

/**
 * _calloc - function allocates memory for an array, using malloc
 *
 * @nmemb: the number of elements in an array
 * @size: bytes of each element in the array
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(size * nmemb);

	if (array == NULL)
	{
		return (NULL);
	}

	_memset(array, 0, size * nmemb);

	return (array);
}

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to the memory area
 * @n: number of bytes of the memory area
 * @c: constant byte to fill the memory area
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = c;
	}
	return (s);
}
