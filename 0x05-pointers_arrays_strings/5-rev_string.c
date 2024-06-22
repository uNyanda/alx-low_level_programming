#include "main.h"

/**
 * rev_string - function that reverse string
 * @s: string to print
 */

void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int c;

	while (s[count] != '\0')
		count++;
	for (c = 0; c < count; c++)
	{
		count--;
		rev = s[c];
		s[c] = s[count];
		s[count] = rev;
	}
}
