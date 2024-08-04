#include "main.h"

/**
 *err_handler - Handles several error cases depending on the input error code.
 *@err_code: Error code, as int.
 *
 *Return: void
 */
void err_handler(int err_code)
{
	case (err_code)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name
	}
}

/**
 *cp - Copies the contents of a file to another file.
 *@file_from: Source file.
 *@file_to: Destination file.
 *
 *Return: 1 on success, -1 on failure.
 */
int cp(const char *file_from, const char *file_to)
{
	ssize_t fd_from, fd_to;

	if (file_from == NULL || file_to == NULL)
		return (-1);

	fd_from = open(filename, O_WRONLY | S_IRUSR | S_IWUSR);
	fd_to = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd_from == -1)
		return (-98);
	if(fd_to == -1)
		return (-99);

	if (write(fd, text_content, text_len) == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}


/**
 *main - Entry point
 *@argc: Count of arguments passed to main
 *@argv: Array of arguments passed to main.
 *
 *Return: 1 on success, -1 on failure.
 */
int main(int argc, char *argv[])
{

}

