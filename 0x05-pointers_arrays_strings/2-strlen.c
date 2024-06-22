#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pointer to print string length
 * Return: count
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

