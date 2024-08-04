#include "main.h"

/**
 *handle_err - Handles several error cases depending on the input error code.
 *@err_code: Error code, as int.
 *
 *Return: exits before returning, or returns -1
 */
void handle_err(int err_code, const char *file_name, int fd)
{
	switch (err_code)
	{
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			break;
		default:
			break;
	}
	exit(err_code);
}
/**
 *cp - Copies the contents of a file to another file.
 *@file_from: Source file.
 *@file_to: Destination file.
 *
 *Return: 1 on success, -1 if args are NULL pointers.
 */
int cp(const char *file_from, const char *file_to)
{
	ssize_t fd_from, fd_to, ret_read, ret_write;
	char buffer[1024];

	if (file_from == NULL || file_to == NULL)
		exit(-1);

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_from == -1)
		handle_err(98, file_from, fd_from);
	if(fd_to == -1)
		handle_err(99, file_to, fd_to);

	while ((ret_read = read(fd_from, buffer, 1024)) != 0)
	{
		if (ret_read == -1)
			handle_err(98, file_from, fd_from);

		ret_write = write(fd_to, buffer, ret_read);

		if (ret_write == -1)
			handle_err(99, file_to, fd_to);
	}

	if (close(fd_from) == -1)
		handle_err(100, NULL, fd_from);

	if (close(fd_to) == -1)
		handle_err(100, NULL, fd_to);

	return (1);
}


/**
 *main - Entry point
 *@argc: Count of arguments passed to main
 *@argv: Array of arguments passed to main.
 *
 *Return: 0 on success, calls error handler on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp(argv[1], argv[2]);

	return (0);
}

