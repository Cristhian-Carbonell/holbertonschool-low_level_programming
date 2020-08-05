#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: is the name of the file to create
 * @text_content: string
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t count = 0;

	if (filename == NULL)
		return (-1);
	if (filename == filename)
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		while (text_content[count])
			count++;
	write(fd, text_content, count);
	close(fd);
	return (1);
}
