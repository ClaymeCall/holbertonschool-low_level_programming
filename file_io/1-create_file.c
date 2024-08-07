#include "main.h"

/**
 *create_file - Creates a file and writes a string in it.
 *@filename: Name of the file to create, as const char *.
 *@text_content: Contents to write in it, as char *
 *
 *Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd;
	char *empty_str = "";
	int text_len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = empty_str;
	else
	{
		while (text_content[text_len])
			text_len++;
	}

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
