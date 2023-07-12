#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file
 * @filename: name of the file to create or path
 * @text_content: The text to write into the file created
 * Return: On success, 1. On error, -1 if file cannot be created,
 * file cannot be written, "write fails" or filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n, textlen = 0;

	while (text_content[textlen])
		textlen++;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT);
	if (fd == -1)
		return (-1);

	n = write(fd, text_content, textlen);
	if (n == -1)
		return (-1);
	close(fd);

	return (1);
}
