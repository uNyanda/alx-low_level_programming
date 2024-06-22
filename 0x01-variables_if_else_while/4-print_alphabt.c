#include <stdio.h>

/**
 * main - Entry point
 * Description - This program prints alphabet ina new line except q and e
 * Return: 0 if (success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
