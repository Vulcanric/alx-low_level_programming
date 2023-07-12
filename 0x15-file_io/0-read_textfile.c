#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: The file to read from
 * @letters: Number of letters to read and print
 *
 * Return: On success, the actual number of letters it could read and print.
 * On error, 0 if "filename" is NULL, or file can not be opened or read, or if
 * write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* Variable to hold file descriptor of file opened */
	int bytes_read, bytes_printed;
	char *buff; /* Buffer to hold chars read */

	buff = (malloc(sizeof(char) * letters + 1));
	if (!filename || letters == 0 || buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1) /* When file cannot be opened */
		return (0);

	bytes_read = read(fd, buff, letters); /* Read from file with fildes fd */
	bytes_read = (unsigned)bytes_read; /* Changing bytes_read be of size_t type */
	bytes_printed = dprintf(2, "%s", buff);
	close(fd);

	return (bytes_printed);
}
