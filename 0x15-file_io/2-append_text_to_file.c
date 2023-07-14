#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file to access
 * @text_content: Text to append at the end of file
 * Return: 1, if successful, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t rn;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (text_content)
	{
		rn = write(fd, text_content, strlen(text_content));
		if (rn == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
