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

	/* Changing bytes_read be of size_t type */
	bytes_read = (unsigned int)bytes_read;

	/* Printing number of bytes read */
	bytes_printed = write(1, buff, bytes_read);
	if (bytes_printed == -1)
		return (0);

	free(buff);
	close(fd);

	return (bytes_printed);
}
