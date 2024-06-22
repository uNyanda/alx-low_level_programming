#include "main.h"

/**
 * read_textfile - function reads a textfile and prints it to the POSIX
 * standard output.
 *
 * @filename: the name of the file.
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, fread, fwrite;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char *) * letters);

	fd = open(filename, O_RDONLY);

	fread = read(fd, buffer, letters);

	if (fd == -1 || fread == -1)
	{
		return (0);
	}

	fwrite = write(STDOUT_FILENO, buffer, fread);

	if (fwrite == -1)
	{
		return (0);
	}

	free(buffer);
	close(fd);
	return (fread);

}
