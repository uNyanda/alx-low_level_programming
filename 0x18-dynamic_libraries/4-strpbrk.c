#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match in s
 * Return: s on success, else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
