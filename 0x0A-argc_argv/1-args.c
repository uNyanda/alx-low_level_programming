#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: Program prints the number of arguments passed into it
 *
 * @argc: argument count (number of arguments passed into the program)
 * @argv: argument vector (array of arguments passed into the program)
 *
 * Return: always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
