#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: Program prints all arguments it receives
 *
 * @argc: argument count (number of arguments passed into the program)
 * @argv: argument vector (array of arguments passed into the program)
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
