#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned integer.
 *
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: converted number or 0 if
 *	 the string has characters that are not 0 or 1
 *	 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b == '1')
		{
			num = (num << 1) + 1;
		}
		else if (*b == '0')
		{
			num = num << 1;
		} else
			return (0);
		b++;
	}
	return (num);
}
