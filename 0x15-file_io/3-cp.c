#include "main.h"

char *allocate_buffer(char *file);
void close_file(int fd);

/**
 * allocate_buffer - function allocates 1024 bytes of memory
 * of a buffer.
 *
 * @file: the name of the buffer.
 *
 * Return: pointer to the newly allocated buffer.
 */
char *allocate_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char *) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - function closes a file descriptor.
 *
 * @fd: the file descriptor to close.
 *
 * Return: void.
 */
void close_file(int fd)
{
	int fclose;

	fclose = close(fd);

	if (fclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Program copies the contents of a file to another file.
 *
 * Description: If the number of arguments is not correct,
 * exit with code 97.
 * If file_from does not exist, or can't read it,
 * exit with code 98.
 * If file_to can't be created, or can't write to it,
 * exit with code 99.
 * If files can't be closed, exit with code 100.
 *
 * @argc: argument count (number of arguments passed to the program).
 * @argv: argument vector (array of arguments).
 *
 * Return: On success, 0.
 */
int main(int argc, char *argv[])
{
	char *buf;
	int fd_from, fread, fd_to, fwrite;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = allocate_buffer(argv[2]);

	fd_from = open(argv[1], O_RDONLY);
	fread = read(fd_from, buf, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);

	do {
		if (fd_from == -1 || fread == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		fwrite = write(fd_to, buf, fread);
		if (fd_to == -1 || fwrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		fread = read(fd_from, buf, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (fread > 0);

	free(buf);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

