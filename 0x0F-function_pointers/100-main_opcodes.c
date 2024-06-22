#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints the opcodes of its own main function
 *
 * @argc: argument count (number of arguments passed to the
 * program)
 * @argv: argument vector (array of arguments passed to the
 * program)
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	char *ptr;

	int size;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)(main);

	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			printf("%02hhx ", ptr[i]);
			break;
		}
		printf("%02hhx ", *(ptr + i));
	}
	printf("\n");
	return (0);
}
