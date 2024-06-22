#include "main.h"

/**
 * times_table - This function prints the 9 times table
 */

void times_table(void)
{
	int num = 0;
	int nine;
	int multi;

	while (num <= 9)
	{
		nine = 0;
		while (nine <= 9)
		{
			multi = num * nine;
			if (nine == 0)
			{
				_putchar('0' + multi);
			}
			else if (multi < 10)
			{
				_putchar(' ');
				_putchar('0' + multi);
			}
			else
			{
				_putchar('0' + multi / 10);
				_putchar('0' + multi % 10);
			}

			if (nine < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			nine++;
		}
		_putchar('\n');
		num++;
	}
}
