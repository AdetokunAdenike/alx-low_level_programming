#include "main.h"

/**
 * append_text_to_file - The function appends text
 *	at the end of a file.
 * @filename: filename.
 * @text_content: The texts to append.
 *
 * Return: Returns 1 on success, and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t bytes_written;
	size_t text_length = 0;

	if (!filename)
	return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
	return (-1);

	if (text_content)
	{

	while (text_content[text_length])
	text_length++;

	bytes_written = write(file_descriptor, text_content, text_length);
	if (bytes_written == -1 || (size_t)bytes_written != text_length)
	{
	close(file_descriptor);
	return (-1);
	}
	}

	close(file_descriptor);
	return (1);
}
