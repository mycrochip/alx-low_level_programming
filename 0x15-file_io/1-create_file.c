#include <stdio.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - Function that creates a file.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 * Return: On success, 1, otherwise, -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length;
	ssize_t n_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		length = 0;
		while (*(text_content + length) != '\0')
			lenght++;
		n_write = write(fd, text_content, length);
		if (n_write == -1)
		{
			write(1, "fails\n", 6);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
