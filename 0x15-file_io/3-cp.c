#include "main.h"
#include <stdio.h>

/**
 * check_arguments - Checks if the correct number of arguments are provided.
 * @argc: Number of arguments.
 * Return: Returns 0 if the correct number of arguments are provided,
 * otherwise exits with status code 97.
 */
int check_arguments(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	return (0);
}

/**
 * copy_file - Copies the content from one file to another.
 * @file_from: File descriptor of the source file.
 * @file_to: File descriptor of the destination file.
 * @argv: Arguments vector.
 * Return: No return value.
 */
void copy_file(int file_from, int file_to, char *argv[])
{
	char buf[1024];
	ssize_t nchars, nwr;

	do {
		nchars = read(file_from, buf, sizeof(buf));
		if (nchars == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (nchars > 0);
}

/**
 * main - Entry point.
 * @argc: Number of arguments.
 * @argv: Arguments vector.
 * Return: Always returns 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	check_arguments(argc);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}

	copy_file(file_from, file_to, argv);

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
