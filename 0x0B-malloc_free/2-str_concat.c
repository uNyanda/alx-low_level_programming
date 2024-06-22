#include "main.h"

/**
 * _strlen - returns the length of a string
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
 * _strcpy - copies a string pointed to by src
 *
 * @src: copy from
 * @dest: copy to
 *
 * Return: copy
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: on success, concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int length1;
	int length2;
	char *new_str;

	if (s1 != NULL)
	{
		length1 = _strlen(s1);
	}
	if (s2 != NULL)
	{
		length2 = _strlen(s2);
	}

	new_str = malloc(sizeof(char) * (length1 + length2 + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		_strcpy(new_str, s1);
	}
	if (s2 != NULL)
	{
		_strcpy(new_str + length1, s2);
	}

	new_str[length1 + length2] = '\0';
	return (new_str);

}
