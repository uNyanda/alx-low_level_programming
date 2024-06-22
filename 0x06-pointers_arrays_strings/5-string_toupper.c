#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @b: pointer representing alphabets
 * Return: uppercase letters
 */

char *string_toupper(char *b)
{
	int c = 0;

	while (b[c] != '\0')
	{
		if (b[c] >= 'a' && b[c] <= 'z')
			b[c] = b[c] - 32;
	c++;
	}
	return (b);

}
