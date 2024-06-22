#include "main.h"

/**
 * create_file - function creates a file.
 *
 * @filename: the name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: On success, 1
 * On error, -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fwrite, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR + S_IWUSR);
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
		{
			length++;
		}
	}

	fwrite = write(fd, text_content, length);

	if (fd == -1 || fwrite == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
