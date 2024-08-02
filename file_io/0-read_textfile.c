#include "main.h"

/**
 *read_textfile - Reads a text file and prints it to stdout.
 *@filename: File name, as char *.
 *@letters: Count of letters to be read and printed, as size_t.
 *
 *Return: The count of letters printed, or 0 if failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* Open the file and handle failure */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allocate buffer and handle failure */
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	/* Read from file, write to stdout, handle failure */
	bytes_read = read(fd, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_read == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Clean up file desc leaks */
	free(buffer);
	close(fd);

	return (bytes_written);
}
