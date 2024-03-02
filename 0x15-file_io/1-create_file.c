#include "main.h"

/**
 * create_file - The function creates a file and writes content to it.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: Returns 1 on success, and -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t text_length = 0;

	if (!filename)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	text_content = "";

	while (text_content[text_length])
	text_length++;

	bytes_written = write(fd, text_content, text_length);
	if (bytes_written == -1)
	{
	close(fd);
	return (-1);
	}

	close(fd);

	return (1);
}
