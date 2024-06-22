#include "main.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes
 *
 * Return: NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else
	{
		len1 = _strlen(s1);
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		len2 = _strlen(s2);
	}

	if (n >= len2)
	{
		n = len2;
	}

	new_str = malloc(sizeof(char) * (len1 + n + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	_strcpy(new_str, s1);

	_strcpy(new_str + len1, s2);

	new_str[len1 + n] = '\0';

	return (new_str);
}

/**
 * _strlen - returns the length of a string
 *
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strcpy - function copies a string
 *
 * @dest: pointer to the destination string to copy to
 * @src: pointer to the source string to copy from
 *
 * Return: pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
