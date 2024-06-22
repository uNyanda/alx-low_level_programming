#include "main.h"

/**
 * append_text_to_file - function appends text at the
 * end of a file.
 *
 * @filename: the name of the file.
 * @text_content: NULL terminated string to add at the end
 * of the file.
 *
 * Return: On success, 1.
 * On error, -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fwrite, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

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
