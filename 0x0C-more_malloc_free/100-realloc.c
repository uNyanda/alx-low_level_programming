#include "main.h"

/**
 * _realloc - function reallocates memory block using malloc
 * and free
 *
 * @ptr: pointer to the memory previously allocated with a call
 * to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the size, in bytes, of the new memory block
 *
 * Return: pointer to new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_ptr;
	char *new_ptr;
	unsigned int size;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	size = new_size > old_size ? new_size : old_size;

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			new_ptr[i] = old_ptr[i];
		}
	}
	else
	{
		for (i = 0; i < old_size; i++)
		{
			new_ptr[i] = old_ptr[i];
		}
	}

	free(old_ptr);

	return (new_ptr);
}
