#include <stdio.h>
#include <stdlib.h>

int _is_digit(char c);

/**
 * main - entry point
 *
 * Describe: Program adds positive numbers
 *
 * @argc: argument count (number of arguments passed into the program)
 * @argv: argument vector (array of arguments passed into the program)
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j = 0;
	char *args;

	for (i = 1; i < argc; i++)
	{
		args = argv[i];

		for (j = 0; args[j] != '\0'; j++)
		{
			if (!_is_digit(args[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(args);
	}
	printf("%d\n", sum);

	return (0);
}

/**
 * _is_digit - checks if the character is a digit
 *
 * @c: character to check
 *
 * Return: integer
 */
int _is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
