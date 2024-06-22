#include "main.h"

/**
 * _strlen - returns the length of the string
 *
 * @str: the string
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int length = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strncpy - function copies a string
 *
 * @new_str: pointer to the destination string
 * @old_str: pointer to the source string
 * @size: the number of bytes to be copied from old_str to new_str
 *
 * Return: the new string
 */
char *_strncpy(char *new_str, char *old_str, int size)
{
	int i;

	if (old_str == NULL)
	{
		return (0);
	}
	for (i = 0; i < size && old_str[i] != '\0'; i++)
	{
		new_str[i] = old_str[i];
	}
	do {
		new_str[i] = '\0';
		i++;
	} while (i < size);

	return (new_str);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: the string
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *new_str;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = _strlen(str);

	new_str = malloc(sizeof(char) * (length) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	_strncpy(new_str, str, length);
	return (new_str);

}
