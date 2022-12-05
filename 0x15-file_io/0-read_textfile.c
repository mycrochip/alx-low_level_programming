#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - Function that reads a text file and prints it to the POSIX
 * standard output.
 * @filename: Name of text file.
 * @letters: Number of letters it should read and print.
 * Return: On success, actual number of letters it could read and print,
 * otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n_read, n_write;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	n_read = read(fd, buf, letters);
	if (n_read == -1)
	{
		free(buf);
		return (0);
	}
	n_write = write(STDOUT_FILENO, buf, n_read);
	if (n_write == -1 || n_read != n_write)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (n_write);
}
