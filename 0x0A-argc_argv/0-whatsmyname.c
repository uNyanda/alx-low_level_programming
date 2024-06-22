#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: Program prints its name, followed by a new line
 *
 * @argc: argument count (number of arguments passed to the program)
 * @argv: argument vector (array of arguments passed to the program)
 *
 * Return: always 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
