#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end to a file
 * @filename: The filename to open and append in
 * @text_content: The NULL terminated string to add
 * Return: O success, 1, otherwise, -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_write, length;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		length = 0;
		while (*(text_content + length) != '\0')
			length++;
		n_write = write(fd, text_content, length);
		if (n_write == -1)
		{
			close(fd);
			write(STDOUT_FILENO, "Fails\n", 6);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
