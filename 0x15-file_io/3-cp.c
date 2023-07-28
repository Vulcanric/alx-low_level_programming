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
	int bytes_read, bytes_written = 0, fd_from, fd_to, fd, r1, r2;
	char *file_from, *file_to, buff[SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);

	if (fd_from != -1)
	{
		fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 00664);
		bytes_read = read(fd_from, buff, SIZE);
		bytes_written = write(fd_to, buff, bytes_read);
	}

	if (fd_from == -1 || bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		exit(98);
	}

	if (bytes_written == -1 || fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		close(fd_to);
		close(fd_from);
		exit(99);
	}

	/* Read file chunck by chunk until EOF is reached */
	while (bytes_read != 0)
	{
		bytes_read = read(fd_from, buff, SIZE);
		bytes_written = write(fd_to, buff, bytes_read);
	}
	r1 = close(fd_from);
	r2 = close(fd_to);
	if (r1 != 0)
		fd = fd_from;
	if (r2 != 0)
		fd = fd_to;
	if (r2 != 0 || r1 != 0)
	{
		dprintf(2, "Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
