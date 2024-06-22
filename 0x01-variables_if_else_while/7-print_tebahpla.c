#include <stdio.h>

/**
 * main - Entry point
 * Description - This program prints alphabets in reverse
 * Return: 0 (Success)
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
