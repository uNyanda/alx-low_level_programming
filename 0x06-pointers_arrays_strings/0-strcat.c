#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates 2 strings
 * @dest: first string
 * @src: second string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int c = 0, b = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[b] != '\0')
	{
		dest[c] = src[b];
		b++;
		c++;
	}

	dest[c] = '\0';
	return (dest);
}
