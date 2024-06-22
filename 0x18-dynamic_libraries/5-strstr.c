#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: main string to be examined
 * @needle: substring to be searched in haystack string
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *b = needle;

		while (*l == *b && *b != '\0')
		{
			l++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (0);
}
