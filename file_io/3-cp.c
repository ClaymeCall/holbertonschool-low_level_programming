#include "main.h"

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

	/*------ WIP ------ */

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

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

