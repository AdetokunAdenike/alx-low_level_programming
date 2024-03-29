#include "main.h"

/**
 * read_textfile - Reads a text file and prints the specified number of letters
 * @filename: The name of the file to read
 * @letters: The number of letters to print
 *
 * Return: On success, the number of letters will be
 *	printed. Otherwise, 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (!filename)
	return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
	close(file_descriptor);
	return (0);
	}


	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
	close(file_descriptor);
	free(buffer);
	return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
	free(buffer);
	return (0);
	}

	close(file_descriptor);
	free(buffer);
	return (bytes_written);
}
