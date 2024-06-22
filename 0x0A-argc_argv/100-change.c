#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for
 * an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int cents;
	int coins = 0;

	int denominations[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents > 0)
	{
		coins = coins + cents / 25;
		cents %= 25;
		coins += cents / 10;
		cents %= 10;
		coins += cents / 5;
		cents %= 5;
		coins += cents / 2;
		cents %= 2;
		coins += cents;
	}
	printf("%d\n", coins);
	return (0);
}
