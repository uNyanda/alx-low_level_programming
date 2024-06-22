#include "main.h"

/**
 * _isalpha - This function checks for alphabetic characters
 * @c: the character to print
 * Return: 1 (success) , otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
