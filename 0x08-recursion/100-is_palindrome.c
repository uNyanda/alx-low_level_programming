#include "main.h"

int palindrome_helper(char *s, int i, int o);
int _strlen_recursion(char *s);

/**
 * is_palindrome - returns 1 if string is a palindrome and 0 if not
 *
 * @s: the string to check
 *
 * Return: 1 if true, else 0
 */
int is_palindrome(char *s)
{
	int v = _strlen_recursion(s);

	return (palindrome_helper(s, 0, v - 1));
}

/**
 * palindrome_helper - function checks if a string is a palindrome
 *
 * @s: the string to check
 * @i: the index to check
 * @o: the offset to check
 *
 * Return: 1 if true, else 0
 */
int palindrome_helper(char *s, int i, int o)
{
	if (i >= o)
	{
		return (1);
	}
	if (s[i] != s[o])
	{
		return (0);
	}
	else
	{
		return (palindrome_helper(s, i + 1, o - 1));
	}
}

/**
 * _strlen_recursion - function returns the length of a string
 *
 * @s: the string to return length of
 *
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
