#include "main.h"
#include <sys/types.h> /* To temporarily change the permision mask */
#include <sys/stat.h> /* Same here */

/**
 * main - Copies the content of a file to another file
 * @argc: Argument counter
 * @argv: File names taken as cmdline arguments(Argument vector)
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int bytes_read, bytes_written, fd, fd_from, fd_to;
	char *file_from, *file_to, buff[SIZE];
	mode_t old_mask;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	old_mask = umask(0); /* Changing the mask to 000 */
	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 00664);
	umask(old_mask); /* Changing the mask back to the default mask */

	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		exit(98);
	}
	bytes_read = read(fd_from, buff, SIZE);
	bytes_written = write(fd_to, buff, bytes_read);
	if (bytes_written == -1 || fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		close(fd_to);
		exit(99);
	}
	while (close(fd_to) != 0 || close(fd_from) != 0)
	{
		if (!close(fd_to))
			fd = fd_to;
		else
			fd = fd_from;
		dprintf(2, "Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
