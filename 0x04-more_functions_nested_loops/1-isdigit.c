#include "main.h"

/**
 * _isdigit - Checks for digits from 0 to 9
 * @c: Digit that will be printed
 * Return: 1 (true) else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)

		return (1);

	else
		return (0);
}
